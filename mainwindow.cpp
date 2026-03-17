#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , isRunning(false)
{
    ui->setupUi(this);
    
    // 初始化串口
    serialPort = new QSerialPort(this);
    connect(serialPort, &QSerialPort::readyRead, this, &MainWindow::handleReadyRead);
    
    // 初始化定时器
    sendTimer = new QTimer(this);
    connect(sendTimer, &QTimer::timeout, this, &MainWindow::sendData);
    
    // 连接按钮信号
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);
    connect(ui->refreshButton, &QPushButton::clicked, this, &MainWindow::onRefreshButtonClicked);
    connect(ui->sendCustomButton, &QPushButton::clicked, this, &MainWindow::on_sendCustomButton_clicked);
    
    // 初始化界面
    updatePortList();
    ui->stopButton->setEnabled(false);
    ui->statusLabel->setText("状态: 未连接");
    ui->sendIntervalSpinBox->setValue(100);
}

MainWindow::~MainWindow()
{
    if (serialPort->isOpen()) {
        serialPort->close();
    }
    delete ui;
}

void MainWindow::updatePortList()
{
    ui->portComboBox->clear();
    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : ports) {
        ui->portComboBox->addItem(info.portName());
    }
    
    if (ports.isEmpty()) {
        ui->portComboBox->addItem("无可用串口");
    }
}

void MainWindow::onRefreshButtonClicked()
{
    updatePortList();
    ui->logTextEdit->append(QString("[%1] 刷新串口列表")
        .arg(QDateTime::currentDateTime().toString("hh:mm:ss")));
}

void MainWindow::setupSerialPort()
{
    QString portName = ui->portComboBox->currentText();
    serialPort->setPortName(portName);
    serialPort->setBaudRate(QSerialPort::Baud115200);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);
}

void MainWindow::onStartButtonClicked()
{
    if (ui->portComboBox->currentText() == "无可用串口") {
        QMessageBox::warning(this, "警告", "没有可用的串口!");
        return;
    }
    
    setupSerialPort();
    
    if (serialPort->open(QIODevice::ReadWrite)) {
        isRunning = true;
        ui->startButton->setEnabled(false);
        ui->stopButton->setEnabled(true);
        ui->portComboBox->setEnabled(false);
        ui->refreshButton->setEnabled(false);
        ui->statusLabel->setText(QString("状态: 已连接(读写) - %1").arg(ui->portComboBox->currentText()));
        
        int interval = ui->sendIntervalSpinBox->value();
        sendTimer->start(interval);
        
        ui->logTextEdit->append(QString("[%1] 串口已打开(读写): %2, 波特率: 115200")
            .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
            .arg(ui->portComboBox->currentText()));
        ui->logTextEdit->append(QString("[%1] 开始发送数据, 间隔: %2ms")
            .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
            .arg(interval));
    } else {
        QMessageBox::critical(this, "错误", 
            QString("无法打开串口: %1\n错误: %2")
            .arg(ui->portComboBox->currentText())
            .arg(serialPort->errorString()));
    }
}

void MainWindow::onStopButtonClicked()
{
    sendTimer->stop();
    
    if (serialPort->isOpen()) {
        serialPort->close();
    }
    
    isRunning = false;
    ui->startButton->setEnabled(true);
    ui->stopButton->setEnabled(false);
    ui->portComboBox->setEnabled(true);
    ui->refreshButton->setEnabled(true);
    ui->statusLabel->setText("状态: 已断开");
    
    ui->logTextEdit->append(QString("[%1] 停止发送数据")
        .arg(QDateTime::currentDateTime().toString("hh:mm:ss")));
    ui->logTextEdit->append(QString("[%1] 串口已关闭")
        .arg(QDateTime::currentDateTime().toString("hh:mm:ss")));
}

QByteArray MainWindow::generateDataPacket()
{
    QByteArray data;
    
    // 帧头: A3 B4
    data.append(static_cast<char>(0xA3));
    data.append(static_cast<char>(0xB4));
    
    // 标识: 55
    data.append(static_cast<char>(0x55));
    
    // 生成8个随机int16_t值
    for (int i = 0; i < 8; i++) {
        // 生成-10000到10000之间的随机数
        qint16 value = static_cast<qint16>(QRandomGenerator::global()->bounded(-100, 101));
        // qint16 value = 100;
        // qDebug()<<"value:"<<value;
        
        // 添加低字节
        data.append(static_cast<char>(value & 0xFF));
        // 添加高字节
        data.append(static_cast<char>((value >> 8) & 0xFF));
    }
    
    // 帧尾: FF FF
    data.append(static_cast<char>(0xFF));
    data.append(static_cast<char>(0xFF));
    
    return data;
}

