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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Passwortaenderung
{
public:
    QPushButton *Zurueck;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *KeineEingabe;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Fehlermeldung;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *altesPas;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *altesPasEdit;
    QLineEdit *neuesPasEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;

    void setupUi(QWidget *View_Passwortaenderung)
    {
        if (View_Passwortaenderung->objectName().isEmpty())
            View_Passwortaenderung->setObjectName(QString::fromUtf8("View_Passwortaenderung"));
        View_Passwortaenderung->resize(400, 300);
        Zurueck = new QPushButton(View_Passwortaenderung);
        Zurueck->setObjectName(QString::fromUtf8("Zurueck"));
        Zurueck->setGeometry(QRect(30, 20, 80, 22));
        verticalLayoutWidget = new QWidget(View_Passwortaenderung);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 60, 271, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        KeineEingabe = new QLabel(verticalLayoutWidget);
        KeineEingabe->setObjectName(QString::fromUtf8("KeineEingabe"));

        horizontalLayout_4->addWidget(KeineEingabe);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Fehlermeldung = new QLabel(verticalLayoutWidget);
        Fehlermeldung->setObjectName(QString::fromUtf8("Fehlermeldung"));

        horizontalLayout_3->addWidget(Fehlermeldung);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        altesPas = new QLabel(verticalLayoutWidget);
        altesPas->setObjectName(QString::fromUtf8("altesPas"));

        verticalLayout_4->addWidget(altesPas);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        altesPasEdit = new QLineEdit(verticalLayoutWidget);
        altesPasEdit->setObjectName(QString::fromUtf8("altesPasEdit"));

        verticalLayout_2->addWidget(altesPasEdit);

        neuesPasEdit = new QLineEdit(verticalLayoutWidget);
        neuesPasEdit->setObjectName(QString::fromUtf8("neuesPasEdit"));

        verticalLayout_2->addWidget(neuesPasEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(View_Passwortaenderung);

        QMetaObject::connectSlotsByName(View_Passwortaenderung);
    } // setupUi

    void retranslateUi(QWidget *View_Passwortaenderung)
    {
        View_Passwortaenderung->setWindowTitle(QCoreApplication::translate("View_Passwortaenderung", "Form", nullptr));
        Zurueck->setText(QCoreApplication::translate("View_Passwortaenderung", "Zur\303\274ck", nullptr));
        KeineEingabe->setText(QCoreApplication::translate("View_Passwortaenderung", "<html><head/><body><p align=\"center\"><span style=\" color:#aa0000;\">Bitte f\303\274llen Sie die Felder erst alle aus.</span></p></body></html>", nullptr));
        Fehlermeldung->setText(QCoreApplication::translate("View_Passwortaenderung", "<html><head/><body><p align=\"center\"><span style=\" color:#aa0000;\">Das alte Passwort wurde falsch eingegeben.</span></p><p align=\"center\"><span style=\" color:#aa0000;\">Bitte Versuchen Sie es nochmal.</span></p></body></html>", nullptr));
        altesPas->setText(QCoreApplication::translate("View_Passwortaenderung", "altes Passwort", nullptr));
        label_2->setText(QCoreApplication::translate("View_Passwortaenderung", "Neues Passwort", nullptr));
        pushButton->setText(QCoreApplication::translate("View_Passwortaenderung", "Speichern", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Passwortaenderung: public Ui_View_Passwortaenderung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_PASSWORTAENDERUNG_H
