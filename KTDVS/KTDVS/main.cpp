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

//    QSqlQuery teest;
//    teest.prepare("SELECT * FROM Teilnehmer");
//    teest.exec();
//    while(teest.next()){
//        qDebug() <<
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
