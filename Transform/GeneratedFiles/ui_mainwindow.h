/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainwindowClass
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    GLWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QVBoxLayout *verticalLayout_4;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_7;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;
    QSpinBox *spinBox_11;
    QSpinBox *spinBox_12;
    QSpinBox *spinBox_13;
    QSpinBox *spinBox_14;
    QSpinBox *spinBox_15;
    QVBoxLayout *verticalLayout_8;
    QSlider *horizontalSlider_7;
    QSlider *horizontalSlider_8;
    QSlider *horizontalSlider_9;
    QSlider *horizontalSlider_10;
    QSlider *horizontalSlider_11;
    QSlider *horizontalSlider_12;
    QSlider *horizontalSlider_13;
    QSlider *horizontalSlider_14;
    QSlider *horizontalSlider_15;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_10;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QVBoxLayout *verticalLayout_11;
    QSlider *horizontalSlider_16;
    QSlider *horizontalSlider_17;
    QSlider *horizontalSlider_18;
    QSlider *horizontalSlider_19;
    QSlider *horizontalSlider_20;
    QSlider *horizontalSlider_21;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwindowClass)
    {
        if (mainwindowClass->objectName().isEmpty())
            mainwindowClass->setObjectName(QStringLiteral("mainwindowClass"));
        mainwindowClass->resize(1800, 900);
        actionExit = new QAction(mainwindowClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(mainwindowClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(mainwindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalWidget = new GLWidget(centralWidget);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(20, 10, 1000, 800));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1030, -10, 611, 801));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 270, 351, 181));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout_3->addWidget(spinBox);

        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        verticalLayout_3->addWidget(spinBox_2);

        spinBox_3 = new QSpinBox(groupBox);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        verticalLayout_3->addWidget(spinBox_3);

        spinBox_4 = new QSpinBox(groupBox);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        verticalLayout_3->addWidget(spinBox_4);

        spinBox_5 = new QSpinBox(groupBox);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        verticalLayout_3->addWidget(spinBox_5);

        spinBox_6 = new QSpinBox(groupBox);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));

        verticalLayout_3->addWidget(spinBox_6);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider);

        horizontalSlider_2 = new QSlider(groupBox);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_2);

        horizontalSlider_3 = new QSlider(groupBox);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_3);

        horizontalSlider_4 = new QSlider(groupBox);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_4);

        horizontalSlider_5 = new QSlider(groupBox);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_5);

        horizontalSlider_6 = new QSlider(groupBox);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_6);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 2, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 510, 351, 281));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 40, 321, 234));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_6->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_6->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_6->addWidget(label_14);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_6->addWidget(label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_6->addWidget(label_16);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_6->addWidget(label_18);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        spinBox_7 = new QSpinBox(layoutWidget);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));

        verticalLayout_7->addWidget(spinBox_7);

        spinBox_8 = new QSpinBox(layoutWidget);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));

        verticalLayout_7->addWidget(spinBox_8);

        spinBox_9 = new QSpinBox(layoutWidget);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));

        verticalLayout_7->addWidget(spinBox_9);

        spinBox_10 = new QSpinBox(layoutWidget);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));

        verticalLayout_7->addWidget(spinBox_10);

        spinBox_11 = new QSpinBox(layoutWidget);
        spinBox_11->setObjectName(QStringLiteral("spinBox_11"));

        verticalLayout_7->addWidget(spinBox_11);

        spinBox_12 = new QSpinBox(layoutWidget);
        spinBox_12->setObjectName(QStringLiteral("spinBox_12"));

        verticalLayout_7->addWidget(spinBox_12);

        spinBox_13 = new QSpinBox(layoutWidget);
        spinBox_13->setObjectName(QStringLiteral("spinBox_13"));

        verticalLayout_7->addWidget(spinBox_13);

        spinBox_14 = new QSpinBox(layoutWidget);
        spinBox_14->setObjectName(QStringLiteral("spinBox_14"));

        verticalLayout_7->addWidget(spinBox_14);

        spinBox_15 = new QSpinBox(layoutWidget);
        spinBox_15->setObjectName(QStringLiteral("spinBox_15"));

        verticalLayout_7->addWidget(spinBox_15);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalSlider_7 = new QSlider(layoutWidget);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_7);

        horizontalSlider_8 = new QSlider(layoutWidget);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_8);

        horizontalSlider_9 = new QSlider(layoutWidget);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_9);

        horizontalSlider_10 = new QSlider(layoutWidget);
        horizontalSlider_10->setObjectName(QStringLiteral("horizontalSlider_10"));
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_10);

        horizontalSlider_11 = new QSlider(layoutWidget);
        horizontalSlider_11->setObjectName(QStringLiteral("horizontalSlider_11"));
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_11);

        horizontalSlider_12 = new QSlider(layoutWidget);
        horizontalSlider_12->setObjectName(QStringLiteral("horizontalSlider_12"));
        horizontalSlider_12->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_12);

        horizontalSlider_13 = new QSlider(layoutWidget);
        horizontalSlider_13->setObjectName(QStringLiteral("horizontalSlider_13"));
        horizontalSlider_13->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_13);

        horizontalSlider_14 = new QSlider(layoutWidget);
        horizontalSlider_14->setObjectName(QStringLiteral("horizontalSlider_14"));
        horizontalSlider_14->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_14);

        horizontalSlider_15 = new QSlider(layoutWidget);
        horizontalSlider_15->setObjectName(QStringLiteral("horizontalSlider_15"));
        horizontalSlider_15->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider_15);


        horizontalLayout_2->addLayout(verticalLayout_8);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 2, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 251, 211));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_9->addWidget(label_19);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_9->addWidget(label_20);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_9->addWidget(label_21);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_9->addWidget(label_22);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_9->addWidget(label_23);

        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_9->addWidget(label_24);


        gridLayout_3->addLayout(verticalLayout_9, 0, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        doubleSpinBox = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        verticalLayout_10->addWidget(doubleSpinBox);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));

        verticalLayout_10->addWidget(doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));

        verticalLayout_10->addWidget(doubleSpinBox_3);

        doubleSpinBox_4 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));

        verticalLayout_10->addWidget(doubleSpinBox_4);

        doubleSpinBox_5 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));

        verticalLayout_10->addWidget(doubleSpinBox_5);

        doubleSpinBox_6 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));

        verticalLayout_10->addWidget(doubleSpinBox_6);


        gridLayout_3->addLayout(verticalLayout_10, 0, 1, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalSlider_16 = new QSlider(groupBox_3);
        horizontalSlider_16->setObjectName(QStringLiteral("horizontalSlider_16"));
        horizontalSlider_16->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontalSlider_16);

        horizontalSlider_17 = new QSlider(groupBox_3);
        horizontalSlider_17->setObjectName(QStringLiteral("horizontalSlider_17"));
        horizontalSlider_17->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontalSlider_17);

        horizontalSlider_18 = new QSlider(groupBox_3);
        horizontalSlider_18->setObjectName(QStringLiteral("horizontalSlider_18"));
        horizontalSlider_18->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontalSlider_18);

        horizontalSlider_19 = new QSlider(groupBox_3);
        horizontalSlider_19->setObjectName(QStringLiteral("horizontalSlider_19"));
        horizontalSlider_19->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontalSlider_19);

        horizontalSlider_20 = new QSlider(groupBox_3);
        horizontalSlider_20->setObjectName(QStringLiteral("horizontalSlider_20"));
        horizontalSlider_20->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontalSlider_20);

        horizontalSlider_21 = new QSlider(groupBox_3);
        horizontalSlider_21->setObjectName(QStringLiteral("horizontalSlider_21"));
        horizontalSlider_21->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontalSlider_21);


        gridLayout_3->addLayout(verticalLayout_11, 0, 2, 1, 1);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(270, 70, 131, 81));
        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 89, 16));
        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 60, 111, 16));
        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(270, 160, 131, 91));
        radioButton_3 = new QRadioButton(groupBox_5);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 20, 89, 16));
        radioButton_4 = new QRadioButton(groupBox_5);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 40, 89, 16));
        radioButton_5 = new QRadioButton(groupBox_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(20, 60, 89, 16));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 30, 75, 23));
        mainwindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1800, 23));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        mainwindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainwindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainwindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuAbout->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(mainwindowClass);

        QMetaObject::connectSlotsByName(mainwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowClass)
    {
        mainwindowClass->setWindowTitle(QApplication::translate("mainwindowClass", "OpenGL-Transform", 0));
        actionExit->setText(QApplication::translate("mainwindowClass", "Exit", 0));
        actionAbout->setText(QApplication::translate("mainwindowClass", "About", 0));
        groupBox->setTitle(QApplication::translate("mainwindowClass", "View(Camera)", 0));
        label->setText(QApplication::translate("mainwindowClass", "X", 0));
        label_2->setText(QApplication::translate("mainwindowClass", "Y", 0));
        label_3->setText(QApplication::translate("mainwindowClass", "Z", 0));
        label_5->setText(QApplication::translate("mainwindowClass", "Pitch(X)", 0));
        label_6->setText(QApplication::translate("mainwindowClass", "Head(Y)", 0));
        label_7->setText(QApplication::translate("mainwindowClass", "Roll(Z)", 0));
        pushButton->setText(QApplication::translate("mainwindowClass", "Reset", 0));
        groupBox_2->setTitle(QApplication::translate("mainwindowClass", "Model(World)", 0));
        label_4->setText(QApplication::translate("mainwindowClass", "Poistion", 0));
        label_8->setText(QApplication::translate("mainwindowClass", "Rotate", 0));
        label_9->setText(QApplication::translate("mainwindowClass", "Scale", 0));
        label_10->setText(QApplication::translate("mainwindowClass", "X", 0));
        label_11->setText(QApplication::translate("mainwindowClass", "Y", 0));
        label_12->setText(QApplication::translate("mainwindowClass", "Z", 0));
        label_13->setText(QApplication::translate("mainwindowClass", "X", 0));
        label_14->setText(QApplication::translate("mainwindowClass", "Y", 0));
        label_15->setText(QApplication::translate("mainwindowClass", "Z", 0));
        label_16->setText(QApplication::translate("mainwindowClass", "X", 0));
        label_17->setText(QApplication::translate("mainwindowClass", "Y", 0));
        label_18->setText(QApplication::translate("mainwindowClass", "Z", 0));
        pushButton_2->setText(QApplication::translate("mainwindowClass", "Reset", 0));
        groupBox_3->setTitle(QApplication::translate("mainwindowClass", "Projection Parameters", 0));
        label_19->setText(QApplication::translate("mainwindowClass", "Left", 0));
        label_20->setText(QApplication::translate("mainwindowClass", "Right", 0));
        label_21->setText(QApplication::translate("mainwindowClass", "Bottom", 0));
        label_22->setText(QApplication::translate("mainwindowClass", "Top", 0));
        label_23->setText(QApplication::translate("mainwindowClass", "Near", 0));
        label_24->setText(QApplication::translate("mainwindowClass", "Far", 0));
        groupBox_4->setTitle(QApplication::translate("mainwindowClass", "Projection Type", 0));
        radioButton->setText(QApplication::translate("mainwindowClass", "Perspective", 0));
        radioButton_2->setText(QApplication::translate("mainwindowClass", "Orthographic", 0));
        groupBox_5->setTitle(QApplication::translate("mainwindowClass", "Rendering Mode", 0));
        radioButton_3->setText(QApplication::translate("mainwindowClass", "Fill", 0));
        radioButton_4->setText(QApplication::translate("mainwindowClass", "WireFrame", 0));
        radioButton_5->setText(QApplication::translate("mainwindowClass", "Point", 0));
        pushButton_3->setText(QApplication::translate("mainwindowClass", "Reset", 0));
        menuAbout->setTitle(QApplication::translate("mainwindowClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("mainwindowClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwindowClass: public Ui_mainwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
