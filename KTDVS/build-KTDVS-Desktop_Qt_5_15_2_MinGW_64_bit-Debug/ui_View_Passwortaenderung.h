/********************************************************************************
** Form generated from reading UI file 'View_Passwortaenderung.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
        Zurueck->setGeometry(QRect(20, 20, 80, 22));
        verticalLayoutWidget = new QWidget(View_Passwortaenderung);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 90, 241, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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
