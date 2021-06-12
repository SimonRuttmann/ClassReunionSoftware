#ifndef VIEW_VERSIONSVERLAUF_H
#define VIEW_VERSIONSVERLAUF_H

#include <QWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QToolButton>
#include "Teilnehmerliste.h"
#include "Teilnehmerdaten.h"
#include "Organisator.h"
namespace Ui {
class View_Versionsverlauf;
}

class View_Versionsverlauf : public QWidget
{
    Q_OBJECT

public:
    explicit View_Versionsverlauf(QWidget *parent = nullptr, Teilnehmer* teilnehmer = nullptr);
    ~View_Versionsverlauf();

    void onUpdate();

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::View_Versionsverlauf *ui;

    Teilnehmer* teilnehmer;

    QTableWidget *listeTeilnehmer;
    QPushButton *zurueck;
    //QPushButton *details;
    QToolButton *ausloggen;

    void onInit();
};

#endif // VIEW_VERSIONSVERLAUF_H
