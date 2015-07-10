/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    GLWidget *openGLWidget;
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QDateTimeEdit *dateTimeEdit;
    QMenuBar *menuBar;
    QMenu *menuAbount;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1117, 794);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openGLWidget = new GLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 0, 841, 591));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(880, 50, 160, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(880, 20, 54, 12));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(890, 120, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(980, 120, 75, 23));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(890, 180, 89, 16));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(890, 220, 89, 16));
        dateTimeEdit = new QDateTimeEdit(centralWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(920, 520, 194, 22));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1117, 23));
        menuAbount = new QMenu(menuBar);
        menuAbount->setObjectName(QStringLiteral("menuAbount"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuAbount->menuAction());

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindowClass", "Rotate:", 0));
        pushButton->setText(QApplication::translate("MainWindowClass", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("MainWindowClass", "PushButton", 0));
        radioButton->setText(QApplication::translate("MainWindowClass", "RadioButton", 0));
        radioButton_2->setText(QApplication::translate("MainWindowClass", "RadioButton", 0));
        menuAbount->setTitle(QApplication::translate("MainWindowClass", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
