/********************************************************************************
** Form generated from reading UI file 'View_VersionsverlaufDetailiert.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_VERSIONSVERLAUFDETAILIERT_H
#define UI_VIEW_VERSIONSVERLAUFDETAILIERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Gesamtformular;
    QHBoxLayout *Seitenheader_3;
    QPushButton *zurueck_3;
    QLabel *KTDVS_3;
    QPushButton *logout_3;
    QHBoxLayout *Seiteninhalt_3;
    QVBoxLayout *alteVersion_3;
    QHBoxLayout *ueberschriftAltVers_5;
    QLabel *vorname_alt_label;
    QLabel *nachname_alt_label;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_46;
    QLineEdit *lineEdit_41;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_47;
    QLineEdit *lineEdit_42;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_48;
    QLineEdit *lineEdit_43;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_49;
    QLineEdit *lineEdit_44;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_50;
    QLineEdit *lineEdit_45;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_51;
    QLineEdit *lineEdit_46;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_52;
    QLineEdit *lineEdit_47;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_53;
    QLineEdit *lineEdit_48;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_54;
    QLineEdit *lineEdit_49;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_55;
    QLineEdit *lineEdit_50;
    QHBoxLayout *horizontalLayout_57;
    QTextEdit *Aenderungskommentar_7;
    QVBoxLayout *neueVersion_3;
    QHBoxLayout *ueberschriftAltVers_6;
    QLabel *vorname_alt_label_2;
    QLabel *nachname_alt_label_2;
    QLabel *label_56;
    QHBoxLayout *horizontalLayout_58;
    QLabel *label_57;
    QLineEdit *lineEdit_51;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_58;
    QLineEdit *lineEdit_52;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_59;
    QLineEdit *lineEdit_53;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_60;
    QLineEdit *lineEdit_54;
    QHBoxLayout *horizontalLayout_62;
    QLabel *label_61;
    QLineEdit *lineEdit_55;
    QHBoxLayout *horizontalLayout_63;
    QLabel *label_62;
    QLineEdit *lineEdit_56;
    QHBoxLayout *horizontalLayout_64;
    QLabel *label_63;
    QLineEdit *lineEdit_57;
    QHBoxLayout *horizontalLayout_65;
    QLabel *label_64;
    QLineEdit *lineEdit_58;
    QHBoxLayout *horizontalLayout_66;
    QLabel *label_65;
    QLineEdit *lineEdit_59;
    QHBoxLayout *horizontalLayout_67;
    QLabel *label_66;
    QLineEdit *lineEdit_60;
    QHBoxLayout *horizontalLayout_68;
    QTextEdit *Aenderungskommentar_8;
    QTextEdit *Aenderungskommentar_9;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1239, 688);
        verticalLayoutWidget = new QWidget(Form);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 771, 561));
        Gesamtformular = new QVBoxLayout(verticalLayoutWidget);
        Gesamtformular->setSpacing(6);
        Gesamtformular->setObjectName(QString::fromUtf8("Gesamtformular"));
        Gesamtformular->setContentsMargins(0, 0, 0, 0);
        Seitenheader_3 = new QHBoxLayout();
        Seitenheader_3->setSpacing(200);
        Seitenheader_3->setObjectName(QString::fromUtf8("Seitenheader_3"));
        zurueck_3 = new QPushButton(verticalLayoutWidget);
        zurueck_3->setObjectName(QString::fromUtf8("zurueck_3"));

        Seitenheader_3->addWidget(zurueck_3);

        KTDVS_3 = new QLabel(verticalLayoutWidget);
        KTDVS_3->setObjectName(QString::fromUtf8("KTDVS_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        KTDVS_3->setFont(font);

        Seitenheader_3->addWidget(KTDVS_3);

        logout_3 = new QPushButton(verticalLayoutWidget);
        logout_3->setObjectName(QString::fromUtf8("logout_3"));

        Seitenheader_3->addWidget(logout_3);


        Gesamtformular->addLayout(Seitenheader_3);

        Seiteninhalt_3 = new QHBoxLayout();
        Seiteninhalt_3->setSpacing(20);
        Seiteninhalt_3->setObjectName(QString::fromUtf8("Seiteninhalt_3"));
        alteVersion_3 = new QVBoxLayout();
        alteVersion_3->setObjectName(QString::fromUtf8("alteVersion_3"));
        ueberschriftAltVers_5 = new QHBoxLayout();
        ueberschriftAltVers_5->setObjectName(QString::fromUtf8("ueberschriftAltVers_5"));
        vorname_alt_label = new QLabel(verticalLayoutWidget);
        vorname_alt_label->setObjectName(QString::fromUtf8("vorname_alt_label"));

        ueberschriftAltVers_5->addWidget(vorname_alt_label);

        nachname_alt_label = new QLabel(verticalLayoutWidget);
        nachname_alt_label->setObjectName(QString::fromUtf8("nachname_alt_label"));

        ueberschriftAltVers_5->addWidget(nachname_alt_label);

        label_23 = new QLabel(verticalLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        ueberschriftAltVers_5->addWidget(label_23);


        alteVersion_3->addLayout(ueberschriftAltVers_5);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_46 = new QLabel(verticalLayoutWidget);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        horizontalLayout_23->addWidget(label_46);

        lineEdit_41 = new QLineEdit(verticalLayoutWidget);
        lineEdit_41->setObjectName(QString::fromUtf8("lineEdit_41"));
        lineEdit_41->setEnabled(true);

        horizontalLayout_23->addWidget(lineEdit_41);


        alteVersion_3->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_47 = new QLabel(verticalLayoutWidget);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        horizontalLayout_24->addWidget(label_47);

        lineEdit_42 = new QLineEdit(verticalLayoutWidget);
        lineEdit_42->setObjectName(QString::fromUtf8("lineEdit_42"));

        horizontalLayout_24->addWidget(lineEdit_42);


        alteVersion_3->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_48 = new QLabel(verticalLayoutWidget);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        horizontalLayout_25->addWidget(label_48);

        lineEdit_43 = new QLineEdit(verticalLayoutWidget);
        lineEdit_43->setObjectName(QString::fromUtf8("lineEdit_43"));

        horizontalLayout_25->addWidget(lineEdit_43);


        alteVersion_3->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_49 = new QLabel(verticalLayoutWidget);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        horizontalLayout_26->addWidget(label_49);

        lineEdit_44 = new QLineEdit(verticalLayoutWidget);
        lineEdit_44->setObjectName(QString::fromUtf8("lineEdit_44"));

        horizontalLayout_26->addWidget(lineEdit_44);


        alteVersion_3->addLayout(horizontalLayout_26);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        label_50 = new QLabel(verticalLayoutWidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        horizontalLayout_51->addWidget(label_50);

        lineEdit_45 = new QLineEdit(verticalLayoutWidget);
        lineEdit_45->setObjectName(QString::fromUtf8("lineEdit_45"));

        horizontalLayout_51->addWidget(lineEdit_45);


        alteVersion_3->addLayout(horizontalLayout_51);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        label_51 = new QLabel(verticalLayoutWidget);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        horizontalLayout_52->addWidget(label_51);

        lineEdit_46 = new QLineEdit(verticalLayoutWidget);
        lineEdit_46->setObjectName(QString::fromUtf8("lineEdit_46"));

        horizontalLayout_52->addWidget(lineEdit_46);


        alteVersion_3->addLayout(horizontalLayout_52);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        label_52 = new QLabel(verticalLayoutWidget);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        horizontalLayout_53->addWidget(label_52);

        lineEdit_47 = new QLineEdit(verticalLayoutWidget);
        lineEdit_47->setObjectName(QString::fromUtf8("lineEdit_47"));

        horizontalLayout_53->addWidget(lineEdit_47);


        alteVersion_3->addLayout(horizontalLayout_53);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setObjectName(QString::fromUtf8("horizontalLayout_54"));
        label_53 = new QLabel(verticalLayoutWidget);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        horizontalLayout_54->addWidget(label_53);

        lineEdit_48 = new QLineEdit(verticalLayoutWidget);
        lineEdit_48->setObjectName(QString::fromUtf8("lineEdit_48"));

        horizontalLayout_54->addWidget(lineEdit_48);


        alteVersion_3->addLayout(horizontalLayout_54);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName(QString::fromUtf8("horizontalLayout_55"));
        label_54 = new QLabel(verticalLayoutWidget);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        horizontalLayout_55->addWidget(label_54);

        lineEdit_49 = new QLineEdit(verticalLayoutWidget);
        lineEdit_49->setObjectName(QString::fromUtf8("lineEdit_49"));

        horizontalLayout_55->addWidget(lineEdit_49);


        alteVersion_3->addLayout(horizontalLayout_55);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setObjectName(QString::fromUtf8("horizontalLayout_56"));
        label_55 = new QLabel(verticalLayoutWidget);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        horizontalLayout_56->addWidget(label_55);

        lineEdit_50 = new QLineEdit(verticalLayoutWidget);
        lineEdit_50->setObjectName(QString::fromUtf8("lineEdit_50"));

        horizontalLayout_56->addWidget(lineEdit_50);


        alteVersion_3->addLayout(horizontalLayout_56);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName(QString::fromUtf8("horizontalLayout_57"));
        Aenderungskommentar_7 = new QTextEdit(verticalLayoutWidget);
        Aenderungskommentar_7->setObjectName(QString::fromUtf8("Aenderungskommentar_7"));
        Aenderungskommentar_7->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_57->addWidget(Aenderungskommentar_7);


        alteVersion_3->addLayout(horizontalLayout_57);


        Seiteninhalt_3->addLayout(alteVersion_3);

        neueVersion_3 = new QVBoxLayout();
        neueVersion_3->setObjectName(QString::fromUtf8("neueVersion_3"));
        ueberschriftAltVers_6 = new QHBoxLayout();
        ueberschriftAltVers_6->setObjectName(QString::fromUtf8("ueberschriftAltVers_6"));
        vorname_alt_label_2 = new QLabel(verticalLayoutWidget);
        vorname_alt_label_2->setObjectName(QString::fromUtf8("vorname_alt_label_2"));

        ueberschriftAltVers_6->addWidget(vorname_alt_label_2);

        nachname_alt_label_2 = new QLabel(verticalLayoutWidget);
        nachname_alt_label_2->setObjectName(QString::fromUtf8("nachname_alt_label_2"));

        ueberschriftAltVers_6->addWidget(nachname_alt_label_2);

        label_56 = new QLabel(verticalLayoutWidget);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        ueberschriftAltVers_6->addWidget(label_56);


        neueVersion_3->addLayout(ueberschriftAltVers_6);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName(QString::fromUtf8("horizontalLayout_58"));
        label_57 = new QLabel(verticalLayoutWidget);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout_58->addWidget(label_57);

        lineEdit_51 = new QLineEdit(verticalLayoutWidget);
        lineEdit_51->setObjectName(QString::fromUtf8("lineEdit_51"));

        horizontalLayout_58->addWidget(lineEdit_51);


        neueVersion_3->addLayout(horizontalLayout_58);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName(QString::fromUtf8("horizontalLayout_59"));
        label_58 = new QLabel(verticalLayoutWidget);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_59->addWidget(label_58);

        lineEdit_52 = new QLineEdit(verticalLayoutWidget);
        lineEdit_52->setObjectName(QString::fromUtf8("lineEdit_52"));

        horizontalLayout_59->addWidget(lineEdit_52);


        neueVersion_3->addLayout(horizontalLayout_59);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setObjectName(QString::fromUtf8("horizontalLayout_60"));
        label_59 = new QLabel(verticalLayoutWidget);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        horizontalLayout_60->addWidget(label_59);

        lineEdit_53 = new QLineEdit(verticalLayoutWidget);
        lineEdit_53->setObjectName(QString::fromUtf8("lineEdit_53"));

        horizontalLayout_60->addWidget(lineEdit_53);


        neueVersion_3->addLayout(horizontalLayout_60);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setObjectName(QString::fromUtf8("horizontalLayout_61"));
        label_60 = new QLabel(verticalLayoutWidget);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_61->addWidget(label_60);

        lineEdit_54 = new QLineEdit(verticalLayoutWidget);
        lineEdit_54->setObjectName(QString::fromUtf8("lineEdit_54"));

        horizontalLayout_61->addWidget(lineEdit_54);


        neueVersion_3->addLayout(horizontalLayout_61);

        horizontalLayout_62 = new QHBoxLayout();
        horizontalLayout_62->setObjectName(QString::fromUtf8("horizontalLayout_62"));
        label_61 = new QLabel(verticalLayoutWidget);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        horizontalLayout_62->addWidget(label_61);

        lineEdit_55 = new QLineEdit(verticalLayoutWidget);
        lineEdit_55->setObjectName(QString::fromUtf8("lineEdit_55"));

        horizontalLayout_62->addWidget(lineEdit_55);


        neueVersion_3->addLayout(horizontalLayout_62);

        horizontalLayout_63 = new QHBoxLayout();
        horizontalLayout_63->setObjectName(QString::fromUtf8("horizontalLayout_63"));
        label_62 = new QLabel(verticalLayoutWidget);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        horizontalLayout_63->addWidget(label_62);

        lineEdit_56 = new QLineEdit(verticalLayoutWidget);
        lineEdit_56->setObjectName(QString::fromUtf8("lineEdit_56"));

        horizontalLayout_63->addWidget(lineEdit_56);


        neueVersion_3->addLayout(horizontalLayout_63);

        horizontalLayout_64 = new QHBoxLayout();
        horizontalLayout_64->setObjectName(QString::fromUtf8("horizontalLayout_64"));
        label_63 = new QLabel(verticalLayoutWidget);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        horizontalLayout_64->addWidget(label_63);

        lineEdit_57 = new QLineEdit(verticalLayoutWidget);
        lineEdit_57->setObjectName(QString::fromUtf8("lineEdit_57"));

        horizontalLayout_64->addWidget(lineEdit_57);


        neueVersion_3->addLayout(horizontalLayout_64);

        horizontalLayout_65 = new QHBoxLayout();
        horizontalLayout_65->setObjectName(QString::fromUtf8("horizontalLayout_65"));
        label_64 = new QLabel(verticalLayoutWidget);
        label_64->setObjectName(QString::fromUtf8("label_64"));

        horizontalLayout_65->addWidget(label_64);

        lineEdit_58 = new QLineEdit(verticalLayoutWidget);
        lineEdit_58->setObjectName(QString::fromUtf8("lineEdit_58"));

        horizontalLayout_65->addWidget(lineEdit_58);


        neueVersion_3->addLayout(horizontalLayout_65);

        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setObjectName(QString::fromUtf8("horizontalLayout_66"));
        label_65 = new QLabel(verticalLayoutWidget);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        horizontalLayout_66->addWidget(label_65);

        lineEdit_59 = new QLineEdit(verticalLayoutWidget);
        lineEdit_59->setObjectName(QString::fromUtf8("lineEdit_59"));

        horizontalLayout_66->addWidget(lineEdit_59);


        neueVersion_3->addLayout(horizontalLayout_66);

        horizontalLayout_67 = new QHBoxLayout();
        horizontalLayout_67->setObjectName(QString::fromUtf8("horizontalLayout_67"));
        label_66 = new QLabel(verticalLayoutWidget);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        horizontalLayout_67->addWidget(label_66);

        lineEdit_60 = new QLineEdit(verticalLayoutWidget);
        lineEdit_60->setObjectName(QString::fromUtf8("lineEdit_60"));

        horizontalLayout_67->addWidget(lineEdit_60);


        neueVersion_3->addLayout(horizontalLayout_67);

        horizontalLayout_68 = new QHBoxLayout();
        horizontalLayout_68->setObjectName(QString::fromUtf8("horizontalLayout_68"));
        Aenderungskommentar_8 = new QTextEdit(verticalLayoutWidget);
        Aenderungskommentar_8->setObjectName(QString::fromUtf8("Aenderungskommentar_8"));
        Aenderungskommentar_8->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_68->addWidget(Aenderungskommentar_8);


        neueVersion_3->addLayout(horizontalLayout_68);


        Seiteninhalt_3->addLayout(neueVersion_3);

        Aenderungskommentar_9 = new QTextEdit(verticalLayoutWidget);
        Aenderungskommentar_9->setObjectName(QString::fromUtf8("Aenderungskommentar_9"));
        Aenderungskommentar_9->setMaximumSize(QSize(150, 16777215));

        Seiteninhalt_3->addWidget(Aenderungskommentar_9);


        Gesamtformular->addLayout(Seiteninhalt_3);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        zurueck_3->setText(QCoreApplication::translate("Form", "Zur\303\274ck", nullptr));
        KTDVS_3->setText(QCoreApplication::translate("Form", "KTDVS", nullptr));
        logout_3->setText(QCoreApplication::translate("Form", "Logout(symbol)", nullptr));
        vorname_alt_label->setText(QCoreApplication::translate("Form", "VornameAlt", nullptr));
        nachname_alt_label->setText(QCoreApplication::translate("Form", "NachnameAlt", nullptr));
        label_23->setText(QCoreApplication::translate("Form", "alteVersion", nullptr));
        label_46->setText(QCoreApplication::translate("Form", "Vorname", nullptr));
        label_47->setText(QCoreApplication::translate("Form", "Nachname", nullptr));
        label_48->setText(QCoreApplication::translate("Form", "Schulname", nullptr));
        label_49->setText(QCoreApplication::translate("Form", "Stra\303\237e", nullptr));
        label_50->setText(QCoreApplication::translate("Form", "Hausnummer", nullptr));
        label_51->setText(QCoreApplication::translate("Form", "Plz", nullptr));
        label_52->setText(QCoreApplication::translate("Form", "Ort", nullptr));
        label_53->setText(QCoreApplication::translate("Form", "Land", nullptr));
        label_54->setText(QCoreApplication::translate("Form", "Telefonnummer", nullptr));
        label_55->setText(QCoreApplication::translate("Form", "Email", nullptr));
        Aenderungskommentar_7->setPlaceholderText(QCoreApplication::translate("Form", "\303\204nderungskommentar", nullptr));
        vorname_alt_label_2->setText(QCoreApplication::translate("Form", "VornameNeu", nullptr));
        nachname_alt_label_2->setText(QCoreApplication::translate("Form", "NachnameNeu", nullptr));
        label_56->setText(QCoreApplication::translate("Form", "alteVersion", nullptr));
        label_57->setText(QCoreApplication::translate("Form", "Vorname", nullptr));
        label_58->setText(QCoreApplication::translate("Form", "Nachname", nullptr));
        label_59->setText(QCoreApplication::translate("Form", "Schulname", nullptr));
        label_60->setText(QCoreApplication::translate("Form", "Stra\303\237e", nullptr));
        label_61->setText(QCoreApplication::translate("Form", "Hausnummer", nullptr));
        label_62->setText(QCoreApplication::translate("Form", "Plz", nullptr));
        label_63->setText(QCoreApplication::translate("Form", "Ort", nullptr));
        label_64->setText(QCoreApplication::translate("Form", "Land", nullptr));
        label_65->setText(QCoreApplication::translate("Form", "Telefonnummer", nullptr));
        label_66->setText(QCoreApplication::translate("Form", "Email", nullptr));
        Aenderungskommentar_8->setPlaceholderText(QCoreApplication::translate("Form", "\303\204nderungskommentar", nullptr));
        Aenderungskommentar_9->setPlaceholderText(QCoreApplication::translate("Form", "\303\204nderungskommentar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_VERSIONSVERLAUFDETAILIERT_H
