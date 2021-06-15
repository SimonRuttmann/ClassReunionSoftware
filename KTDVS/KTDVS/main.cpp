#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <qsqldatabase.h>
#include <iostream>
#include <QDebug>


using namespace std;
//MainWindow w;
#include "Organisator.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    const QString DRIVER("QSQLITE");
    if(!QSqlDatabase::isDriverAvailable(DRIVER))  exit(3);

    //DB Anbindung
    QSqlDatabase db   = QSqlDatabase::addDatabase(DRIVER);

    QDir qdir( QApplication::applicationDirPath());
    qdir.cdUp();
    qdir.cdUp();
    QString path = qdir.absoluteFilePath("KTDVS_DB.db");
    db.setDatabaseName(path);



    if(!db.open()) {
    cerr<< "cannot open database" << endl;
    exit(2);
    }

    bool isOrg = true;
    Teilnehmer* aktuellerTeilnehmer = new Teilnehmer();
    if(aktuellerTeilnehmer != nullptr){
        Organisator* murks = (Organisator*)aktuellerTeilnehmer;
        try{murks->getPasswort();}catch(exception e){isOrg = false;}
    }
    else{
        isOrg = false;
    }


    QSqlQuery test;
    test.prepare(
    "SELECT * FROM teilnehmer WHERE passwort != NULL AND passwort != '';"
    );
    if(!test.exec()){
        qDebug()<<"Nix";
    };
    qDebug()<<test.next();
    qDebug() << test.value(0);
    //    QSqlQuery teest;
//    teest.prepare("SELECT * FROM Telefonnummer WHERE teilnehmerdatenkey = :teilnehmerdatenkey;");
//    teest.bindValue(":teilnehmerdatenkey", 34);
//    teest.exec();

//    while(teest.next()){
//        qDebug() << teest.value(0) << " " << teest.value(1) << " " << teest.value(2) << " " << teest.value(3);
//    }

//    QSqlQuery test;
//    test.prepare("SELECT MAX(teilnehmerdatenkey) FROM Teilnehmerdaten WHERE teilnehmerkey = 62;");
//    test.exec();
//    qDebug() << test.first();
//    qDebug() << test.value(0).toInt();

    MainWindow w;
    w.show();
    return app.exec();
}

void testdaten(){
QSqlQuery   t1,t2,t3,t4,t5,t6,t7,t8,t9;
QSqlQuery   td1_1, td1_2, td1_3,
            td2_1, td2_2, td2_3,
            td3_1, td3_2, td3_3,
            td4_1, td4_2, td4_3,
            td5_1, td5_2, td5_3,
            td6_1, td6_2, td6_3,
            td7_1, td7_2, td7_3,
            td8_1, td8_2, td8_3,
            td9_1, td9_2, td9_3;
QSqlQuery   tel1_1, tel1_2, tel1_3,
            tel2_1, tel2_2,
            tel3_1, tel3_2,
            tel4_1, tel4_2,
            tel5_1, tel5_2, tel5_3,
            tel6_1, tel6_2, tel6_3,
            tel7_1, tel7_2, tel7_3,
            tel8_1, tel8_2, tel8_3,
            tel9_1, tel9_2, tel9_3;

t1.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES (admin, true, 0, true);");
t2.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES (org1, false, 0, false);");
t3.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES (org2, false, 0, false);");
t4.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES (org3, false, 0, false);");
t5.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");
t6.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");
t7.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");
t8.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");
t9.prepare( "INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

td1_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                            "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
               "VALUES                     (1, Antonius, Albertus, Alberti, Antonius@Albertus.com, "", 11111, "
                                            "1, Antonstadt, Antonstrasse, Deutschland, meinKommentar, 1);");

}
