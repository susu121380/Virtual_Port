#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QScrollBar>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onStartButtonClicked();
    void onStopButtonClicked();
    void onRefreshButtonClicked();
    void sendData();
    void handleReadyRead();

    void on_sendCustomButton_clicked();

private:
    void setupSerialPort();
    void updatePortList();
    QByteArray generateDataPacket();
    QByteArray parseHexString(const QString &hexString);
    
    Ui::MainWindow *ui;
    QSerialPort *serialPort;
    QTimer *sendTimer;
    bool isRunning;
};
#endif // MAINWINDOW_H
