#include "view_teilnehmerteilnehmerhinzufuegen.h"
#include "ui_view_teilnehmerteilnehmerhinzufuegen.h"

View_TeilnehmerTeilnehmerHinzufuegen::View_TeilnehmerTeilnehmerHinzufuegen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View_TeilnehmerTeilnehmerHinzufuegen)
{
    ui->setupUi(this);
}

View_TeilnehmerTeilnehmerHinzufuegen::~View_TeilnehmerTeilnehmerHinzufuegen()
{
    delete ui;
}
