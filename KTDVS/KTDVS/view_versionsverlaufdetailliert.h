#ifndef VIEW_VERSIONSVERLAUFDETAILLIERT_H
#define VIEW_VERSIONSVERLAUFDETAILLIERT_H

#include <QWidget>
#include "Teilnehmerdaten.h"
#include "View_Versionsverlauf.h"

namespace Ui {
class View_VersionsverlaufDetailliert;
}

class View_VersionsverlaufDetailliert : public QWidget
{
    Q_OBJECT

public:
    explicit View_VersionsverlaufDetailliert(QWidget *parent = nullptr,Teilnehmerdaten *alt= nullptr, Teilnehmerdaten *neu=nullptr);
    ~View_VersionsverlaufDetailliert();

private slots:
  //  void on_pushButton_clicked();

    void on_zurueck_clicked();

  //  void on_lineEdit_1_cursorPositionChanged(int arg1, int arg2);

    void on_logout_clicked();

private:
    Ui::View_VersionsverlaufDetailliert *ui;
};

#endif // VIEW_VERSIONSVERLAUFDETAILLIERT_H
