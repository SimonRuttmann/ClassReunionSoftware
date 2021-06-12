#include "View_ErsterSystemstart.h"
#include "ui_View_Erstersystemstart.h"



View_ErsterSystemstart::View_ErsterSystemstart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View_ErsterSystemstart)
{
    this->parent = parent;
    ui->setupUi(this);
}

View_ErsterSystemstart::~View_ErsterSystemstart()
{
    delete ui;
}


// Weiterleitung zum erstellen des Hauptorganisators
void View_ErsterSystemstart::on_NeuesSystem_clicked()
{ // Parameter neues System noch setzen
    View_Einloggen* ersterStart = new View_Einloggen(this->parent, true);
    ersterStart ->show();
    this->destroy(true);
    this->hide();

}

// Weiterleitung zum Normalen einloggen
void View_ErsterSystemstart::on_Beitreten_clicked()
{
    View_Einloggen* beitretenStart = new View_Einloggen(this->parent, false); //statt 'this' muss es vermutlich eine globale Var mit dem Hauptfenster geben.
    beitretenStart->show();
    this->destroy(true);
    this->hide();

}

