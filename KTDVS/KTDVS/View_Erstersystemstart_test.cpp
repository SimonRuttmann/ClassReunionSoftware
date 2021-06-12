#include "View_Erstersystemstart_test.h"
#include "ui_View_Erstersystemstart_test.h"



View_ErsterSystemstart_test::View_ErsterSystemstart_test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View_ErsterSystemstart_test)
{
    ui->setupUi(this);
}

View_ErsterSystemstart_test::~View_ErsterSystemstart_test()
{
    delete ui;
}


// Weiterleitung zum erstellen des Hauptorganisators
void View_ErsterSystemstart_test::on_NeuesSystem_clicked()
{ // Parameter neues System noch setzen
    View_Einloggen * w;
    w = new View_Einloggen(this);
    w ->show();


}

// Weiterleitung zum Normalen einloggen
void View_ErsterSystemstart_test::on_Beitreten_clicked()
{
    View_Einloggen *scene= new View_Einloggen(this); //statt 'this' muss es vermutlich eine globale Var mit dem Hauptfenster geben.
    scene->neuesSystem = false;
    this->destroy(true);
    scene->show();
}

