#include "view_versionsverlaufdetailliert.h"
#include "ui_view_versionsverlaufdetailliert.h"
#include "Teilnehmerdaten.h"

Teilnehmerdaten altdaten;
Teilnehmerdaten neudaten;
View_VersionsverlaufDetailliert::View_VersionsverlaufDetailliert(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View_VersionsverlaufDetailliert)
{
    ui->setupUi(this);

    //Möglicher Fehler durch umbennung der Elemente in .ui

    //Setze Eigenschaften der alten
    ui->vornameAlt->setText("#VornameAlt");
    ui->nachnameAlt->setText("#NachnameAlt");
    ui->lineEdit_1->setReadOnly(true);
    ui->lineEdit_2->setReadOnly(true);
    ui->lineEdit_3->setReadOnly(true);
    ui->lineEdit_4->setReadOnly(true);
    ui->lineEdit_5->setReadOnly(true);
    ui->lineEdit_6->setReadOnly(true);
    ui->lineEdit_7->setReadOnly(true);
    ui->lineEdit_8->setReadOnly(true);
    ui->lineEdit_9->setReadOnly(true);
    ui->lineEdit_10->setReadOnly(true);

    ui->lineEdit_1->setText(QString::fromStdString(altdaten.getVorname()));
    ui->lineEdit_2->setText(QString::fromStdString(altdaten.getNachname()));
    ui->lineEdit_3->setText(QString::fromStdString(altdaten.getSchulname()));
    ui->lineEdit_4->setText(QString::fromStdString(altdaten.getAdresse().strasse));
    ui->lineEdit_5->setText(QString::number(altdaten.getAdresse().haussnummer));
    ui->lineEdit_6->setText(QString::number(altdaten.getAdresse().postleitzahl));
    //ui->lineEdit_7->setText(QString::fromStdString(altdaten.getAdresse().ort)); //Ort fehlt in Teilnehmerdaten
    ui->lineEdit_8->setText(QString::fromStdString(altdaten.getAdresse().land));
    ui->lineEdit_9->setText(QString::fromStdString(altdaten.getHaupttelefonnummer()));
    ui->lineEdit_10->setText(QString::fromStdString(altdaten.getEMail()));

    //Setze Eigenschaften der neuen Daten Reihe
    ui->vornameNeu->setText("#VornameAlt");
    ui->nachnameNeu->setText("#NachnameAlt");
    ui->lineEdit_21->setReadOnly(true);
    ui->lineEdit_22->setReadOnly(true);
    ui->lineEdit_23->setReadOnly(true);
    ui->lineEdit_24->setReadOnly(true);
    ui->lineEdit_25->setReadOnly(true);
    ui->lineEdit_26->setReadOnly(true);
    ui->lineEdit_27->setReadOnly(true);
    ui->lineEdit_28->setReadOnly(true);
    ui->lineEdit_29->setReadOnly(true);
    ui->lineEdit_30->setReadOnly(true);

    ui->lineEdit_21->setText(QString::fromStdString(neudaten.getVorname()));
    ui->lineEdit_22->setText(QString::fromStdString(neudaten.getNachname()));
    ui->lineEdit_23->setText(QString::fromStdString(neudaten.getSchulname()));
    ui->lineEdit_24->setText(QString::fromStdString(neudaten.getAdresse().strasse));
    ui->lineEdit_25->setText(QString::number(neudaten.getAdresse().haussnummer));
    ui->lineEdit_26->setText(QString::number(neudaten.getAdresse().postleitzahl));
    //ui->lineEdit_27->setText(QString::fromStdString(neudaten.getAdresse().ort)); //Ort fehlt im Datensatz?
    ui->lineEdit_28->setText(QString::fromStdString(neudaten.getAdresse().land));
    ui->lineEdit_29->setText(QString::fromStdString(neudaten.getHaupttelefonnummer()));
    ui->lineEdit_30->setText(QString::fromStdString(neudaten.getEMail()));
}

View_VersionsverlaufDetailliert::~View_VersionsverlaufDetailliert()
{
    delete ui;
}



void View_VersionsverlaufDetailliert::on_zurueck_clicked()
{

}


void View_VersionsverlaufDetailliert::on_logout_clicked()
{

}

