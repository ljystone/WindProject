/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_10;
    QLineEdit *serialNumber;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *openSerial;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *sendData;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *holdTimeMin;
    QLabel *label_7;
    QLineEdit *holdTimeMax;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *pressurePWMMin;
    QLabel *label_5;
    QLineEdit *pressurePWMMax;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *tempertaurePWMMin;
    QLabel *label_2;
    QLineEdit *tempertaurePWMMax;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *motorPluseMin;
    QLabel *label_4;
    QLineEdit *motorPluseMax;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *response;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(544, 476);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_3->addWidget(label_10);

        serialNumber = new QLineEdit(widget_2);
        serialNumber->setObjectName(QStringLiteral("serialNumber"));
        serialNumber->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_3->addWidget(serialNumber);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        openSerial = new QPushButton(widget_2);
        openSerial->setObjectName(QStringLiteral("openSerial"));

        horizontalLayout_3->addWidget(openSerial);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        sendData = new QPushButton(widget_2);
        sendData->setObjectName(QStringLiteral("sendData"));

        horizontalLayout_3->addWidget(sendData);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(81, 18, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(60, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(16);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(80, 18, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        holdTimeMin = new QLineEdit(widget);
        holdTimeMin->setObjectName(QStringLiteral("holdTimeMin"));
        holdTimeMin->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_7->addWidget(holdTimeMin);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        holdTimeMax = new QLineEdit(widget);
        holdTimeMax->setObjectName(QStringLiteral("holdTimeMax"));
        holdTimeMax->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_7->addWidget(holdTimeMax);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        pressurePWMMin = new QLineEdit(widget);
        pressurePWMMin->setObjectName(QStringLiteral("pressurePWMMin"));
        pressurePWMMin->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_6->addWidget(pressurePWMMin);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        pressurePWMMax = new QLineEdit(widget);
        pressurePWMMax->setObjectName(QStringLiteral("pressurePWMMax"));
        pressurePWMMax->setMaximumSize(QSize(71, 16777215));

        horizontalLayout_6->addWidget(pressurePWMMax);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tempertaurePWMMin = new QLineEdit(widget);
        tempertaurePWMMin->setObjectName(QStringLiteral("tempertaurePWMMin"));
        sizePolicy1.setHeightForWidth(tempertaurePWMMin->sizePolicy().hasHeightForWidth());
        tempertaurePWMMin->setSizePolicy(sizePolicy1);
        tempertaurePWMMin->setMaximumSize(QSize(71, 16777215));
        tempertaurePWMMin->setReadOnly(true);

        horizontalLayout->addWidget(tempertaurePWMMin);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        tempertaurePWMMax = new QLineEdit(widget);
        tempertaurePWMMax->setObjectName(QStringLiteral("tempertaurePWMMax"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tempertaurePWMMax->sizePolicy().hasHeightForWidth());
        tempertaurePWMMax->setSizePolicy(sizePolicy2);
        tempertaurePWMMax->setMaximumSize(QSize(70, 16777215));
        tempertaurePWMMax->setReadOnly(true);

        horizontalLayout->addWidget(tempertaurePWMMax);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        motorPluseMin = new QLineEdit(widget);
        motorPluseMin->setObjectName(QStringLiteral("motorPluseMin"));
        sizePolicy2.setHeightForWidth(motorPluseMin->sizePolicy().hasHeightForWidth());
        motorPluseMin->setSizePolicy(sizePolicy2);
        motorPluseMin->setMaximumSize(QSize(70, 16777215));
        motorPluseMin->setReadOnly(true);

        horizontalLayout_2->addWidget(motorPluseMin);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        motorPluseMax = new QLineEdit(widget);
        motorPluseMax->setObjectName(QStringLiteral("motorPluseMax"));
        sizePolicy2.setHeightForWidth(motorPluseMax->sizePolicy().hasHeightForWidth());
        motorPluseMax->setSizePolicy(sizePolicy2);
        motorPluseMax->setMaximumSize(QSize(70, 16777215));
        motorPluseMax->setReadOnly(true);

        horizontalLayout_2->addWidget(motorPluseMax);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        response = new QLineEdit(widget);
        response->setObjectName(QStringLiteral("response"));

        verticalLayout->addWidget(response);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 544, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\204\212\346\237\261\345\212\237\350\203\275\350\257\204\344\274\260\346\250\241\345\235\227", 0));
        label_10->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", 0));
        openSerial->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        sendData->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        label_9->setText(QApplication::translate("MainWindow", "\345\216\213\345\212\233\344\275\215\347\247\273\346\265\213\351\207\217\347\263\273\347\273\237", 0));
        label_8->setText(QApplication::translate("MainWindow", "\347\273\264\346\214\201\346\227\266\351\227\264\357\274\232  min(\344\270\215\344\275\216\344\272\216100ms)", 0));
        label_7->setText(QApplication::translate("MainWindow", "max:\344\270\215\350\266\205\350\277\207500ms", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\216\213\345\212\233   min:", 0));
        label_5->setText(QApplication::translate("MainWindow", "max:", 0));
        label->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\345\215\240\347\251\272\346\257\224   min\357\274\232", 0));
        tempertaurePWMMin->setText(QApplication::translate("MainWindow", "12", 0));
        label_2->setText(QApplication::translate("MainWindow", "max", 0));
        tempertaurePWMMax->setText(QApplication::translate("MainWindow", "14", 0));
        label_3->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\350\204\211\345\206\262     min\357\274\232", 0));
        motorPluseMin->setText(QApplication::translate("MainWindow", "35", 0));
        label_4->setText(QApplication::translate("MainWindow", "max:\344\270\215\350\266\205\350\277\207300kHz", 0));
        motorPluseMax->setText(QApplication::translate("MainWindow", "36", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
