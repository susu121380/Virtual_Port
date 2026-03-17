/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *portComboBox;
    QPushButton *refreshButton;
    QLabel *label_2;
    QSpinBox *sendIntervalSpinBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *sendCountLabel;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *frameHeaderComboBox;
    QLabel *label_5;
    QLineEdit *dataLineEdit;
    QPushButton *sendCustomButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *logTextEdit;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *rxLogTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 757);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        portComboBox = new QComboBox(groupBox);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));

        horizontalLayout->addWidget(portComboBox);

        refreshButton = new QPushButton(groupBox);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        horizontalLayout->addWidget(refreshButton);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        sendIntervalSpinBox = new QSpinBox(groupBox);
        sendIntervalSpinBox->setObjectName(QString::fromUtf8("sendIntervalSpinBox"));
        sendIntervalSpinBox->setMinimum(5);
        sendIntervalSpinBox->setMaximum(10000);
        sendIntervalSpinBox->setValue(100);

        horizontalLayout->addWidget(sendIntervalSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        startButton = new QPushButton(groupBox_2);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setMinimumSize(QSize(120, 35));
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8b40;\n"
"}\n"
"QPushButton:disabled {\n"
"    background-color: #cccccc;\n"
"    color: #666666;\n"
"}"));

        horizontalLayout_2->addWidget(startButton);

        stopButton = new QPushButton(groupBox_2);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setMinimumSize(QSize(120, 35));
        stopButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f44336;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #da190b;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #c41408;\n"
"}\n"
"QPushButton:disabled {\n"
"    background-color: #cccccc;\n"
"    color: #666666;\n"
"}"));

        horizontalLayout_2->addWidget(stopButton);

        statusLabel = new QLabel(groupBox_2);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sendCountLabel = new QLabel(groupBox_2);
        sendCountLabel->setObjectName(QString::fromUtf8("sendCountLabel"));
        sendCountLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 13px;\n"
"    padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(sendCountLabel);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);


        verticalLayout->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            border: 2px solid #D6EAF8;\n"
"            border-radius: 12px;\n"
"            margin-top: 15px;\n"
"            padding: 12px;\n"
"            color: rgb(255, 255, 255);\n"
"			background-color: rgb(80, 80, 80);\n"
"        }\n"
"        QGroupBox::title {\n"
"            subcontrol-origin: margin;\n"
"            subcontrol-position: top left;\n"
"            left: 12px;\n"
"            top: -0px;\n"
"            padding: 0 8px;\n"
"            color: rgb(255, 255, 255);\n"
"            font-weight: bold;\n"
"            font-size: 11pt;\n"
"        }\n"
"        QComboBox {\n"
"            background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                        stop:0 #FFFFFF, stop:1 #F5F7FA);\n"
"            border: 2px solid #E8EDF2;\n"
"            border-radius: 12px;\n"
"            padding: 8px 12px;\n"
"            color: #2C3E50;\n"
"            font-family: '\345\276\256\350\275\257\351\233\205\351\273\221';\n"
"            font-size: 10pt;\n"
"  "
                        "          min-height: 20px;\n"
"        }\n"
"        QComboBox:hover {\n"
"            border: 2px solid #5DADE2;\n"
"        }\n"
"        QComboBox::drop-down {\n"
"            subcontrol-origin: padding;\n"
"            subcontrol-position: top right;\n"
"            width: 35px;\n"
"            border-left: 1px solid #E8EDF2;\n"
"            border-top-right-radius: 10px;\n"
"            border-bottom-right-radius: 10px;\n"
"        }\n"
"        QComboBox::down-arrow {\n"
"            image: url(:/Pix/png/Down.png);\n"
"            width: 12px;\n"
"            height: 12px;\n"
"        }\n"
"        QComboBox QAbstractItemView {\n"
"            border: 2px solid #E8EDF2;\n"
"            background-color: #FFFFFF;\n"
"            border-radius: 10px;\n"
"            padding: 4px;\n"
"        }\n"
"        QComboBox QAbstractItemView::item {\n"
"            border-radius: 6px;\n"
"            min-height: 32px;\n"
"            padding: 4px 8px;\n"
"        }\n"
"        QComboBox QAbstractItemView::item:hov"
                        "er {\n"
