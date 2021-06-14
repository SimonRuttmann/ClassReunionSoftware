/********************************************************************************
** Form generated from reading UI file 'View_Einloggen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Einloggen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *Fehlerausgabe;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *Labl1;
    QLabel *LAbl2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *EMail;
    QLineEdit *Passwort;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Login;
    QPushButton *zurueck;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *FalschesPasswort;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *Gesperrt;

    void setupUi(QWidget *View_Einloggen)
    {
        if (View_Einloggen->objectName().isEmpty())
            View_Einloggen->setObjectName(QString::fromUtf8("View_Einloggen"));
        View_Einloggen->resize(400, 300);
        verticalLayoutWidget = new QWidget(View_Einloggen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 90, 261, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Fehlerausgabe = new QLabel(verticalLayoutWidget);
        Fehlerausgabe->setObjectName(QString::fromUtf8("Fehlerausgabe"));

        verticalLayout_5->addWidget(Fehlerausgabe);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Labl1 = new QLabel(verticalLayoutWidget);
        Labl1->setObjectName(QString::fromUtf8("Labl1"));

        verticalLayout_4->addWidget(Labl1);

        LAbl2 = new QLabel(verticalLayoutWidget);
        LAbl2->setObjectName(QString::fromUtf8("LAbl2"));

        verticalLayout_4->addWidget(LAbl2);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        EMail = new QLineEdit(verticalLayoutWidget);
        EMail->setObjectName(QString::fromUtf8("EMail"));

        verticalLayout_3->addWidget(EMail);

        Passwort = new QLineEdit(verticalLayoutWidget);
        Passwort->setObjectName(QString::fromUtf8("Passwort"));

        verticalLayout_3->addWidget(Passwort);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Login = new QPushButton(verticalLayoutWidget);
        Login->setObjectName(QString::fromUtf8("Login"));

        horizontalLayout_2->addWidget(Login);


        verticalLayout->addLayout(horizontalLayout_2);

        zurueck = new QPushButton(View_Einloggen);
        zurueck->setObjectName(QString::fromUtf8("zurueck"));
        zurueck->setGeometry(QRect(10, 30, 80, 22));
        verticalLayoutWidget_2 = new QWidget(View_Einloggen);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 60, 261, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        FalschesPasswort = new QLabel(verticalLayoutWidget_2);
        FalschesPasswort->setObjectName(QString::fromUtf8("FalschesPasswort"));

        verticalLayout_2->addWidget(FalschesPasswort);

        verticalLayoutWidget_6 = new QWidget(View_Einloggen);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(60, 50, 281, 80));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        Gesperrt = new QLabel(verticalLayoutWidget_6);
        Gesperrt->setObjectName(QString::fromUtf8("Gesperrt"));

        verticalLayout_6->addWidget(Gesperrt);


        retranslateUi(View_Einloggen);

        QMetaObject::connectSlotsByName(View_Einloggen);
    } // setupUi

    void retranslateUi(QWidget *View_Einloggen)
    {
        View_Einloggen->setWindowTitle(QCoreApplication::translate("View_Einloggen", "Form", nullptr));
        Fehlerausgabe->setText(QCoreApplication::translate("View_Einloggen", "<html><head/><body><p align=\"center\"><span style=\" color:#aa0000;\">Fehlerhafte Eingabe.</span></p><p align=\"center\"><span style=\" color:#aa0000;\">Bitte versuchen Sie es erneut.</span></p></body></html>", nullptr));
        Labl1->setText(QCoreApplication::translate("View_Einloggen", "E-Mail", nullptr));
        LAbl2->setText(QCoreApplication::translate("View_Einloggen", "Passwort", nullptr));
        Login->setText(QCoreApplication::translate("View_Einloggen", "Login", nullptr));
        zurueck->setText(QCoreApplication::translate("View_Einloggen", "Zur\303\274ck", nullptr));
        FalschesPasswort->setText(QCoreApplication::translate("View_Einloggen", "<html><head/><body><p align=\"center\"><span style=\" color:#aa0000;\">Falsches Passwort.</span></p><p align=\"center\"><span style=\" color:#aa0000;\">Bitte versuchen Sie es erneut.</span></p></body></html>", nullptr));
        Gesperrt->setText(QCoreApplication::translate("View_Einloggen", "<html><head/><body><p align=\"center\"><span style=\" color:#aa0000;\">Passwort wurde zu oft falsch Eingegeben.</span></p><p align=\"center\"><span style=\" color:#aa0000;\">Bitte melden Sie sich beim Hauptorganisator.</span></p><p align=\"center\"><span style=\" color:#aa0000;\">Er kann Ihr Passwort zur\303\274cksetzen.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Einloggen: public Ui_View_Einloggen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_EINLOGGEN_H
