#ifndef VIEW_ERSTERSYSTEMSTART_H
#define VIEW_ERSTERSYSTEMSTART_H

#include <QMainWindow>

namespace Ui {
class View_ErsterSystemStart;
}

class View_ErsterSystemStart : public QMainWindow
{
    Q_OBJECT

public:
    explicit View_ErsterSystemStart(QWidget *parent = nullptr);
    ~View_ErsterSystemStart();
    bool ersterSystemstart= true;

private slots:
    void on_NeuesSystem_Button_clicked();

    void on_Beitreten_Button_clicked();

private:
    Ui::View_ErsterSystemStart *ui;
};

#endif // VIEW_ERSTERSYSTEMSTART_H
