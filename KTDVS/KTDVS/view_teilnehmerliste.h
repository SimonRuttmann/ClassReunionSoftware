#ifndef VIEW_TEILNEHMERLISTE_H
#define VIEW_TEILNEHMERLISTE_H

#include <QWidget>
#include "Teilnehmerliste.h"

namespace Ui {
class view_teilnehmerliste;
}

class view_teilnehmerliste : public QWidget
{
    Q_OBJECT

public:
    view_teilnehmerliste();
    explicit view_teilnehmerliste(QWidget *parent = nullptr);
    ~view_teilnehmerliste();

    void onAusloggen();
    void onTeilnehmerdatenAendern();
    void onTeilnehmerHinzufuegen();
    void onAlsOrganisatorHinzufuegen();
    void onVersionsverlaufAnzeigen();
    void onUpdate();
    void onInit();

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::view_teilnehmerliste *ui;

    Teilnehmerliste* teilnehmerList;
};

#endif // VIEW_TEILNEHMERLISTE_H
