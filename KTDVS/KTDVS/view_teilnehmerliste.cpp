#include "view_teilnehmerliste.h"
#include "ui_view_teilnehmerliste.h"
#include "iostream"

using namespace std;

Ui::view_teilnehmerliste* uiglobal;

view_teilnehmerliste::view_teilnehmerliste(QWidget *parent, Teilnehmerliste* teilnehmerliste) :
    QWidget(parent),
    ui(new Ui::view_teilnehmerliste)
{
    ui->setupUi(this);
    uiglobal = ui;

    this->teilnehmerList = teilnehmerliste;

    list<Teilnehmer*>::iterator it;

    for (it = teilnehmerList->getTeilnehmerliste()->begin(); it != teilnehmerList->getTeilnehmerliste()->end(); it++) {
        Teilnehmerdaten* daten = (*it)->getAktuelleTeilnehmerdaten();

        string adresse = "", telefonnummern = "";

        adresse = adresse + daten->getAdresse().strasse;
        adresse = adresse + " " + to_string(daten->getAdresse().haussnummer);
        adresse = adresse + " " + to_string(daten->getAdresse().postleitzahl);
        adresse = adresse + " " + daten->getAdresse().stadt;

        telefonnummern = telefonnummern + daten->getHaupttelefonnummer();
        list<string>::iterator itNummern;

        for (itNummern = daten->getWeitereTelefonnummern().begin(); itNummern != daten->getWeitereTelefonnummern().end(); itNummern++) {
            if (telefonnummern == "") {
                telefonnummern = (*itNummern);
                continue;
            }

            telefonnummern = telefonnummern + ", " + (*itNummern);
        }

        addAusgeklapptesFeld(daten->getNachname(), daten->getEMail(), daten->getSchulname(), adresse, daten->getAdresse().land, telefonnummern, daten->getKommentar());
    }

    //gib mir teilnehmerdaten

    addAusgeklapptesFeld("", "", "", "", "", "", "");
    addEingeklapptesFeld("", "");
}

view_teilnehmerliste::~view_teilnehmerliste()
{
    delete ui;
}

void view_teilnehmerliste::addEingeklapptesFeld(string name ,string email) {
    //add normales
    QHBoxLayout* layout = new QHBoxLayout();
    //keine ahnung was die parameter sind
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QToolButton());
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QLabel(QString::fromStdString(name)));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QLabel(QString::fromStdString(email)));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    uiglobal->liste->addLayout(layout);
}
void view_teilnehmerliste::addAusgeklapptesFeld(string name, string email, string schulname, string adresse, string land, string telefonnummer, string kommentar){
    //add normales
    QHBoxLayout* layout = new QHBoxLayout();
    //keine ahnung was die parameter sind
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QToolButton());
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QLabel(QString::fromStdString(name)));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QLabel(QString::fromStdString(email)));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    //add großes
    QVBoxLayout* layout1 = new QVBoxLayout();
    layout1->addLayout(layout);

    //die müssen noch die methoden aufrufen können
    QVBoxLayout* buttons = new QVBoxLayout();
    buttons->addWidget(new QPushButton("Versionsverlauf"));
    buttons->addWidget(new QPushButton("Daten ändern"));
    buttons->addWidget(new QPushButton("als Organisator hinzufügen"));

    QVBoxLayout* daten = new QVBoxLayout();
    daten->addWidget(new QLabel(QString::fromStdString(schulname)));
    daten->addWidget(new QLabel(QString::fromStdString(adresse)));
    daten->addWidget(new QLabel(QString::fromStdString(email)));
    daten->addWidget(new QLabel(QString::fromStdString(land)));
    daten->addWidget(new QLabel(QString::fromStdString(telefonnummer)));
    daten->addWidget(new QLabel(QString::fromStdString(kommentar)));

    QHBoxLayout* combine = new QHBoxLayout();
    combine->addLayout(daten);
    combine->addLayout(buttons);

    layout1->addLayout(combine);

    uiglobal->liste->addLayout(layout1);
}
void view_teilnehmerliste::removeEingeklapptesFeld(string email){
    cout << "remove email" << email;
}
void view_teilnehmerliste::removeAusgeklapptesFeld(string email){
    cout << "remove email" << email;
}

void view_teilnehmerliste::onAusloggen(){
    cout << "Ausloggen!";
}

void view_teilnehmerliste::onTeilnehmerdatenAendern(){

}

void view_teilnehmerliste::onTeilnehmerHinzufuegen(){

}

void view_teilnehmerliste::onAlsOrganisatorHinzufuegen(){

}

void view_teilnehmerliste::onVersionsverlaufAnzeigen(){

}

void view_teilnehmerliste::onUpdate(){

}

void view_teilnehmerliste::onInit(){

}

void view_teilnehmerliste::on_pushButton_clicked()
{
    cout << "geh zurück!";
}


void view_teilnehmerliste::on_toolButton_clicked()
{
    onAusloggen();
}

