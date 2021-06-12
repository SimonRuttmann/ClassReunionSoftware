#include "View_Teilnehmerliste.h"
#include "iostream"
#include "ui_View_Teilnehmerliste.h"
#include <QDebug>

using namespace std;

Ui::View_Teilnehmerliste* uiglobal;

View_Teilnehmerliste::View_Teilnehmerliste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View_Teilnehmerliste)
{
    this->vater = parent;
    ui->setupUi(this);
    uiglobal = ui;

    this->teilnehmerList = Teilnehmerliste::instance();

    onInit();

    //addAusgeklapptesFeld("test");
}

View_Teilnehmerliste::~View_Teilnehmerliste()
{
    delete ui;
}

void View_Teilnehmerliste::addAusgeklapptesFeld(string test){
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
   // connect(buttonDaten, SIGNAL(clicked()), this, SLOT(test("test")));

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

void View_Teilnehmerliste::addEingeklapptesFeld(Teilnehmerdaten* daten) {
    string name = daten->getVorname() + " " + daten->getNachname();

    //add normales
    QHBoxLayout* layout = new QHBoxLayout();

    //QToolButton *qtoolbutton = new QToolButton();
    //qtoolbutton->icon().addFile("Resources/arrow_down.png");

    //keine ahnung was die parameter sind
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    //layout->addWidget(qtoolbutton);
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QLabel(QString::fromStdString(name)));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    layout->addWidget(new QLabel(QString::fromStdString(daten->getEMail())));
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));

    uiglobal->liste->addLayout(layout);
}
void View_Teilnehmerliste::addAusgeklapptesFeld(Teilnehmerdaten* daten){
    string name = daten->getVorname() + " " + daten->getNachname();

    string adresse = "", telefonnummern = "";

    adresse = adresse + daten->getAdresse().strasse;
    adresse = adresse + " " + to_string(daten->getAdresse().haussnummer);
    adresse = adresse + " " + to_string(daten->getAdresse().postleitzahl);
    adresse = adresse + " " + daten->getAdresse().stadt;

    telefonnummern = telefonnummern + daten->getHaupttelefonnummer();
    list<string>::iterator itNummern;
    qDebug("TEEEEST1");
    for (itNummern = daten->getWeitereTelefonnummern().begin(); itNummern != daten->getWeitereTelefonnummern().end(); itNummern++) {

       if(itNummern->empty() || (*itNummern)=="") continue;
        //Logik errors weil *it = ??
       qDebug("TEEEEST2");
       string telenummer = *itNummern;
       qDebug()<<QString::fromStdString(telenummer);

        if (telefonnummern == "") {
            telefonnummern = (*itNummern);
            continue;
        }

        telefonnummern = telefonnummern + ", " + (*itNummern);
    }

    //add normales
    QHBoxLayout* layout = new QHBoxLayout();

    //QToolButton *qtoolbutton = new QToolButton();
    //qtoolbutton->icon().addFile("Resources/arrow_down.png");

    //keine ahnung was die parameter sind
    layout->addItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed));
    //layout->addWidget(qtoolbutton);
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

void View_Teilnehmerliste::onAusloggen(){
    QApplication::quit();
    cout << "Ausloggen!" << endl;
}

void View_Teilnehmerliste::test(string email){  //Test???
    cout << email << endl;
}

void View_Teilnehmerliste::onTeilnehmerdatenAendern(string email){  //Teilnehmer
    onUpdate();

    View_TeilnehmerTeilnehmerHinzufuegen* viewTtH =
            new View_TeilnehmerTeilnehmerHinzufuegen(this->vater, this->ausgewaehlerTeilnehmer, false, false);
    viewTtH->show();
    this->hide();
}

void View_Teilnehmerliste::onTeilnehmerHinzufuegen(Teilnehmer* teilnehmer){
    addAusgeklapptesFeld(teilnehmer->getAktuelleTeilnehmerdaten());
    View_TeilnehmerTeilnehmerHinzufuegen* viewTtH =
            new View_TeilnehmerTeilnehmerHinzufuegen(this->vater, this->ausgewaehlerTeilnehmer, true, false);
    viewTtH->show();
    this->hide();
}

void View_Teilnehmerliste::onAlsOrganisatorHinzufuegen(string email){
    cout << "Füge als Organisator hinzu!" << endl;

    list<Teilnehmer*>::iterator it;

    for (it = teilnehmerList->getTeilnehmerliste()->begin(); it != teilnehmerList->getTeilnehmerliste()->end(); it++) {
        if ((*it)->getAktuelleTeilnehmerdaten()->getEMail() == email) {
            //mach den organisator//Falsch Systempasswort fehlt
            //Teilnehmerliste::instance()->vonTeilnZuOrg("Teilnehmerobjekt", "Systempasswort");
            break;
        }
    }
}

void View_Teilnehmerliste::onVersionsverlaufAnzeigen(string email){
    View_Versionsverlauf* vv = new View_Versionsverlauf(this->vater, this->ausgewaehlerTeilnehmer);
    vv->show();
    this->hide();
    cout << "Versionsverlauf!" << endl;
}

void View_Teilnehmerliste::onUpdate(){
    //reset liste
    onInit();
}

void View_Teilnehmerliste::onInit(){
    list<Teilnehmer*>::iterator it;

    if (teilnehmerList != nullptr) {
        for (it = teilnehmerList->getTeilnehmerliste()->begin(); it != teilnehmerList->getTeilnehmerliste()->end(); it++) {
            Teilnehmerdaten* daten = (*it)->getAktuelleTeilnehmerdaten();
            addAusgeklapptesFeld(daten);
        }
    }
}

void View_Teilnehmerliste::on_pushButton_clicked()
{
    this->onTeilnehmerHinzufuegen(this->ausgewaehlerTeilnehmer);
    cout << "füg teilnehmer hinzu!" << endl;
}


void View_Teilnehmerliste::on_toolButton_clicked()
{
    onAusloggen();
}

