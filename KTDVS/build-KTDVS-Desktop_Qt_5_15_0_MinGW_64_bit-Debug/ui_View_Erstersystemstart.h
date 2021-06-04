/********************************************************************************
** Form generated from reading UI file 'View_Erstersystemstart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_ERSTERSYSTEMSTART_H
#define UI_VIEW_ERSTERSYSTEMSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_ErsterSystemStart
{
public:
    QWidget *centralwidget;
    QPushButton *Beitreten_Button;
    QPushButton *NeuesSystem_Button;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View_ErsterSystemStart)
    {
        if (View_ErsterSystemStart->objectName().isEmpty())
            View_ErsterSystemStart->setObjectName(QString::fromUtf8("View_ErsterSystemStart"));
        View_ErsterSystemStart->resize(800, 600);
        centralwidget = new QWidget(View_ErsterSystemStart);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Beitreten_Button = new QPushButton(centralwidget);
        Beitreten_Button->setObjectName(QString::fromUtf8("Beitreten_Button"));
        Beitreten_Button->setGeometry(QRect(440, 140, 191, 111));
        NeuesSystem_Button = new QPushButton(centralwidget);
        NeuesSystem_Button->setObjectName(QString::fromUtf8("NeuesSystem_Button"));
        NeuesSystem_Button->setGeometry(QRect(140, 140, 191, 111));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-4, 0, 811, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);"));
        View_ErsterSystemStart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View_ErsterSystemStart);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        View_ErsterSystemStart->setMenuBar(menubar);
        statusbar = new QStatusBar(View_ErsterSystemStart);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View_ErsterSystemStart->setStatusBar(statusbar);

        retranslateUi(View_ErsterSystemStart);

        QMetaObject::connectSlotsByName(View_ErsterSystemStart);
    } // setupUi

    void retranslateUi(QMainWindow *View_ErsterSystemStart)
    {
        View_ErsterSystemStart->setWindowTitle(QCoreApplication::translate("View_ErsterSystemStart", "MainWindow", nullptr));
        Beitreten_Button->setText(QCoreApplication::translate("View_ErsterSystemStart", "Bestehendem System beitreten", nullptr));
        NeuesSystem_Button->setText(QCoreApplication::translate("View_ErsterSystemStart", "Neues System erstellen", nullptr));
        label->setText(QCoreApplication::translate("View_ErsterSystemStart", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">KTDVS</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_ErsterSystemStart: public Ui_View_ErsterSystemStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_ERSTERSYSTEMSTART_H
