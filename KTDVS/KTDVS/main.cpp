#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <qsqldatabase.h>
#include <iostream>
using namespace std;
//MainWindow w;
#include "Organisator.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //DB Anbindung
    QSqlDatabase db   = QSqlDatabase::addDatabase("QSQLITE");
    QSqlDatabase* dbp = &db;
    dbp->setHostName("isis.infotronik.htw-aalen.int");
    dbp->setDatabaseName("SoftwEng");
    dbp->setUserName("SoftwEng");
    dbp->setPassword("SoftwEng");



    if(!db.open()) {
    cerr<< "cannotopen database" << endl;
    exit(2);
    }
    MainWindow w;
    w.show();
    return app.exec();
}
