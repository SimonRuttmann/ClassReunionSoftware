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


    if(argc==2){
        QString arg = QCoreApplication::arguments().at(1);
        if(arg==QString("clean")){
            QSqlQuery cleanDb;
            cleanDb.prepare("DELETE FROM Teilnehmer;");
            cleanDb.exec();
            cleanDb.clear();
            cleanDb.prepare("DELETE FROM Teilnehmerdaten");
            cleanDb.exec();
            cleanDb.prepare("DELETE FROM Telefonnummer;");
            cleanDb.exec();
            cleanDb.clear();
            cleanDb.prepare("UPDATE sqlite_sequence set seq = 0;");
            cleanDb.exec();
            cleanDb.clear();
        }
        else if(arg==QString("test")){
            qDebug() << "Testfall wurde aufgerufen";
            QSqlQuery   HOrg,OrgM,OrgK,
                        t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
            QSqlQuery   HOrg_1, OrgM_1, OrgK_1,
                        td1_1, td2_1, td3_1,
                        td4_1, td5_1, td6_1,
                        td7_1, td8_1, td9_1,
                        td10_1;
            QSqlQuery   HOrg_tel_1, OrgM_tel_1, OrgK_tel_1,
                        tel1_1, tel2_1, tel3_1,
                        tel4_1, tel5_1, tel6_1,
                        tel7_1, tel8_1, tel9_1,
                        tel10_1;
            //Hauptorganisator Roland Dietrich mit Kennwort "RD"
            HOrg.prepare("INSERT INTO Teilnehmer (passwort,isHauptorganisator,versuch,isSystempasswort) VALUES ('RD', true, 0, true)");


            HOrg_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (1, 'Roland', 'Test', 'Dietrich', 'admin@admin', '', 11111, "
                                                        "1, 'Antonstadt', 'Antonstrasse', 'Deutschland', 'meinKommentar', 1);");

            HOrg_tel_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (1, '1', '075116699177')");

            HOrg.exec();
            HOrg_1.exec();
            HOrg_tel_1.exec();


            //Organisator Max Mustermann mit Kennwort "MM"
            OrgM.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('MM', false, 0, true);");

            OrgM_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (2, 'Max','' , 'Mustermann', '1@Albertus.com', '', 11111, "
                                                        "1, 'Antonstadt', 'Antonstrasse', 'Deutschland', 'meinKommentar', 1);");

            OrgM_tel_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (2, 1, 075116699177)");

            OrgM.exec();
            OrgM_1.exec();
            OrgM_tel_1.exec();
            //Organisatorin "Klara Musterfrau" mit kennwort "KM"
            OrgK.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('KM', false, 0, true);");

            OrgK_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (3, 'Klara', '', 'Musterfrau', '2@Albertus.com', '', 11111, "
                                                        "1, 'Antonstadt', 'Antonstrasse', 'Deutschland', 'meinKommentar', 1);");

            OrgK_tel_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (3, 1, 075116699177)");

            OrgK.exec();
            OrgK_1.exec();
            OrgK_tel_1.exec();
            //Zehn weitere Personen mit unterschiedlich vollständigen Adressdaten
            t1.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td1_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (4, 'Erstus', '', 'Alberti', '3@Albertus.com', '', 11111, "
                                                        "3, 'München', 'Antonstrasse', 'Deutschland', 'meinKommentar', 1);");

            tel1_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (4, 1, 075116699177)");

            t1.exec();
            td1_1.exec();
            tel1_1.exec();

            //
            t2.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td2_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (5, 'Zweitus', 'Albertus', 'Alberti', '4@suchthilfe.com', '', 11111, "
                                                        "321, 'Antonstadt', '', 'Türkei', 'meinKommentar', 1);");

            tel2_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (5, 1, 075116699177)");

            t2.exec();
            td2_1.exec();
            tel2_1.exec();
            //
            t3.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td3_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (6, 'Dreitus', 'Albertus', 'Alberti', '5@Albertus.com', '', 98755, "
                                                        "-1, '', 'Antonstrasse', 'Deutschland', 'meinKommentar', 1);");

            tel3_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (6, 1, 075116699177)");

            t3.exec();
            td3_1.exec();
            tel3_1.exec();
            //
            t4.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td4_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (7, 'Viertus', 'Albertus', 'Mustertochter', '6@mustertochter.com', '', 99999, "
                                                        "1, 'Antonstadt', 'Musterstraße', '', 'nice', 1);");

            tel4_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (7, 1, 075116699177)");

            t4.exec();
            td4_1.exec();
            tel4_1.exec();
            //
            t5.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td5_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (8, 'Fünftus', 'Albertus', 'Alberti', '7@idioten.com', '', 11111, "
                                                        "1, 'Antonstadt', 'Antonstrasse', 'Deutschland', '', 1);");

            tel5_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (8, 1, 075116699177)");

            t5.exec();
            td5_1.exec();
            tel5_1.exec();
            //
            t6.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td6_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (9, 'Sechstus', 'Albertus', 'Alberti', '8@Albertus.com', '', 43665, "
                                                        "999, 'Stuttgart', 'Stuttgarterstr', 'Deutschland', 'meinKommentar', 1);");

            tel6_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (9, 1, 075116699177)");
            tel6_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (14, 0, 075116699178)");
            tel6_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (14, 0, 075116696178)");

            t6.exec();
            td6_1.exec();
            tel6_1.exec();
            //
            t7.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td7_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (10, 'Siebtus', 'Albertus', 'Musterfrau', '9@Albertus.com', '', 11111, "
                                                        "1, 'Aalen', 'Antonstrasse', 'Deutschland', 'meinKommentar', 1);");

            tel7_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (10, 1, 075116699177)");

            t7.exec();
            td7_1.exec();
            tel7_1.exec();
            //
            t8.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td8_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (11, 'Achtus', '', 'Alberti', '10@Albertus.com', '', 41431, "
                                                        "33, 'Musterstadt', '', '', 'meinKommentar', 1);");

            tel8_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (11, 1, 075116699177)");

            t8.exec();
            td8_1.exec();
            tel8_1.exec();
            //
            t9.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td9_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (12, 'Neuntus', 'Albertus', 'Alberti', '11@Albertus.com', '', 12345, "
                                                        "1, 'Berlin', 'Berlinerstraße', 'Deutschland', 'meinKommentar', 1);");

            tel9_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (12, 1, 075116699177)");

            t9.exec();
            td9_1.exec();
            tel9_1.exec();
            //
            t10.prepare("INSERT INTO Teilnehmer (passwort, isHauptorganisator, versuch, isSystempasswort) VALUES ('', false, 0, false);");

            td10_1.prepare("INSERT INTO Teilnehmerdaten (teilnehmerkey, vorname, nachname, schulname, email, datum, postleitzahl, "
                                                        "hausnummer, stadt, strasse, land, kommentar, erstellerkey)"
                           "VALUES                     (13, 'Dakadenz', 'Albertus', 'Humongus', '12@hs-aalen.de', '', 11111, "
                                                        "69, 'Ulm', 'Ulmerstraße', 'Deutschland', 'meinKommentar', 1);");

            tel10_1.prepare("INSERT INTO Telefonnummer (teilnehmerdatenkey, isHaupttelefonnummer, telefonnummer) VALUES (13, 1, 075116699177)");

            t10.exec();
            td10_1.exec();
            tel10_1.exec();

        }
        else qDebug() << "Kommandozeilenargument nicht bekannt";
    }

    MainWindow w;
    w.show();
    return app.exec();
}

