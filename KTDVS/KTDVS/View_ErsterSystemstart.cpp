#include "View_ErsterSystemstart.h"
#include "ui_View_Erstersystemstart.h"
#include "View_Einloggen_test.h"

View_ErsterSystemStart::View_ErsterSystemStart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View_ErsterSystemStart)
{
    ui->setupUi(this);
}

View_ErsterSystemStart::~View_ErsterSystemStart()
{
    delete ui;
}

void View_ErsterSystemStart::on_NeuesSystem_Button_clicked()
{
    View_Einloggen * w = new View_Einloggen();
    w -> neuesSystem = true;
    this -> hide();
    //w -> show();
    // hier parameter übergeben NeueHaupt an einloggfenster
}


void View_ErsterSystemStart::on_Beitreten_Button_clicked()
{

}

