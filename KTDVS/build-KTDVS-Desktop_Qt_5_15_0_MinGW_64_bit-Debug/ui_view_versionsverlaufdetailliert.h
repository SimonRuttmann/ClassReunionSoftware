/********************************************************************************
** Form generated from reading UI file 'View_VersionsverlaufDetailliert.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_VERSIONSVERLAUFDETAILLIERT_H
#define UI_VIEW_VERSIONSVERLAUFDETAILLIERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_VersionsverlaufDetailliert
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *zurueck;
    QLabel *KTDVS_2;
    QPushButton *logout;
    QHBoxLayout *alteVersion;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *vorname;
    QLabel *nachname_alt;
    QLabel *schulname_alt;
    QLabel *strasse_alt;
    QLabel *hausnummer_alt;
    QLabel *plz_alt;
    QLabel *ort_alt;
    QLabel *land_alt;
    QLabel *telefonnummern_alt;
    QLabel *weitereTel;
    QLabel *email_alt;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QComboBox *comboBox_alt;
    QLineEdit *lineEdit_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *ueberschriftAltVers_4;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *vorname_neu;
    QLabel *nachname_neu;
    QLabel *schulname_neu;
    QLabel *strasse_neu;
    QLabel *hausnummer_neu;
    QLabel *plz_neu;
    QLabel *ort_neu;
    QLabel *land_neu;
    QLabel *telefonnummer_neu;
    QLabel *weitereTel_neu;
    QLabel *email_neu;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_27;
    QLineEdit *lineEdit_28;
    QLineEdit *lineEdit_29;
    QComboBox *comboBox_neu;
    QLineEdit *lineEdit_30;
    QStatusBar *statusbar;

    void setupUi(QWidget *View_VersionsverlaufDetailliert)
    {
        if (View_VersionsverlaufDetailliert->objectName().isEmpty())
            View_VersionsverlaufDetailliert->setObjectName(QString::fromUtf8("View_VersionsverlaufDetailliert"));
        View_VersionsverlaufDetailliert->resize(1082, 687);
        centralwidget = new QWidget(View_VersionsverlaufDetailliert);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(20, 10, 771, 561));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 2, 452, 457));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        zurueck = new QPushButton(layoutWidget);
        zurueck->setObjectName(QString::fromUtf8("zurueck"));

        horizontalLayout_5->addWidget(zurueck);

        KTDVS_2 = new QLabel(layoutWidget);
        KTDVS_2->setObjectName(QString::fromUtf8("KTDVS_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        KTDVS_2->setFont(font);
        KTDVS_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(KTDVS_2);

        logout = new QPushButton(layoutWidget);
        logout->setObjectName(QString::fromUtf8("logout"));

        horizontalLayout_5->addWidget(logout);


        verticalLayout_7->addLayout(horizontalLayout_5);

        alteVersion = new QHBoxLayout();
        alteVersion->setObjectName(QString::fromUtf8("alteVersion"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        vorname = new QLabel(layoutWidget);
        vorname->setObjectName(QString::fromUtf8("vorname"));

        verticalLayout_3->addWidget(vorname);

        nachname_alt = new QLabel(layoutWidget);
        nachname_alt->setObjectName(QString::fromUtf8("nachname_alt"));

        verticalLayout_3->addWidget(nachname_alt);

        schulname_alt = new QLabel(layoutWidget);
        schulname_alt->setObjectName(QString::fromUtf8("schulname_alt"));

        verticalLayout_3->addWidget(schulname_alt);

        strasse_alt = new QLabel(layoutWidget);
        strasse_alt->setObjectName(QString::fromUtf8("strasse_alt"));

        verticalLayout_3->addWidget(strasse_alt);

        hausnummer_alt = new QLabel(layoutWidget);
        hausnummer_alt->setObjectName(QString::fromUtf8("hausnummer_alt"));

        verticalLayout_3->addWidget(hausnummer_alt);

        plz_alt = new QLabel(layoutWidget);
        plz_alt->setObjectName(QString::fromUtf8("plz_alt"));

        verticalLayout_3->addWidget(plz_alt);

        ort_alt = new QLabel(layoutWidget);
        ort_alt->setObjectName(QString::fromUtf8("ort_alt"));

        verticalLayout_3->addWidget(ort_alt);

        land_alt = new QLabel(layoutWidget);
        land_alt->setObjectName(QString::fromUtf8("land_alt"));

        verticalLayout_3->addWidget(land_alt);

        telefonnummern_alt = new QLabel(layoutWidget);
        telefonnummern_alt->setObjectName(QString::fromUtf8("telefonnummern_alt"));

        verticalLayout_3->addWidget(telefonnummern_alt);

        weitereTel = new QLabel(layoutWidget);
        weitereTel->setObjectName(QString::fromUtf8("weitereTel"));

        verticalLayout_3->addWidget(weitereTel);

        email_alt = new QLabel(layoutWidget);
        email_alt->setObjectName(QString::fromUtf8("email_alt"));

        verticalLayout_3->addWidget(email_alt);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit_1 = new QLineEdit(layoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setEnabled(true);

        verticalLayout_4->addWidget(lineEdit_1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_4->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_4->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_4->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_4->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_4->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_4->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        verticalLayout_4->addWidget(lineEdit_8);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        verticalLayout_4->addWidget(lineEdit_9);

        comboBox_alt = new QComboBox(layoutWidget);
        comboBox_alt->setObjectName(QString::fromUtf8("comboBox_alt"));

        verticalLayout_4->addWidget(comboBox_alt);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        verticalLayout_4->addWidget(lineEdit_10);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_2);


        alteVersion->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ueberschriftAltVers_4 = new QHBoxLayout();
        ueberschriftAltVers_4->setObjectName(QString::fromUtf8("ueberschriftAltVers_4"));
        label_35 = new QLabel(layoutWidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        ueberschriftAltVers_4->addWidget(label_35);


        verticalLayout_5->addLayout(ueberschriftAltVers_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        vorname_neu = new QLabel(layoutWidget);
        vorname_neu->setObjectName(QString::fromUtf8("vorname_neu"));

        verticalLayout_2->addWidget(vorname_neu);

        nachname_neu = new QLabel(layoutWidget);
        nachname_neu->setObjectName(QString::fromUtf8("nachname_neu"));

        verticalLayout_2->addWidget(nachname_neu);

        schulname_neu = new QLabel(layoutWidget);
        schulname_neu->setObjectName(QString::fromUtf8("schulname_neu"));

        verticalLayout_2->addWidget(schulname_neu);

        strasse_neu = new QLabel(layoutWidget);
        strasse_neu->setObjectName(QString::fromUtf8("strasse_neu"));

        verticalLayout_2->addWidget(strasse_neu);

        hausnummer_neu = new QLabel(layoutWidget);
        hausnummer_neu->setObjectName(QString::fromUtf8("hausnummer_neu"));

        verticalLayout_2->addWidget(hausnummer_neu);

        plz_neu = new QLabel(layoutWidget);
        plz_neu->setObjectName(QString::fromUtf8("plz_neu"));

        verticalLayout_2->addWidget(plz_neu);

        ort_neu = new QLabel(layoutWidget);
        ort_neu->setObjectName(QString::fromUtf8("ort_neu"));

        verticalLayout_2->addWidget(ort_neu);

        land_neu = new QLabel(layoutWidget);
        land_neu->setObjectName(QString::fromUtf8("land_neu"));

        verticalLayout_2->addWidget(land_neu);

        telefonnummer_neu = new QLabel(layoutWidget);
        telefonnummer_neu->setObjectName(QString::fromUtf8("telefonnummer_neu"));

        verticalLayout_2->addWidget(telefonnummer_neu);

        weitereTel_neu = new QLabel(layoutWidget);
        weitereTel_neu->setObjectName(QString::fromUtf8("weitereTel_neu"));

        verticalLayout_2->addWidget(weitereTel_neu);

        email_neu = new QLabel(layoutWidget);
        email_neu->setObjectName(QString::fromUtf8("email_neu"));

        verticalLayout_2->addWidget(email_neu);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_21 = new QLineEdit(layoutWidget);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));

        verticalLayout->addWidget(lineEdit_21);

        lineEdit_22 = new QLineEdit(layoutWidget);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));

        verticalLayout->addWidget(lineEdit_22);

        lineEdit_23 = new QLineEdit(layoutWidget);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));

        verticalLayout->addWidget(lineEdit_23);

        lineEdit_24 = new QLineEdit(layoutWidget);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));

        verticalLayout->addWidget(lineEdit_24);

        lineEdit_25 = new QLineEdit(layoutWidget);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));

        verticalLayout->addWidget(lineEdit_25);

        lineEdit_26 = new QLineEdit(layoutWidget);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));

        verticalLayout->addWidget(lineEdit_26);

        lineEdit_27 = new QLineEdit(layoutWidget);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));

        verticalLayout->addWidget(lineEdit_27);

        lineEdit_28 = new QLineEdit(layoutWidget);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));

        verticalLayout->addWidget(lineEdit_28);

        lineEdit_29 = new QLineEdit(layoutWidget);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));

        verticalLayout->addWidget(lineEdit_29);

        comboBox_neu = new QComboBox(layoutWidget);
        comboBox_neu->setObjectName(QString::fromUtf8("comboBox_neu"));

        verticalLayout->addWidget(comboBox_neu);

        lineEdit_30 = new QLineEdit(layoutWidget);
        lineEdit_30->setObjectName(QString::fromUtf8("lineEdit_30"));

        verticalLayout->addWidget(lineEdit_30);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout);


        alteVersion->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(alteVersion);

        statusbar = new QStatusBar(View_VersionsverlaufDetailliert);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 22));

        retranslateUi(View_VersionsverlaufDetailliert);

        QMetaObject::connectSlotsByName(View_VersionsverlaufDetailliert);
    } // setupUi

    void retranslateUi(QWidget *View_VersionsverlaufDetailliert)
    {
        View_VersionsverlaufDetailliert->setWindowTitle(QCoreApplication::translate("View_VersionsverlaufDetailliert", "MainWindow", nullptr));
        zurueck->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Zur\303\274ck", nullptr));
        KTDVS_2->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "KTDVS", nullptr));
        logout->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Logout(symbol)", nullptr));
        label_2->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "alte Version", nullptr));
        vorname->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Vorname", nullptr));
        nachname_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Nachname", nullptr));
        schulname_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Schulname", nullptr));
        strasse_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Stra\303\237e", nullptr));
        hausnummer_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Hausnummer", nullptr));
        plz_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Plz", nullptr));
        ort_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Ort", nullptr));
        land_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Land", nullptr));
        telefonnummern_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Telefonnummer", nullptr));
        weitereTel->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "WeitereTel", nullptr));
        email_alt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Email", nullptr));
        label_35->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "neue Version", nullptr));
        vorname_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Vorname", nullptr));
        nachname_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Nachname", nullptr));
        schulname_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Schulname", nullptr));
        strasse_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Stra\303\237e", nullptr));
        hausnummer_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Hausnummer", nullptr));
        plz_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Plz", nullptr));
        ort_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Ort", nullptr));
        land_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Land", nullptr));
        telefonnummer_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Telefonnummer", nullptr));
        weitereTel_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "WeitereTel", nullptr));
        email_neu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_VersionsverlaufDetailliert: public Ui_View_VersionsverlaufDetailliert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_VERSIONSVERLAUFDETAILLIERT_H
