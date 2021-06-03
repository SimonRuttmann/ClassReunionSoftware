#include "view_teilnehmerliste.h"
#include "ui_view_teilnehmerliste.h"

view_teilnehmerliste::view_teilnehmerliste(){
    //Konstruktor
}

view_teilnehmerliste::view_teilnehmerliste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::view_teilnehmerliste)
{
    ui->setupUi(this);
}

view_teilnehmerliste::~view_teilnehmerliste()
{
    delete ui;
}

void view_teilnehmerliste::on_pushButton_clicked()
{

}


void view_teilnehmerliste::on_toolButton_clicked()
{

}


void view_teilnehmerliste::on_toolButton_2_clicked()
{

}


void view_teilnehmerliste::on_toolButton_3_clicked()
{

}


void view_teilnehmerliste::on_pushButton_3_clicked()
{

}


void view_teilnehmerliste::on_pushButton_2_clicked()
{

}


void view_teilnehmerliste::on_pushButton_4_clicked()
{

}

void onAusloggen(){

}

void onTeilnehmerdatenAendern(){

}

void onTeilnehmerHinzufuegen(){

}

void onAlsOrganisatorHinzufuegen(){

}

void onVersionsverlaufAnzeigen(){

}

void onUpdate(){

}

void onInit(){

}


