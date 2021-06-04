/********************************************************************************
** Form generated from reading UI file 'view_teilnehmerteilnehmerhinzufuegen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
#define UI_VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_TeilnehmerTeilnehmerHinzufuegen
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *Buttons;
    QPushButton *Versionsverlauf;
    QPushButton *OrganisatorrechteEntfernen;
    QPushButton *PwAndern;
    QPushButton *Speichern;
    QVBoxLayout *Daten;
    QHBoxLayout *ueberschriftAltVers_2;
    QLabel *label_13;
    QLineEdit *lineEdit_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_16;
    QLineEdit *lineEdit_14;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QLineEdit *lineEdit_15;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_18;
    QLineEdit *lineEdit_16;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_19;
    QLineEdit *lineEdit_17;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_20;
    QLineEdit *lineEdit_18;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_22;
    QLineEdit *lineEdit_20;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_21;
    QLineEdit *lineEdit_19;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_39;
    QPushButton *AddTelnumber;
    QHBoxLayout *Seitenheader_2;
    QPushButton *zurueck_2;
    QLabel *KTDVS_2;
    QPushButton *logout_2;
    QTextEdit *Komentar;

    void setupUi(QWidget *View_TeilnehmerTeilnehmerHinzufuegen)
    {
        if (View_TeilnehmerTeilnehmerHinzufuegen->objectName().isEmpty())
            View_TeilnehmerTeilnehmerHinzufuegen->setObjectName(QString::fromUtf8("View_TeilnehmerTeilnehmerHinzufuegen"));
        View_TeilnehmerTeilnehmerHinzufuegen->resize(921, 651);
        gridLayoutWidget = new QWidget(View_TeilnehmerTeilnehmerHinzufuegen);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 30, 669, 589));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Buttons = new QVBoxLayout();
        Buttons->setObjectName(QString::fromUtf8("Buttons"));
        Versionsverlauf = new QPushButton(gridLayoutWidget);
        Versionsverlauf->setObjectName(QString::fromUtf8("Versionsverlauf"));

        Buttons->addWidget(Versionsverlauf);

        OrganisatorrechteEntfernen = new QPushButton(gridLayoutWidget);
        OrganisatorrechteEntfernen->setObjectName(QString::fromUtf8("OrganisatorrechteEntfernen"));
        OrganisatorrechteEntfernen->setLayoutDirection(Qt::LeftToRight);
        OrganisatorrechteEntfernen->setAutoFillBackground(false);
        OrganisatorrechteEntfernen->setAutoRepeat(false);

        Buttons->addWidget(OrganisatorrechteEntfernen);

        PwAndern = new QPushButton(gridLayoutWidget);
        PwAndern->setObjectName(QString::fromUtf8("PwAndern"));

        Buttons->addWidget(PwAndern);

        Speichern = new QPushButton(gridLayoutWidget);
        Speichern->setObjectName(QString::fromUtf8("Speichern"));

        Buttons->addWidget(Speichern);


        gridLayout->addLayout(Buttons, 1, 0, 1, 1);

        Daten = new QVBoxLayout();
        Daten->setObjectName(QString::fromUtf8("Daten"));
        ueberschriftAltVers_2 = new QHBoxLayout();
        ueberschriftAltVers_2->setObjectName(QString::fromUtf8("ueberschriftAltVers_2"));
        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        ueberschriftAltVers_2->addWidget(label_13);

        lineEdit_11 = new QLineEdit(gridLayoutWidget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setEnabled(true);

        ueberschriftAltVers_2->addWidget(lineEdit_11);


        Daten->addLayout(ueberschriftAltVers_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_7->addWidget(label_14);

        lineEdit_12 = new QLineEdit(gridLayoutWidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        horizontalLayout_7->addWidget(lineEdit_12);


        Daten->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        lineEdit_13 = new QLineEdit(gridLayoutWidget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        horizontalLayout_8->addWidget(lineEdit_13);


        Daten->addLayout(horizontalLayout_8);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_17->addWidget(label_16);

        lineEdit_14 = new QLineEdit(gridLayoutWidget);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        horizontalLayout_17->addWidget(lineEdit_14);


        Daten->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_18->addWidget(label_17);

        lineEdit_15 = new QLineEdit(gridLayoutWidget);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        horizontalLayout_18->addWidget(lineEdit_15);


        Daten->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_19->addWidget(label_18);

        lineEdit_16 = new QLineEdit(gridLayoutWidget);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));

        horizontalLayout_19->addWidget(lineEdit_16);


        Daten->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_20->addWidget(label_19);

        lineEdit_17 = new QLineEdit(gridLayoutWidget);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));

        horizontalLayout_20->addWidget(lineEdit_17);


        Daten->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_21->addWidget(label_20);

        lineEdit_18 = new QLineEdit(gridLayoutWidget);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));

        horizontalLayout_21->addWidget(lineEdit_18);


        Daten->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_22->addWidget(label_22);

        lineEdit_20 = new QLineEdit(gridLayoutWidget);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));

        horizontalLayout_22->addWidget(lineEdit_20);


        Daten->addLayout(horizontalLayout_22);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_9->addWidget(label_21);

        lineEdit_19 = new QLineEdit(gridLayoutWidget);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));

        horizontalLayout_9->addWidget(lineEdit_19);


        Daten->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_10->addWidget(label);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_10->addWidget(lineEdit);


        Daten->addLayout(horizontalLayout_10);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        AddTelnumber = new QPushButton(gridLayoutWidget);
        AddTelnumber->setObjectName(QString::fromUtf8("AddTelnumber"));

        horizontalLayout_39->addWidget(AddTelnumber);


        Daten->addLayout(horizontalLayout_39);


        gridLayout->addLayout(Daten, 3, 0, 1, 1);

        Seitenheader_2 = new QHBoxLayout();
        Seitenheader_2->setSpacing(200);
        Seitenheader_2->setObjectName(QString::fromUtf8("Seitenheader_2"));
        zurueck_2 = new QPushButton(gridLayoutWidget);
        zurueck_2->setObjectName(QString::fromUtf8("zurueck_2"));

        Seitenheader_2->addWidget(zurueck_2);

        KTDVS_2 = new QLabel(gridLayoutWidget);
        KTDVS_2->setObjectName(QString::fromUtf8("KTDVS_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        KTDVS_2->setFont(font);

        Seitenheader_2->addWidget(KTDVS_2);

        logout_2 = new QPushButton(gridLayoutWidget);
        logout_2->setObjectName(QString::fromUtf8("logout_2"));

        Seitenheader_2->addWidget(logout_2);


        gridLayout->addLayout(Seitenheader_2, 0, 0, 1, 1);

        Komentar = new QTextEdit(gridLayoutWidget);
        Komentar->setObjectName(QString::fromUtf8("Komentar"));
        Komentar->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(Komentar, 4, 0, 1, 1);


        retranslateUi(View_TeilnehmerTeilnehmerHinzufuegen);

        QMetaObject::connectSlotsByName(View_TeilnehmerTeilnehmerHinzufuegen);
    } // setupUi

    void retranslateUi(QWidget *View_TeilnehmerTeilnehmerHinzufuegen)
    {
        View_TeilnehmerTeilnehmerHinzufuegen->setWindowTitle(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Form", nullptr));
        Versionsverlauf->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Versionsverlauf", nullptr));
        OrganisatorrechteEntfernen->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Organisatorrechte entfernen", nullptr));
        PwAndern->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Passwort \303\244ndern", nullptr));
        Speichern->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Speichern", nullptr));
        label_13->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Vorname", nullptr));
        label_14->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Nachname", nullptr));
        label_15->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Schulname", nullptr));
        label_16->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Stra\303\237e", nullptr));
        label_17->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Hausnummer", nullptr));
        label_18->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Plz", nullptr));
        label_19->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Ort", nullptr));
        label_20->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Land", nullptr));
        label_22->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Email", nullptr));
        label_21->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Telefonnummer", nullptr));
        label->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "2. Telefonnummer", nullptr));
        AddTelnumber->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Weitere Telefonnummer hinzuf\303\274gen", nullptr));
        zurueck_2->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Zur\303\274ck", nullptr));
        KTDVS_2->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "KTDVS", nullptr));
        logout_2->setText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Logout(symbol)", nullptr));
        Komentar->setPlaceholderText(QCoreApplication::translate("View_TeilnehmerTeilnehmerHinzufuegen", "Kommentar...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_TeilnehmerTeilnehmerHinzufuegen: public Ui_View_TeilnehmerTeilnehmerHinzufuegen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
