/********************************************************************************
** Form generated from reading UI file 'view_versionsverlaufdetailliert.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_VERSIONSVERLAUFDETAILLIERT_H
#define UI_VIEW_VERSIONSVERLAUFDETAILLIERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_VersionsverlaufDetailliert
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *Seitenheader_2;
    QPushButton *zurueck;
    QLabel *KTDVS_2;
    QPushButton *logout;
    QHBoxLayout *Seiteninhalt_2;
    QVBoxLayout *alteVersion_2;
    QHBoxLayout *ueberschriftAltVers_2;
    QLabel *vornameAlt;
    QLabel *nachnameAlt;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *lineEdit_1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_17;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_18;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_19;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_20;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_21;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_22;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_39;
    QTextEdit *Aenderungskommentar_3;
    QVBoxLayout *neueVersion_2;
    QHBoxLayout *ueberschriftAltVers_4;
    QLabel *vornameNeu;
    QLabel *nachnameNeu;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_36;
    QLineEdit *lineEdit_21;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_37;
    QLineEdit *lineEdit_22;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_38;
    QLineEdit *lineEdit_23;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_39;
    QLineEdit *lineEdit_24;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_40;
    QLineEdit *lineEdit_25;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_41;
    QLineEdit *lineEdit_26;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_42;
    QLineEdit *lineEdit_27;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_43;
    QLineEdit *lineEdit_28;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_44;
    QLineEdit *lineEdit_29;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_45;
    QLineEdit *lineEdit_30;
    QHBoxLayout *horizontalLayout_50;
    QTextEdit *Aenderungskommentar_5;
    QTextEdit *Aenderungskommentar_6;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *View_VersionsverlaufDetailliert)
    {
        if (View_VersionsverlaufDetailliert->objectName().isEmpty())
            View_VersionsverlaufDetailliert->setObjectName(QString::fromUtf8("View_VersionsverlaufDetailliert"));
        View_VersionsverlaufDetailliert->resize(800, 600);
        centralwidget = new QWidget(View_VersionsverlaufDetailliert);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 771, 561));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Seitenheader_2 = new QHBoxLayout();
        Seitenheader_2->setSpacing(200);
        Seitenheader_2->setObjectName(QString::fromUtf8("Seitenheader_2"));
        zurueck = new QPushButton(verticalLayoutWidget);
        zurueck->setObjectName(QString::fromUtf8("zurueck"));

        Seitenheader_2->addWidget(zurueck);

        KTDVS_2 = new QLabel(verticalLayoutWidget);
        KTDVS_2->setObjectName(QString::fromUtf8("KTDVS_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        KTDVS_2->setFont(font);

        Seitenheader_2->addWidget(KTDVS_2);

        logout = new QPushButton(verticalLayoutWidget);
        logout->setObjectName(QString::fromUtf8("logout"));

        Seitenheader_2->addWidget(logout);


        verticalLayout_2->addLayout(Seitenheader_2);

        Seiteninhalt_2 = new QHBoxLayout();
        Seiteninhalt_2->setSpacing(20);
        Seiteninhalt_2->setObjectName(QString::fromUtf8("Seiteninhalt_2"));
        alteVersion_2 = new QVBoxLayout();
        alteVersion_2->setObjectName(QString::fromUtf8("alteVersion_2"));
        ueberschriftAltVers_2 = new QHBoxLayout();
        ueberschriftAltVers_2->setObjectName(QString::fromUtf8("ueberschriftAltVers_2"));
        vornameAlt = new QLabel(verticalLayoutWidget);
        vornameAlt->setObjectName(QString::fromUtf8("vornameAlt"));

        ueberschriftAltVers_2->addWidget(vornameAlt);

        nachnameAlt = new QLabel(verticalLayoutWidget);
        nachnameAlt->setObjectName(QString::fromUtf8("nachnameAlt"));

        ueberschriftAltVers_2->addWidget(nachnameAlt);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        ueberschriftAltVers_2->addWidget(label_2);


        alteVersion_2->addLayout(ueberschriftAltVers_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_7->addWidget(label_13);

        lineEdit_1 = new QLineEdit(verticalLayoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setEnabled(true);

        horizontalLayout_7->addWidget(lineEdit_1);


        alteVersion_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_8->addWidget(lineEdit_2);


        alteVersion_2->addLayout(horizontalLayout_8);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_17->addWidget(label_15);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_17->addWidget(lineEdit_3);


        alteVersion_2->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_18->addWidget(label_16);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_18->addWidget(lineEdit_4);


        alteVersion_2->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_17 = new QLabel(verticalLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_19->addWidget(label_17);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_19->addWidget(lineEdit_5);


        alteVersion_2->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_20->addWidget(label_18);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_20->addWidget(lineEdit_6);


        alteVersion_2->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_21->addWidget(label_19);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_21->addWidget(lineEdit_7);


        alteVersion_2->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_22->addWidget(label_20);

        lineEdit_8 = new QLineEdit(verticalLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_22->addWidget(lineEdit_8);


        alteVersion_2->addLayout(horizontalLayout_22);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_9->addWidget(label_21);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        horizontalLayout_9->addWidget(lineEdit_9);


        alteVersion_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_22 = new QLabel(verticalLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_10->addWidget(label_22);

        lineEdit_10 = new QLineEdit(verticalLayoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        horizontalLayout_10->addWidget(lineEdit_10);


        alteVersion_2->addLayout(horizontalLayout_10);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        Aenderungskommentar_3 = new QTextEdit(verticalLayoutWidget);
        Aenderungskommentar_3->setObjectName(QString::fromUtf8("Aenderungskommentar_3"));
        Aenderungskommentar_3->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_39->addWidget(Aenderungskommentar_3);


        alteVersion_2->addLayout(horizontalLayout_39);


        Seiteninhalt_2->addLayout(alteVersion_2);

        neueVersion_2 = new QVBoxLayout();
        neueVersion_2->setObjectName(QString::fromUtf8("neueVersion_2"));
        ueberschriftAltVers_4 = new QHBoxLayout();
        ueberschriftAltVers_4->setObjectName(QString::fromUtf8("ueberschriftAltVers_4"));
        vornameNeu = new QLabel(verticalLayoutWidget);
        vornameNeu->setObjectName(QString::fromUtf8("vornameNeu"));

        ueberschriftAltVers_4->addWidget(vornameNeu);

        nachnameNeu = new QLabel(verticalLayoutWidget);
        nachnameNeu->setObjectName(QString::fromUtf8("nachnameNeu"));

        ueberschriftAltVers_4->addWidget(nachnameNeu);

        label_35 = new QLabel(verticalLayoutWidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        ueberschriftAltVers_4->addWidget(label_35);


        neueVersion_2->addLayout(ueberschriftAltVers_4);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_36 = new QLabel(verticalLayoutWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_40->addWidget(label_36);

        lineEdit_21 = new QLineEdit(verticalLayoutWidget);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));

        horizontalLayout_40->addWidget(lineEdit_21);


        neueVersion_2->addLayout(horizontalLayout_40);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_37 = new QLabel(verticalLayoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_41->addWidget(label_37);

        lineEdit_22 = new QLineEdit(verticalLayoutWidget);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));

        horizontalLayout_41->addWidget(lineEdit_22);


        neueVersion_2->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        label_38 = new QLabel(verticalLayoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        horizontalLayout_42->addWidget(label_38);

        lineEdit_23 = new QLineEdit(verticalLayoutWidget);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));

        horizontalLayout_42->addWidget(lineEdit_23);


        neueVersion_2->addLayout(horizontalLayout_42);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        label_39 = new QLabel(verticalLayoutWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_43->addWidget(label_39);

        lineEdit_24 = new QLineEdit(verticalLayoutWidget);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));

        horizontalLayout_43->addWidget(lineEdit_24);


        neueVersion_2->addLayout(horizontalLayout_43);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        label_40 = new QLabel(verticalLayoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_44->addWidget(label_40);

        lineEdit_25 = new QLineEdit(verticalLayoutWidget);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));

        horizontalLayout_44->addWidget(lineEdit_25);


        neueVersion_2->addLayout(horizontalLayout_44);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setObjectName(QString::fromUtf8("horizontalLayout_45"));
        label_41 = new QLabel(verticalLayoutWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout_45->addWidget(label_41);

        lineEdit_26 = new QLineEdit(verticalLayoutWidget);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));

        horizontalLayout_45->addWidget(lineEdit_26);


        neueVersion_2->addLayout(horizontalLayout_45);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        label_42 = new QLabel(verticalLayoutWidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        horizontalLayout_46->addWidget(label_42);

        lineEdit_27 = new QLineEdit(verticalLayoutWidget);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));

        horizontalLayout_46->addWidget(lineEdit_27);


        neueVersion_2->addLayout(horizontalLayout_46);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        label_43 = new QLabel(verticalLayoutWidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_47->addWidget(label_43);

        lineEdit_28 = new QLineEdit(verticalLayoutWidget);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));

        horizontalLayout_47->addWidget(lineEdit_28);


        neueVersion_2->addLayout(horizontalLayout_47);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        label_44 = new QLabel(verticalLayoutWidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_48->addWidget(label_44);

        lineEdit_29 = new QLineEdit(verticalLayoutWidget);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));

        horizontalLayout_48->addWidget(lineEdit_29);


        neueVersion_2->addLayout(horizontalLayout_48);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        label_45 = new QLabel(verticalLayoutWidget);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        horizontalLayout_49->addWidget(label_45);

        lineEdit_30 = new QLineEdit(verticalLayoutWidget);
        lineEdit_30->setObjectName(QString::fromUtf8("lineEdit_30"));

        horizontalLayout_49->addWidget(lineEdit_30);


        neueVersion_2->addLayout(horizontalLayout_49);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        Aenderungskommentar_5 = new QTextEdit(verticalLayoutWidget);
        Aenderungskommentar_5->setObjectName(QString::fromUtf8("Aenderungskommentar_5"));
        Aenderungskommentar_5->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_50->addWidget(Aenderungskommentar_5);


        neueVersion_2->addLayout(horizontalLayout_50);


        Seiteninhalt_2->addLayout(neueVersion_2);

        Aenderungskommentar_6 = new QTextEdit(verticalLayoutWidget);
        Aenderungskommentar_6->setObjectName(QString::fromUtf8("Aenderungskommentar_6"));
        Aenderungskommentar_6->setMaximumSize(QSize(150, 16777215));

        Seiteninhalt_2->addWidget(Aenderungskommentar_6);


        verticalLayout_2->addLayout(Seiteninhalt_2);

        View_VersionsverlaufDetailliert->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(View_VersionsverlaufDetailliert);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View_VersionsverlaufDetailliert->setStatusBar(statusbar);
        menubar = new QMenuBar(View_VersionsverlaufDetailliert);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        View_VersionsverlaufDetailliert->setMenuBar(menubar);

        retranslateUi(View_VersionsverlaufDetailliert);

        QMetaObject::connectSlotsByName(View_VersionsverlaufDetailliert);
    } // setupUi

    void retranslateUi(QMainWindow *View_VersionsverlaufDetailliert)
    {
        View_VersionsverlaufDetailliert->setWindowTitle(QCoreApplication::translate("View_VersionsverlaufDetailliert", "MainWindow", nullptr));
        zurueck->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Zur\303\274ck", nullptr));
        KTDVS_2->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "KTDVS", nullptr));
        logout->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Logout(symbol)", nullptr));
        vornameAlt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "VornameAlt", nullptr));
        nachnameAlt->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "NachnameAlt", nullptr));
        label_2->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "alteVersion", nullptr));
        label_13->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Vorname", nullptr));
        label_14->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Nachname", nullptr));
        label_15->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Schulname", nullptr));
        label_16->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Stra\303\237e", nullptr));
        label_17->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Hausnummer", nullptr));
        label_18->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Plz", nullptr));
        label_19->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Ort", nullptr));
        label_20->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Land", nullptr));
        label_21->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Telefonnummer", nullptr));
        label_22->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Email", nullptr));
        Aenderungskommentar_3->setPlaceholderText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "\303\204nderungskommentar", nullptr));
        vornameNeu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "VornameNeu", nullptr));
        nachnameNeu->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "NachnameNeu", nullptr));
        label_35->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "alteVersion", nullptr));
        label_36->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Vorname", nullptr));
        label_37->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Nachname", nullptr));
        label_38->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Schulname", nullptr));
        label_39->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Stra\303\237e", nullptr));
        label_40->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Hausnummer", nullptr));
        label_41->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Plz", nullptr));
        label_42->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Ort", nullptr));
        label_43->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Land", nullptr));
        label_44->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Telefonnummer", nullptr));
        label_45->setText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "Email", nullptr));
        Aenderungskommentar_5->setPlaceholderText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "\303\204nderungskommentar", nullptr));
        Aenderungskommentar_6->setPlaceholderText(QCoreApplication::translate("View_VersionsverlaufDetailliert", "\303\204nderungskommentar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_VersionsverlaufDetailliert: public Ui_View_VersionsverlaufDetailliert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_VERSIONSVERLAUFDETAILLIERT_H
