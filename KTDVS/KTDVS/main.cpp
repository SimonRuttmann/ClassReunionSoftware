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
    db.setDatabaseName("C:/Users/Simon Ruttmann/Desktop/SE Uebung3/KTDVS/KTDVS_DB.db");
//    QSqlDatabase* dbp = &db;

//    dbp->setHostName("isis.infotronik.htw-aalen.int");
//    dbp->setDatabaseName("SoftwEng");
//    dbp->setUserName("SoftwEng");
//    dbp->setPassword("SoftwEng");

    if(!db.open()) {
    cerr<< "cannotopen database" << endl;
    exit(2);
    }


    MainWindow w;
    w.show();
    return app.exec();
}
