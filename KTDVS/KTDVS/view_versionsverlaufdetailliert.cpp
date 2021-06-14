#include "ui_View_VersionsverlaufDetailliert.h"
#include "View_VersionsverlaufDetailliert.h"
#include "ui_View_Versionsverlauf.h"
#include "iostream"

using namespace std;
Teilnehmerdaten *altdaten;
Teilnehmerdaten *neudaten;
View_VersionsverlaufDetailliert::View_VersionsverlaufDetailliert(QWidget *parent,Teilnehmerdaten *alt,Teilnehmerdaten *neu,Teilnehmer *teilnehmer) :

    QWidget(parent),
    ui(new Ui::View_VersionsverlaufDetailliert)
{
    ui->setupUi(this);

    vater = parent;
    altdaten=alt;
    neudaten=neu;
    this->teilnehmer=teilnehmer;


    //Möglicher Fehler durch umbennung der Elemente in .ui

    //Setze Eigenschaften der alten

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

    //altdaten=nullptr;
    if(neudaten== nullptr){
        cout << "Neudaten wurden mit Nullpointer übergeben";
        return;
    }

    if(altdaten == nullptr){
        ui->label_2->setText("Daten wurden neu hinzugefügt");

        ui->lineEdit_1->setText(QString("-"));
        ui->lineEdit_2->setText(QString("-"));
        ui->lineEdit_3->setText(QString("-"));
        ui->lineEdit_4->setText(QString("-"));
        ui->lineEdit_5->setText(QString("-"));
        ui->lineEdit_6->setText(QString("-"));
        ui->lineEdit_7->setText(QString("-"));
        ui->lineEdit_8->setText(QString("-"));
        ui->lineEdit_9->setText(QString("-"));
        ui->lineEdit_10->setText(QString("-"));
    }
    else{

    //Labels
    ui->label_2->setText("alte Version");
    //QLineEdits
    ui->lineEdit_1->setText(QString::fromStdString(altdaten->getVorname()));
    ui->lineEdit_2->setText(QString::fromStdString(altdaten->getNachname()));
    ui->lineEdit_3->setText(QString::fromStdString(altdaten->getSchulname()));
    ui->lineEdit_4->setText(QString::fromStdString(altdaten->getAdresse().strasse));
    ui->lineEdit_5->setText(QString::number(altdaten->getAdresse().haussnummer));
    ui->lineEdit_6->setText(QString::number(altdaten->getAdresse().postleitzahl));
    ui->lineEdit_7->setText(QString::fromStdString(altdaten->getAdresse().stadt));
    ui->lineEdit_8->setText(QString::fromStdString(altdaten->getAdresse().land));
    ui->lineEdit_9->setText(QString::fromStdString(altdaten->getHaupttelefonnummer()));
    ui->lineEdit_10->setText(QString::fromStdString(altdaten->getEMail()));



    //Generiert Dynamisch Felder für alle zusätzlichen Nummern

        list<string> weitereTel=altdaten->getWeitereTelefonnummern();
        ui->comboBox_alt->clear();
        for(list<string>::iterator i =weitereTel.begin();i!=weitereTel.end();i++){
            ui->comboBox_alt->addItem(QString::fromStdString(*i));
        }

        /*
        //Kommentarfeld hinzufügen
        hLayout= new QHBoxLayout;
        QTextEdit *edit = new QTextEdit;
        edit->setReadOnly(true);
        edit->setText(QString(QString::fromStdString(altdaten->getKommentar())));
        hLayout->addWidget(edit);
        ui->alteVersion_2->addLayout(hLayout);
        */
    }

    //Setze Eigenschaften der neuen Daten Reihe
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

    ui->lineEdit_21->setText(QString::fromStdString(neudaten->getVorname()));
    ui->lineEdit_22->setText(QString::fromStdString(neudaten->getNachname()));
    ui->lineEdit_23->setText(QString::fromStdString(neudaten->getSchulname()));
    ui->lineEdit_24->setText(QString::fromStdString(neudaten->getAdresse().strasse));
    ui->lineEdit_25->setText(QString::number(neudaten->getAdresse().haussnummer));
    ui->lineEdit_26->setText(QString::number(neudaten->getAdresse().postleitzahl));
    ui->lineEdit_27->setText(QString::fromStdString(neudaten->getAdresse().stadt));
    ui->lineEdit_28->setText(QString::fromStdString(neudaten->getAdresse().land));
    ui->lineEdit_29->setText(QString::fromStdString(neudaten->getHaupttelefonnummer()));
    ui->lineEdit_30->setText(QString::fromStdString(neudaten->getEMail()));

    list<string> weitereTel=neudaten->getWeitereTelefonnummern();

    for(list<string>::iterator i =weitereTel.begin();i!=weitereTel.end();i++){
        ui->comboBox_neu->addItem(QString::fromStdString(*i));
    }

    /*
    //Kommentarfeld hinzufügen
    hLayout= new QHBoxLayout;
    QTextEdit *edit = new QTextEdit;
    edit->setReadOnly(true);
    edit->setText(QString(QString::fromStdString(neudaten->getKommentar())));
    hLayout->addWidget(edit);
    ui->neueVersion_2->addLayout(hLayout);
    */
}

View_VersionsverlaufDetailliert::~View_VersionsverlaufDetailliert()
{
    delete ui;
}



void View_VersionsverlaufDetailliert::on_zurueck_clicked()
{
    View_Versionsverlauf *scene= new View_Versionsverlauf(vater,teilnehmer);

    this->hide();
    scene->show();
}


void View_VersionsverlaufDetailliert::on_logout_clicked()
{
    //Hier könnten noch Sessionparameter gelöscht werden
     QApplication::quit();
}

