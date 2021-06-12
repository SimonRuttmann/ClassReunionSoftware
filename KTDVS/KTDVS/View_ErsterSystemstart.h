#ifndef VIEW_ERSTERSYSTEMSTART_H
#define VIEW_ERSTERSYSTEMSTART_H

#include <QWidget>
#include "View_Einloggen.h"

namespace Ui {
class View_ErsterSystemstart_test;
}

class View_ErsterSystemstart_test : public QWidget
{
    Q_OBJECT

public:
    explicit View_ErsterSystemstart_test(QWidget *parent = nullptr);
    ~View_ErsterSystemstart_test();


private slots:
    void on_NeuesSystem_clicked();

    void on_Beitreten_clicked();

private:
    Ui::View_ErsterSystemstart_test *ui;
};

#endif // VIEW_ERSTERSYSTEMSTART_H