"            background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                        stop:0 #EBF5FB, stop:1 #D6EAF8);\n"
"        }\n"
"        QPushButton\n"
"        {\n"
"           font-family: '\345\276\256\350\275\257\351\233\205\351\273\221';\n"
"           color: white;\n"
"           border: none;\n"
"           background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop:0 #5DADE2, stop:1 #3498DB);\n"
"           border-radius: 8px;\n"
"           font-size: 8pt;\n"
"           font-weight: bold;\n"
"           padding: 8px 16px;\n"
"           min-height: 28px;\n"
"        }\n"
"        QPushButton:hover\n"
"        {\n"
"           background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop:0 #85C1E9, stop:1 #5DADE2);\n"
"        }\n"
"        QPushButton:pressed\n"
"        {\n"
"           background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop"
                        ":0 #2E86C1, stop:1 #21618C);\n"
"           padding-top: 10px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            background-color: transparent;\n"
"            border: 2px solid #3498DB;\n"
"            image: url(:/Pix/png/correct.png);\n"
"            width: 16px;\n"
"            height: 16px;\n"
"            border-radius: 4px;\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            background-color: #FFFFFF;\n"
"            border: 2px solid #BDC3C7;\n"
"            width: 16px;\n"
"            height: 16px;\n"
"            border-radius: 4px;\n"
"        }\n"
"        QLineEdit {\n"
"            background-color: #FFFFFF;\n"
"            border: 2px solid #E8EDF2;\n"
"            border-radius: 8px;\n"
"            padding: 6px 12px;\n"
"            color: #2C3E50;\n"
"            font-family: '\345\276\256\350\275\257\351\233\205\351\273\221';\n"
"            font-size: 10pt;\n"
"        }\n"
"        QLineEdit:hover {\n"
"            border: 2px solid #5DADE2;\n"
""
                        "        }\n"
"        QLineEdit:focus {\n"
"            border: 2px solid #3498DB;\n"
"        }\n"
"QDoubleSpinBox { \n"
"    background: #1f2326; \n"
"    color: #e6eef6;\n"
"    border: 1px solid rgba(255,255,255,0.06);\n"
"    border-radius: 6px;\n"
"    padding: 4px 10px 4px 10px; \n"
"    min-height: 28px; \n"
"    selection-background-color: rgba(255,255,255,0.12); \n"
"    selection-color: #ffffff; \n"
"    font: 15px \"Segoe UI\";\n"
"} \n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: none;\n"
"    background: transparent;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: none;\n"
"    background: transparent;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover {\n"
"    background: rgba(255,255,255,0.02);\n"
"} \n"
"\n"
""
                        "QDoubleSpinBox::up-arrow {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"	margin-top: -12px;\n"
"	image: url(:/Pix/png/Up.png);\n"
"}\n"
"\n"
"QDoubleSpinBox::down-arrow {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"	margin-top: 12px;\n"
"	image: url(:/Pix/png/downbtn.png);\n"
"}\n"
"\n"
"QDoubleSpinBox:focus { \n"
"    border: 1px solid qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #6dd3f5, stop:1 #7fffb5); \n"
"} \n"
"\n"
"QDoubleSpinBox:disabled { \n"
"    color: rgba(230,238,246,0.4);\n"
"    background: rgba(255,255,255,0.02);\n"
"    border-color: rgba(255,255,255,0.02); \n"
"}\n"
"  \n"
"QTextEdit {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #969696, stop:1 #282828);\n"
"    color: #E6EEF3;\n"
"    border: 1px solid rgba(255,255,255,0.8);\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-family: \"Segoe UI\", \"Microsoft YaHei\", Arial;\n"
"    font-size: 12px;\n"
"    selection-background-color: #2F7BC9;\n"
"    selection-color: #FFFFFF;\n"
""
                        "}\n"
