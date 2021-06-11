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

    onInit();

    addAusgeklapptesFeld("test");
}

view_teilnehmerliste::~view_teilnehmerliste()
{
    delete ui;
}

void view_teilnehmerliste::addAusgeklapptesFeld(string test){
    string name = test + " " + test;

    string adresse = "", telefonnummern = "";

    adresse = adresse + test;

    telefonnummern = telefonnummern + test;
    list<string>::iterator itNummern;

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
    layout->addWidget(new QLabel(QString::fromStdString(test)));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    //add großes
    QVBoxLayout* layout1 = new QVBoxLayout();
    layout1->addLayout(layout);

    //die müssen noch die methoden aufrufen können
    QVBoxLayout* buttons = new QVBoxLayout();

    QPushButton* buttonVerlauf = new QPushButton("Versionsverlauf");
    QPushButton* buttonDaten = new QPushButton("Daten ändern");
    QPushButton* buttonOrganisator = new QPushButton("als Organisator hinzufügen");

    //des tut noch nicht .....
    connect(buttonDaten, SIGNAL(clicked()), this, SLOT(test("test")));

    buttons->addWidget(buttonVerlauf);
    buttons->addWidget(buttonDaten);
    buttons->addWidget(buttonOrganisator);

    QVBoxLayout* datenLayout = new QVBoxLayout();
    datenLayout->addWidget(new QLabel("\tSchulname: \t\t" + QString::fromStdString(test)));
    datenLayout->addWidget(new QLabel("\tAdresse: \t\t\t" + QString::fromStdString(adresse)));
    datenLayout->addWidget(new QLabel("\tE-Mail: \t\t\t" + QString::fromStdString(test)));
    datenLayout->addWidget(new QLabel("\tLand: \t\t\t" + QString::fromStdString(test)));
    datenLayout->addWidget(new QLabel("\tTelefonnummer: \t\t" + QString::fromStdString(telefonnummern)));
    datenLayout->addWidget(new QLabel("\tKommentar: \t\t" + QString::fromStdString(test)));

    QHBoxLayout* combine = new QHBoxLayout();
    combine->addLayout(datenLayout);
    combine->addLayout(buttons);

    layout1->addLayout(combine);

    uiglobal->liste->addLayout(layout1);
}

void view_teilnehmerliste::addEingeklapptesFeld(Teilnehmerdaten* daten) {
    string name = daten->getVorname() + " " + daten->getNachname();

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
    layout->addWidget(new QLabel(QString::fromStdString(daten->getEMail())));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    uiglobal->liste->addLayout(layout);
}
void view_teilnehmerliste::addAusgeklapptesFeld(Teilnehmerdaten* daten){
    string name = daten->getVorname() + " " + daten->getNachname();

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
    layout->addWidget(new QLabel(QString::fromStdString(daten->getEMail())));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    //add großes
    QVBoxLayout* layout1 = new QVBoxLayout();
    layout1->addLayout(layout);

    //die müssen noch die methoden aufrufen können
    QVBoxLayout* buttons = new QVBoxLayout();

    QPushButton* buttonVerlauf = new QPushButton("Versionsverlauf");
    QPushButton* buttonDaten = new QPushButton("Daten ändern");
    QPushButton* buttonOrganisator = new QPushButton("als Organisator hinzufügen");

    buttons->addWidget(buttonVerlauf);
    buttons->addWidget(buttonDaten);
    buttons->addWidget(buttonOrganisator);

    QVBoxLayout* datenLayout = new QVBoxLayout();
    datenLayout->addWidget(new QLabel("\tSchulname: \t\t" + QString::fromStdString(daten->getSchulname())));
    datenLayout->addWidget(new QLabel("\tAdresse: \t\t\t" + QString::fromStdString(adresse)));
    datenLayout->addWidget(new QLabel("\tE-Mail: \t\t\t" + QString::fromStdString(daten->getEMail())));
    datenLayout->addWidget(new QLabel("\tLand: \t\t\t" + QString::fromStdString(daten->getAdresse().land)));
    datenLayout->addWidget(new QLabel("\tTelefonnummer: \t\t" + QString::fromStdString(telefonnummern)));
    datenLayout->addWidget(new QLabel("\tKommentar: \t\t" + QString::fromStdString(daten->getKommentar())));

    QHBoxLayout* combine = new QHBoxLayout();
    combine->addLayout(datenLayout);
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

    cout << "remove email" << email << endl;
}

void view_teilnehmerliste::onAusloggen(){
    cout << "Ausloggen!" << endl;
}

void view_teilnehmerliste::test(string email){
    cout << email << endl;
}

void view_teilnehmerliste::onTeilnehmerdatenAendern(string email){
    QVBoxLayout *liste = ui->liste;
    cout << liste->children().count() << endl;

    QList<QObject*>::const_iterator it;

    for (it = liste->children().begin(); it != liste->children().end(); it++) {
        //such email und änder des
    }
}

void view_teilnehmerliste::onTeilnehmerHinzufuegen(Teilnehmer* teilnehmer){
    addEingeklapptesFeld(teilnehmer->getAktuelleTeilnehmerdaten());
}

void view_teilnehmerliste::onAlsOrganisatorHinzufuegen(string email){
    QVBoxLayout *liste = ui->liste;
    cout << liste->children().count() << endl;

    QList<QObject*>::const_iterator it;

    for (it = liste->children().begin(); it != liste->children().end(); it++) {
        //such email und füg den teilnehmer als orga hinzu
    }
}

void view_teilnehmerliste::onVersionsverlaufAnzeigen(string email){
    cout << "Versionsverlauf!" << endl;
}

void view_teilnehmerliste::onUpdate(){

}

void view_teilnehmerliste::onInit(){
    list<Teilnehmer*>::iterator it;

    if (teilnehmerList != nullptr) {
        for (it = teilnehmerList->getTeilnehmerliste()->begin(); it != teilnehmerList->getTeilnehmerliste()->end(); it++) {
            Teilnehmerdaten* daten = (*it)->getAktuelleTeilnehmerdaten();
            addEingeklapptesFeld(daten);
        }
    }
}

void view_teilnehmerliste::on_pushButton_clicked()
{
    cout << "füg teilnehmer hinzu!" << endl;
}


void view_teilnehmerliste::on_toolButton_clicked()
{
    onAusloggen();
}

