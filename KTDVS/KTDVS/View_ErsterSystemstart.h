#ifndef VIEW_ERSTERSYSTEMSTART_H
#define VIEW_ERSTERSYSTEMSTART_H

#include <QWidget>
#include "View_Einloggen.h"

namespace Ui {
class View_ErsterSystemstart;
}

class View_ErsterSystemstart : public QWidget
{
    Q_OBJECT

public:
    explicit View_ErsterSystemstart(QWidget *parent = nullptr);
    ~View_ErsterSystemstart();


private slots:
    void on_NeuesSystem_clicked();

    void on_Beitreten_clicked();

private:
    QWidget* parent;
    Ui::View_ErsterSystemstart *ui;
};

#endif // VIEW_ERSTERSYSTEMSTART_H
