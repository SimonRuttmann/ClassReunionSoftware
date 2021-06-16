#ifndef VIEW_VERSIONSVERLAUFDETAILLIERT_H
#define VIEW_VERSIONSVERLAUFDETAILLIERT_H

#include <QWidget>
#include "Teilnehmer.h"
#include "Teilnehmerdaten.h"
#include "View_Versionsverlauf.h"

namespace Ui {
class View_VersionsverlaufDetailliert;
}

class View_VersionsverlaufDetailliert : public QWidget
{
    Q_OBJECT

public:
    explicit View_VersionsverlaufDetailliert(QWidget *parent = nullptr,Teilnehmerdaten *alt= nullptr, Teilnehmerdaten *neu=nullptr, Teilnehmer *teilnehmer=nullptr);
    ~View_VersionsverlaufDetailliert();

private slots:

    void on_zurueck_clicked();

    void on_logout_clicked();

private:
    Ui::View_VersionsverlaufDetailliert *ui;
    QWidget *vater;
    Teilnehmer *teilnehmer;
};

#endif // VIEW_VERSIONSVERLAUFDETAILLIERT_H
