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
    QDoubleSpinBox *XDoubleSpinBox;
    QDoubleSpinBox *YDoubleSpinBox;
    QDoubleSpinBox *ZDoubleSpinBox;
    QDoubleSpinBox *PitchDoubleSpinBox;
    QDoubleSpinBox *HeadDoubleSpinBox;
    QDoubleSpinBox *RollDoubleSpinBox;
    QVBoxLayout *verticalLayout_4;
    QSlider *XHorizontalSlider;
    QSlider *YHorizontalSlider;
    QSlider *ZHorizontalSlider;
    QSlider *PitchHorizontalSlider;
    QSlider *HeadHorizontalSlider;
    QSlider *RollHorizontalSlider;
    QPushButton *ViewButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
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
    QDoubleSpinBox *PosXDoubleSpinBox;
    QDoubleSpinBox *PosYDoubleSpinBox;
    QDoubleSpinBox *PosZDoubleSpinBox;
    QDoubleSpinBox *RotXDoubleSpinBox;
    QDoubleSpinBox *RotZDoubleSpinBox;
    QDoubleSpinBox *RotYDoubleSpinBox;
    QDoubleSpinBox *ScaleXDoubleSpinBox;
    QDoubleSpinBox *ScaleYDoubleSpinBox;
    QDoubleSpinBox *ScaleZDoubleSpinBox;
    QVBoxLayout *verticalLayout_8;
    QSlider *PosXHorizontalSlider;
    QSlider *PosXHorizontalSlider_2;
    QSlider *PosXHorizontalSlider_3;
    QSlider *RotXHorizontalSlider;
    QSlider *RotYHorizontalSlider;
    QSlider *RotZHorizontalSlider;
    QSlider *ScaleXHorizontalSlider;
    QSlider *ScaleYHorizontalSlider;
    QSlider *ScaleZHorizontalSlider;
    QPushButton *modelButton;
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
    QDoubleSpinBox *LeftDoubleSpinBox;
    QDoubleSpinBox *RightDoubleSpinBox;
    QDoubleSpinBox *BottomDoubleSpinBox;
    QDoubleSpinBox *TopDoubleSpinBox;
    QDoubleSpinBox *NearDoubleSpinBox;
    QDoubleSpinBox *FarDoubleSpinBox;
    QVBoxLayout *verticalLayout_11;
    QSlider *LeftHorizontalSlider;
    QSlider *RightHorizontalSlider;
    QSlider *BottomHorizontalSlider;
    QSlider *TopHorizontalSlider;
    QSlider *NearHorizontalSlider;
    QSlider *FarHorizontalSlider;
    QGroupBox *groupBox_4;
    QRadioButton *PerspRadioButton;
    QRadioButton *OrthoRadioButton;
    QGroupBox *groupBox_5;
    QRadioButton *FillRadioButton;
    QRadioButton *WireRadioButton;
    QRadioButton *PointRadioButton;
    QPushButton *projButton;
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
        widget->setGeometry(QRect(1030, -10, 411, 801));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 270, 391, 181));
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
        XDoubleSpinBox = new QDoubleSpinBox(groupBox);
        XDoubleSpinBox->setObjectName(QStringLiteral("XDoubleSpinBox"));
        XDoubleSpinBox->setMinimum(-100);
        XDoubleSpinBox->setValue(1);

        verticalLayout_3->addWidget(XDoubleSpinBox);

        YDoubleSpinBox = new QDoubleSpinBox(groupBox);
        YDoubleSpinBox->setObjectName(QStringLiteral("YDoubleSpinBox"));
        YDoubleSpinBox->setMinimum(-100);
        YDoubleSpinBox->setValue(-3);

        verticalLayout_3->addWidget(YDoubleSpinBox);

        ZDoubleSpinBox = new QDoubleSpinBox(groupBox);
        ZDoubleSpinBox->setObjectName(QStringLiteral("ZDoubleSpinBox"));
        ZDoubleSpinBox->setMinimum(-100);
        ZDoubleSpinBox->setValue(-30);

        verticalLayout_3->addWidget(ZDoubleSpinBox);

        PitchDoubleSpinBox = new QDoubleSpinBox(groupBox);
        PitchDoubleSpinBox->setObjectName(QStringLiteral("PitchDoubleSpinBox"));
        PitchDoubleSpinBox->setMinimum(-100);

        verticalLayout_3->addWidget(PitchDoubleSpinBox);

        HeadDoubleSpinBox = new QDoubleSpinBox(groupBox);
        HeadDoubleSpinBox->setObjectName(QStringLiteral("HeadDoubleSpinBox"));
        HeadDoubleSpinBox->setMinimum(-100);

        verticalLayout_3->addWidget(HeadDoubleSpinBox);

        RollDoubleSpinBox = new QDoubleSpinBox(groupBox);
        RollDoubleSpinBox->setObjectName(QStringLiteral("RollDoubleSpinBox"));
        RollDoubleSpinBox->setMinimum(-100);

        verticalLayout_3->addWidget(RollDoubleSpinBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        XHorizontalSlider = new QSlider(groupBox);
        XHorizontalSlider->setObjectName(QStringLiteral("XHorizontalSlider"));
        XHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(XHorizontalSlider);

        YHorizontalSlider = new QSlider(groupBox);
        YHorizontalSlider->setObjectName(QStringLiteral("YHorizontalSlider"));
        YHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(YHorizontalSlider);

        ZHorizontalSlider = new QSlider(groupBox);
        ZHorizontalSlider->setObjectName(QStringLiteral("ZHorizontalSlider"));
        ZHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(ZHorizontalSlider);

        PitchHorizontalSlider = new QSlider(groupBox);
        PitchHorizontalSlider->setObjectName(QStringLiteral("PitchHorizontalSlider"));
        PitchHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(PitchHorizontalSlider);

        HeadHorizontalSlider = new QSlider(groupBox);
        HeadHorizontalSlider->setObjectName(QStringLiteral("HeadHorizontalSlider"));
        HeadHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(HeadHorizontalSlider);

        RollHorizontalSlider = new QSlider(groupBox);
        RollHorizontalSlider->setObjectName(QStringLiteral("RollHorizontalSlider"));
        RollHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(RollHorizontalSlider);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 2, 1);

        ViewButton = new QPushButton(groupBox);
        ViewButton->setObjectName(QStringLiteral("ViewButton"));

        gridLayout->addWidget(ViewButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 510, 391, 266));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_6->addWidget(label_10);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_6->addWidget(label_11);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_6->addWidget(label_14);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_6->addWidget(label_15);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_6->addWidget(label_16);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_6->addWidget(label_18);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        PosXDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        PosXDoubleSpinBox->setObjectName(QStringLiteral("PosXDoubleSpinBox"));
        PosXDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(PosXDoubleSpinBox);

        PosYDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        PosYDoubleSpinBox->setObjectName(QStringLiteral("PosYDoubleSpinBox"));
        PosYDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(PosYDoubleSpinBox);

        PosZDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        PosZDoubleSpinBox->setObjectName(QStringLiteral("PosZDoubleSpinBox"));
        PosZDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(PosZDoubleSpinBox);

        RotXDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        RotXDoubleSpinBox->setObjectName(QStringLiteral("RotXDoubleSpinBox"));
        RotXDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(RotXDoubleSpinBox);

        RotZDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        RotZDoubleSpinBox->setObjectName(QStringLiteral("RotZDoubleSpinBox"));
        RotZDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(RotZDoubleSpinBox);

        RotYDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        RotYDoubleSpinBox->setObjectName(QStringLiteral("RotYDoubleSpinBox"));
        RotYDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(RotYDoubleSpinBox);

        ScaleXDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        ScaleXDoubleSpinBox->setObjectName(QStringLiteral("ScaleXDoubleSpinBox"));
        ScaleXDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(ScaleXDoubleSpinBox);

        ScaleYDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        ScaleYDoubleSpinBox->setObjectName(QStringLiteral("ScaleYDoubleSpinBox"));
        ScaleYDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(ScaleYDoubleSpinBox);

        ScaleZDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        ScaleZDoubleSpinBox->setObjectName(QStringLiteral("ScaleZDoubleSpinBox"));
        ScaleZDoubleSpinBox->setMinimum(-100);

        verticalLayout_7->addWidget(ScaleZDoubleSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        PosXHorizontalSlider = new QSlider(groupBox_2);
        PosXHorizontalSlider->setObjectName(QStringLiteral("PosXHorizontalSlider"));
        PosXHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(PosXHorizontalSlider);

        PosXHorizontalSlider_2 = new QSlider(groupBox_2);
        PosXHorizontalSlider_2->setObjectName(QStringLiteral("PosXHorizontalSlider_2"));
        PosXHorizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(PosXHorizontalSlider_2);

        PosXHorizontalSlider_3 = new QSlider(groupBox_2);
        PosXHorizontalSlider_3->setObjectName(QStringLiteral("PosXHorizontalSlider_3"));
        PosXHorizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(PosXHorizontalSlider_3);

        RotXHorizontalSlider = new QSlider(groupBox_2);
        RotXHorizontalSlider->setObjectName(QStringLiteral("RotXHorizontalSlider"));
        RotXHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(RotXHorizontalSlider);

        RotYHorizontalSlider = new QSlider(groupBox_2);
        RotYHorizontalSlider->setObjectName(QStringLiteral("RotYHorizontalSlider"));
        RotYHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(RotYHorizontalSlider);

        RotZHorizontalSlider = new QSlider(groupBox_2);
        RotZHorizontalSlider->setObjectName(QStringLiteral("RotZHorizontalSlider"));
        RotZHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(RotZHorizontalSlider);

        ScaleXHorizontalSlider = new QSlider(groupBox_2);
        ScaleXHorizontalSlider->setObjectName(QStringLiteral("ScaleXHorizontalSlider"));
        ScaleXHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(ScaleXHorizontalSlider);

        ScaleYHorizontalSlider = new QSlider(groupBox_2);
        ScaleYHorizontalSlider->setObjectName(QStringLiteral("ScaleYHorizontalSlider"));
        ScaleYHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(ScaleYHorizontalSlider);

        ScaleZHorizontalSlider = new QSlider(groupBox_2);
        ScaleZHorizontalSlider->setObjectName(QStringLiteral("ScaleZHorizontalSlider"));
        ScaleZHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(ScaleZHorizontalSlider);


        horizontalLayout_2->addLayout(verticalLayout_8);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 2, 1);

        modelButton = new QPushButton(groupBox_2);
        modelButton->setObjectName(QStringLiteral("modelButton"));

        gridLayout_2->addWidget(modelButton, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

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
        LeftDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        LeftDoubleSpinBox->setObjectName(QStringLiteral("LeftDoubleSpinBox"));

        verticalLayout_10->addWidget(LeftDoubleSpinBox);

        RightDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        RightDoubleSpinBox->setObjectName(QStringLiteral("RightDoubleSpinBox"));

        verticalLayout_10->addWidget(RightDoubleSpinBox);

        BottomDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        BottomDoubleSpinBox->setObjectName(QStringLiteral("BottomDoubleSpinBox"));

        verticalLayout_10->addWidget(BottomDoubleSpinBox);

        TopDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        TopDoubleSpinBox->setObjectName(QStringLiteral("TopDoubleSpinBox"));

        verticalLayout_10->addWidget(TopDoubleSpinBox);

        NearDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        NearDoubleSpinBox->setObjectName(QStringLiteral("NearDoubleSpinBox"));

        verticalLayout_10->addWidget(NearDoubleSpinBox);

        FarDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        FarDoubleSpinBox->setObjectName(QStringLiteral("FarDoubleSpinBox"));

        verticalLayout_10->addWidget(FarDoubleSpinBox);


        gridLayout_3->addLayout(verticalLayout_10, 0, 1, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        LeftHorizontalSlider = new QSlider(groupBox_3);
        LeftHorizontalSlider->setObjectName(QStringLiteral("LeftHorizontalSlider"));
        LeftHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(LeftHorizontalSlider);

        RightHorizontalSlider = new QSlider(groupBox_3);
        RightHorizontalSlider->setObjectName(QStringLiteral("RightHorizontalSlider"));
        RightHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(RightHorizontalSlider);

        BottomHorizontalSlider = new QSlider(groupBox_3);
        BottomHorizontalSlider->setObjectName(QStringLiteral("BottomHorizontalSlider"));
        BottomHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(BottomHorizontalSlider);

        TopHorizontalSlider = new QSlider(groupBox_3);
        TopHorizontalSlider->setObjectName(QStringLiteral("TopHorizontalSlider"));
        TopHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(TopHorizontalSlider);

        NearHorizontalSlider = new QSlider(groupBox_3);
        NearHorizontalSlider->setObjectName(QStringLiteral("NearHorizontalSlider"));
        NearHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(NearHorizontalSlider);

        FarHorizontalSlider = new QSlider(groupBox_3);
        FarHorizontalSlider->setObjectName(QStringLiteral("FarHorizontalSlider"));
        FarHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(FarHorizontalSlider);


        gridLayout_3->addLayout(verticalLayout_11, 0, 2, 1, 1);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(270, 70, 131, 81));
        PerspRadioButton = new QRadioButton(groupBox_4);
        PerspRadioButton->setObjectName(QStringLiteral("PerspRadioButton"));
        PerspRadioButton->setGeometry(QRect(20, 30, 89, 16));
        PerspRadioButton->setChecked(true);
        OrthoRadioButton = new QRadioButton(groupBox_4);
        OrthoRadioButton->setObjectName(QStringLiteral("OrthoRadioButton"));
        OrthoRadioButton->setGeometry(QRect(20, 60, 111, 16));
        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(270, 160, 131, 91));
        FillRadioButton = new QRadioButton(groupBox_5);
        FillRadioButton->setObjectName(QStringLiteral("FillRadioButton"));
        FillRadioButton->setGeometry(QRect(20, 20, 89, 16));
        FillRadioButton->setChecked(true);
        WireRadioButton = new QRadioButton(groupBox_5);
        WireRadioButton->setObjectName(QStringLiteral("WireRadioButton"));
        WireRadioButton->setGeometry(QRect(20, 40, 89, 16));
        PointRadioButton = new QRadioButton(groupBox_5);
        PointRadioButton->setObjectName(QStringLiteral("PointRadioButton"));
        PointRadioButton->setGeometry(QRect(20, 60, 89, 16));
        projButton = new QPushButton(widget);
        projButton->setObjectName(QStringLiteral("projButton"));
        projButton->setGeometry(QRect(290, 30, 75, 23));
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
        QObject::connect(PosXDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setPosX(double)));
        QObject::connect(PosYDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setPosY(double)));
        QObject::connect(PosZDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setPosZ(double)));
        QObject::connect(RotXDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setRotateX(double)));
        QObject::connect(RotZDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setRotateY(double)));
        QObject::connect(RotYDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setRotateZ(double)));
        QObject::connect(ScaleXDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setScaleX(double)));
        QObject::connect(ScaleYDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setScaleY(double)));
        QObject::connect(ScaleZDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setScaleZ(double)));
        QObject::connect(XDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setCameraX(double)));
        QObject::connect(YDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setCameraY(double)));
        QObject::connect(ZDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setCameraZ(double)));
        QObject::connect(PitchDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setPtich(double)));
        QObject::connect(HeadDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setHead(double)));
        QObject::connect(RollDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setRoll(double)));
        QObject::connect(LeftDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setLeft(double)));
        QObject::connect(RightDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setRight(double)));
        QObject::connect(BottomDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setBottom(double)));
        QObject::connect(TopDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setTop(double)));
        QObject::connect(NearDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setNear(double)));
        QObject::connect(FarDoubleSpinBox, SIGNAL(valueChanged(double)), verticalWidget, SLOT(setFar(double)));

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
        ViewButton->setText(QApplication::translate("mainwindowClass", "Reset", 0));
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
        modelButton->setText(QApplication::translate("mainwindowClass", "Reset", 0));
        groupBox_3->setTitle(QApplication::translate("mainwindowClass", "Projection Parameters", 0));
        label_19->setText(QApplication::translate("mainwindowClass", "Left", 0));
        label_20->setText(QApplication::translate("mainwindowClass", "Right", 0));
        label_21->setText(QApplication::translate("mainwindowClass", "Bottom", 0));
        label_22->setText(QApplication::translate("mainwindowClass", "Top", 0));
        label_23->setText(QApplication::translate("mainwindowClass", "Near", 0));
        label_24->setText(QApplication::translate("mainwindowClass", "Far", 0));
        groupBox_4->setTitle(QApplication::translate("mainwindowClass", "Projection Type", 0));
        PerspRadioButton->setText(QApplication::translate("mainwindowClass", "Perspective", 0));
        OrthoRadioButton->setText(QApplication::translate("mainwindowClass", "Orthographic", 0));
        groupBox_5->setTitle(QApplication::translate("mainwindowClass", "Rendering Mode", 0));
        FillRadioButton->setText(QApplication::translate("mainwindowClass", "Fill", 0));
        WireRadioButton->setText(QApplication::translate("mainwindowClass", "WireFrame", 0));
        PointRadioButton->setText(QApplication::translate("mainwindowClass", "Point", 0));
        projButton->setText(QApplication::translate("mainwindowClass", "Reset", 0));
        menuAbout->setTitle(QApplication::translate("mainwindowClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("mainwindowClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwindowClass: public Ui_mainwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
