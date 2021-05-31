#include "view_versionsverlaufdetailliert.h"
#include "ui_view_versionsverlaufdetailliert.h"

View_VersionsverlaufDetailliert::View_VersionsverlaufDetailliert(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View_VersionsverlaufDetailliert)
{
    ui->setupUi(this);
}

View_VersionsverlaufDetailliert::~View_VersionsverlaufDetailliert()
{
    delete ui;
}


void View_VersionsverlaufDetailliert::on_zurueck_clicked()
{

}

