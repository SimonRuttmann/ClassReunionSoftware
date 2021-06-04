//#include "mainwindow.h"
#include <QApplication>
#include "View_Erstersystemstart.h"
#include "View_Einloggen.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View_ErsterSystemStart w;
    if(w.ersterSystemstart){
         w.show();
    }
    else{
        View_Einloggen einloggen;
        einloggen.show();
    }
    return a.exec();
}