"QTextEdit[readOnly=\"true\"] {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #252A30, stop:1 #1C2024);\n"
"    color: #AAB6C2;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background: transparent;\n"
"    width: 10px;\n"
"    margin: 8px 2px 8px 2px;\n"
"    border-radius: 6px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: rgba(255,255,255,0.10);\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: rgba(255,255,255,0.16);\n"
"}\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    height: 0;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    height: 8px;\n"
"    margin: 2px 8px 2px 8px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: rgba(255,255,255,0.10);\n"
"    min-width: 20px;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        frameHeaderComboBox = new QComboBox(groupBox_6);
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->addItem(QString());
        frameHeaderComboBox->setObjectName(QString::fromUtf8("frameHeaderComboBox"));

        horizontalLayout_3->addWidget(frameHeaderComboBox);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        dataLineEdit = new QLineEdit(groupBox_6);
        dataLineEdit->setObjectName(QString::fromUtf8("dataLineEdit"));

        horizontalLayout_3->addWidget(dataLineEdit);

        sendCustomButton = new QPushButton(groupBox_6);
        sendCustomButton->setObjectName(QString::fromUtf8("sendCustomButton"));

        horizontalLayout_3->addWidget(sendCustomButton);


        verticalLayout->addWidget(groupBox_6);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        logTextEdit = new QTextEdit(groupBox_4);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        logTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    font-family: Consolas, Monaco, monospace;\n"
"    font-size: 11px;\n"
"    background-color: #1e1e1e;\n"
"    color: #d4d4d4;\n"
"}"));
        logTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(logTextEdit);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        rxLogTextEdit = new QTextEdit(groupBox_5);
        rxLogTextEdit->setObjectName(QString::fromUtf8("rxLogTextEdit"));
        rxLogTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"        font-family: Consolas, Monaco, monospace;\n"
"        font-size: 11px;\n"
"        background-color: #111111;\n"
"        color: #a8d1ff;\n"
"    }"));
        rxLogTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(rxLogTextEdit);


        verticalLayout->addWidget(groupBox_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\231\232\346\213\237\344\270\262\345\217\243\346\225\260\346\215\256\345\217\221\351\200\201\345\267\245\345\205\267", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243:", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\351\227\264\351\232\224(ms):", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\345\217\221\351\200\201", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\217\221\351\200\201", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201: \346\234\252\350\277\236\346\216\245", nullptr));
        sendCountLabel->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\254\241\346\225\260: 0", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\240\274\345\274\217\350\257\264\346\230\216", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\214\205\346\240\274\345\274\217: A3 B4 55 [D1_L D1_H] [D2_L D2_H] ... [D8_L D8_H] FF FF\n"
"\342\200\242 \345\270\247\345\244\264: A3 B4\n"
"\342\200\242 \346\240\207\350\257\206: 55\n"
"\342\200\242 \346\225\260\346\215\256: 8\344\270\252int16_t\351\232\217\346\234\272\345\200\274 (\346\257\217\344\270\2522\345\255\227\350\212\202, \345\260\217\347\253\257\345\272\217)\n"
"\342\200\242 \345\270\247\345\260\276: FF FF\n"
"\342\200\242 \346\200\273\351\225\277\345\272\246: 21\345\255\227\350\212\202", nullptr));
        groupBox_6->setTitle(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\270\247\345\244\264:", nullptr));
        frameHeaderComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "A1 B1", nullptr));
        frameHeaderComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "A2 B2", nullptr));
        frameHeaderComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "00 01", nullptr));
        frameHeaderComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "01 01", nullptr));
        frameHeaderComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "02 01", nullptr));
        frameHeaderComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "03 01", nullptr));
        frameHeaderComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "04 01", nullptr));
        frameHeaderComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "05 01", nullptr));
        frameHeaderComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "06 01", nullptr));
        frameHeaderComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "07 01", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256:", nullptr));
        dataLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\215\201\345\205\255\350\277\233\345\210\266\346\225\260\346\215\256\357\274\214\345\246\202: 01 02 03", nullptr));
        sendCustomButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\350\207\252\345\256\232\344\271\211\346\225\260\346\215\256", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\227\245\345\277\227", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
