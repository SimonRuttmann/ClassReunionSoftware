/********************************************************************************
** Form generated from reading UI file 'View_Einloggen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_EINLOGGEN_H
#define UI_VIEW_EINLOGGEN_H

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

class Ui_View_Einloggen
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *EMail_Edit;
    QLineEdit *Passwort_Edit;
    QPushButton *pushButton;
    QLabel *Fehlermeldung;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View_Einloggen)
    {
        if (View_Einloggen->objectName().isEmpty())
            View_Einloggen->setObjectName(QString::fromUtf8("View_Einloggen"));
        View_Einloggen->resize(800, 600);
        centralwidget = new QWidget(View_Einloggen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(300, 110, 211, 96));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        EMail_Edit = new QLineEdit(horizontalLayoutWidget_4);
        EMail_Edit->setObjectName(QString::fromUtf8("EMail_Edit"));

        verticalLayout_2->addWidget(EMail_Edit);

        Passwort_Edit = new QLineEdit(horizontalLayoutWidget_4);
        Passwort_Edit->setObjectName(QString::fromUtf8("Passwort_Edit"));

        verticalLayout_2->addWidget(Passwort_Edit);


        horizontalLayout_4->addLayout(verticalLayout_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 230, 80, 22));
        Fehlermeldung = new QLabel(centralwidget);
        Fehlermeldung->setObjectName(QString::fromUtf8("Fehlermeldung"));
        Fehlermeldung->setGeometry(QRect(320, 30, 171, 51));
        Fehlermeldung->setStyleSheet(QString::fromUtf8("border: 1px solid red;"));
        View_Einloggen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View_Einloggen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        View_Einloggen->setMenuBar(menubar);
        statusbar = new QStatusBar(View_Einloggen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View_Einloggen->setStatusBar(statusbar);

        retranslateUi(View_Einloggen);

        QMetaObject::connectSlotsByName(View_Einloggen);
    } // setupUi

    void retranslateUi(QMainWindow *View_Einloggen)
    {
        View_Einloggen->setWindowTitle(QCoreApplication::translate("View_Einloggen", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("View_Einloggen", "E-Mail", nullptr));
        label_5->setText(QCoreApplication::translate("View_Einloggen", "Passwort", nullptr));
        pushButton->setText(QCoreApplication::translate("View_Einloggen", "Login", nullptr));
        Fehlermeldung->setText(QCoreApplication::translate("View_Einloggen", "<html><head/><body><p align=\"center\">Falsche Eingabe.</p><p align=\"center\">Bitte versuchen Sie es erneut.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Einloggen: public Ui_View_Einloggen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_EINLOGGEN_H
