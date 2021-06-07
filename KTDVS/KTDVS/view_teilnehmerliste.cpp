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

    if (teilnehmerList != nullptr) {
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
    }

    //gib mir teilnehmerdaten

    addAusgeklapptesFeld("test1", "test2", "test3", "test4", "test5", "test6", "test7");
    addEingeklapptesFeld("test8", "test9");

    removeFeld("test10");
}

view_teilnehmerliste::~view_teilnehmerliste()
{
    delete ui;
}

void view_teilnehmerliste::addEingeklapptesFeld(string name ,string email) {
    //add normales
    QHBoxLayout* layout = new QHBoxLayout();

    QToolButton *qtoolbutton = new QToolButton();
    qtoolbutton->icon().addFile("Resources/arrow_down.png");

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
    daten->addWidget(new QLabel("\tSchulname: \t\t" + QString::fromStdString(schulname)));
    daten->addWidget(new QLabel("\tAdresse: \t\t\t" + QString::fromStdString(adresse)));
    daten->addWidget(new QLabel("\tE-Mail: \t\t\t" + QString::fromStdString(email)));
    daten->addWidget(new QLabel("\tLand: \t\t\t" + QString::fromStdString(land)));
    daten->addWidget(new QLabel("\tTelefonnummer: \t\t" + QString::fromStdString(telefonnummer)));
    daten->addWidget(new QLabel("\tKommentar: \t\t" + QString::fromStdString(kommentar)));

    QHBoxLayout* combine = new QHBoxLayout();
    combine->addLayout(daten);
    combine->addLayout(buttons);

    layout1->addLayout(combine);

    uiglobal->liste->addLayout(layout1);
}
void view_teilnehmerliste::removeFeld(string email){
    QVBoxLayout *liste = ui->liste;
    cout << liste->children().count() << endl;

    QList<QObject*>::const_iterator it;

    for (it = liste->children().begin(); it != liste->children().end(); it++) {
        //such email und tu des weg
    }

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

