/********************************************************************************
** Form generated from reading UI file 'View_Passwortaenderung.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_PASSWORTAENDERUNG_H
#define UI_VIEW_PASSWORTAENDERUNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Passwortaenderung
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *altesPasswort_labl;
    QLabel *neuesPasswort_lable;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *altesPass_Edit;
    QLineEdit *neuesPass_Edit;
    QPushButton *Zueck_Button;
    QLabel *label;
    QPushButton *Speichern_Button;
    QLabel *Fehlermeldung_lable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View_Passwortaenderung)
    {
        if (View_Passwortaenderung->objectName().isEmpty())
            View_Passwortaenderung->setObjectName(QString::fromUtf8("View_Passwortaenderung"));
        View_Passwortaenderung->resize(800, 600);
        centralwidget = new QWidget(View_Passwortaenderung);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(230, 210, 231, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        altesPasswort_labl = new QLabel(horizontalLayoutWidget);
        altesPasswort_labl->setObjectName(QString::fromUtf8("altesPasswort_labl"));

        verticalLayout_5->addWidget(altesPasswort_labl);

        neuesPasswort_lable = new QLabel(horizontalLayoutWidget);
        neuesPasswort_lable->setObjectName(QString::fromUtf8("neuesPasswort_lable"));

        verticalLayout_5->addWidget(neuesPasswort_lable);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        altesPass_Edit = new QLineEdit(horizontalLayoutWidget);
        altesPass_Edit->setObjectName(QString::fromUtf8("altesPass_Edit"));

        verticalLayout_7->addWidget(altesPass_Edit);

        neuesPass_Edit = new QLineEdit(horizontalLayoutWidget);
        neuesPass_Edit->setObjectName(QString::fromUtf8("neuesPass_Edit"));

        verticalLayout_7->addWidget(neuesPass_Edit);


        horizontalLayout->addLayout(verticalLayout_7);

        Zueck_Button = new QPushButton(centralwidget);
        Zueck_Button->setObjectName(QString::fromUtf8("Zueck_Button"));
        Zueck_Button->setGeometry(QRect(20, 40, 80, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 811, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);"));
        Speichern_Button = new QPushButton(centralwidget);
        Speichern_Button->setObjectName(QString::fromUtf8("Speichern_Button"));
        Speichern_Button->setGeometry(QRect(380, 320, 80, 22));
        Fehlermeldung_lable = new QLabel(centralwidget);
        Fehlermeldung_lable->setObjectName(QString::fromUtf8("Fehlermeldung_lable"));
        Fehlermeldung_lable->setGeometry(QRect(230, 110, 231, 71));
        Fehlermeldung_lable->setStyleSheet(QString::fromUtf8("border: 1px solid red;\n"
""));
        View_Passwortaenderung->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View_Passwortaenderung);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        View_Passwortaenderung->setMenuBar(menubar);
        statusbar = new QStatusBar(View_Passwortaenderung);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View_Passwortaenderung->setStatusBar(statusbar);

        retranslateUi(View_Passwortaenderung);

        QMetaObject::connectSlotsByName(View_Passwortaenderung);
    } // setupUi

    void retranslateUi(QMainWindow *View_Passwortaenderung)
    {
        View_Passwortaenderung->setWindowTitle(QCoreApplication::translate("View_Passwortaenderung", "MainWindow", nullptr));
        altesPasswort_labl->setText(QCoreApplication::translate("View_Passwortaenderung", "altes Passwort", nullptr));
        neuesPasswort_lable->setText(QCoreApplication::translate("View_Passwortaenderung", "neues Passwort", nullptr));
        Zueck_Button->setText(QCoreApplication::translate("View_Passwortaenderung", "Zur\303\274ck", nullptr));
        label->setText(QCoreApplication::translate("View_Passwortaenderung", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">KTDVS</span></p></body></html>", nullptr));
        Speichern_Button->setText(QCoreApplication::translate("View_Passwortaenderung", "Speichern", nullptr));
        Fehlermeldung_lable->setText(QCoreApplication::translate("View_Passwortaenderung", "<html><head/><body><p align=\"center\"><span style=\" color:#000000;\">Altes Passwort wurde falsch eingegeben.</span></p><p align=\"center\">Bitte versuchen Sie es erneut.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Passwortaenderung: public Ui_View_Passwortaenderung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_PASSWORTAENDERUNG_H