void MainWindow::sendData()
{
    if (!serialPort->isOpen()) {
        return;
    }
    
    QByteArray packet = generateDataPacket();
    qint64 bytesWritten = serialPort->write(packet);
    
    if (bytesWritten != -1) {
        // 格式化输出
        QString hexString;
        for (int i = 0; i < packet.size(); i++) {
            hexString += QString("%1 ").arg(static_cast<quint8>(packet[i]), 2, 16, QChar('0')).toUpper();
        }
        
        ui->logTextEdit->append(QString("[%1] 发送: %2")
            .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
            .arg(hexString.trimmed()));
        
        // 更新发送计数
        static quint32 sendCount = 0;
        sendCount++;
        ui->sendCountLabel->setText(QString("发送次数: %1").arg(sendCount));
        
        // 自动滚动到底部
        ui->logTextEdit->verticalScrollBar()->setValue(
            ui->logTextEdit->verticalScrollBar()->maximum());
    } else {
        ui->logTextEdit->append(QString("[%1] 发送失败: %2")
            .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
            .arg(serialPort->errorString()));
    }
}

void MainWindow::handleReadyRead()
{
    QByteArray data = serialPort->readAll();
    if (data.isEmpty()) return;

    QString hexString;
    hexString.reserve(data.size() * 3);
    for (int i = 0; i < data.size(); ++i) {
        hexString += QString("%1 ")
            .arg(static_cast<quint8>(data.at(i)), 2, 16, QChar('0')).toUpper();
    }

    ui->rxLogTextEdit->append(QString("[%1] 接收: %2")
        .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
        .arg(hexString.trimmed()));

    // 自动滚动到底部
    ui->rxLogTextEdit->verticalScrollBar()->setValue(
        ui->rxLogTextEdit->verticalScrollBar()->maximum());
}

QByteArray MainWindow::parseHexString(const QString &hexString)
{
    QByteArray data;
    QStringList parts = hexString.split(' ', QString::SkipEmptyParts);
    bool ok;
    for (const QString &part : parts) {
        quint8 byte = part.toUInt(&ok, 16);
        if (!ok || part.length() != 2) {
            return QByteArray(); // 无效格式
        }
        data.append(static_cast<char>(byte));
    }
    return data;
}

// 再这个里面发送自定义数据
void MainWindow::on_sendCustomButton_clicked()
{
    if (!serialPort->isOpen()) {
        QMessageBox::warning(this, "警告", "请先打开串口!");
        return;
    }

    // 获取帧头
    QString headerText = ui->frameHeaderComboBox->currentText();
    QByteArray headerData = parseHexString(headerText);
    if (headerData.isEmpty()) {
        QMessageBox::warning(this, "警告", "帧头格式错误!");
        return;
    }

    // 获取数据
    QString dataText = ui->dataLineEdit->text();
    QByteArray customData = parseHexString(dataText);
    if (customData.isEmpty() && !dataText.isEmpty()) {
        QMessageBox::warning(this, "警告", "数据格式错误!");
        return;
    }

    // 构建数据包
    QByteArray packet = headerData + customData;

    
    // 添加帧尾 FF FF
    packet.append(static_cast<char>(0xFF));
    packet.append(static_cast<char>(0xFF));

    // 发送数据
    qint64 bytesWritten = serialPort->write(packet);

    if (bytesWritten != -1) {
        // 格式化输出
        QString hexString;
        for (int i = 0; i < packet.size(); i++) {
            hexString += QString("%1 ").arg(static_cast<quint8>(packet[i]), 2, 16, QChar('0')).toUpper();
        }

        ui->logTextEdit->append(QString("[%1] 自定义发送: %2")
                                    .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
                                    .arg(hexString.trimmed()));

        // 自动滚动到底部
        ui->logTextEdit->verticalScrollBar()->setValue(
            ui->logTextEdit->verticalScrollBar()->maximum());
    } else {
        ui->logTextEdit->append(QString("[%1] 自定义发送失败: %2")
                                    .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
                                    .arg(serialPort->errorString()));
    }
}

