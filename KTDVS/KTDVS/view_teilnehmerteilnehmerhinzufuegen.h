#ifndef VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
#define VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H

#include <QWidget>

namespace Ui {
class View_TeilnehmerTeilnehmerHinzufuegen;
}

class View_TeilnehmerTeilnehmerHinzufuegen : public QWidget
{
    Q_OBJECT

public:
    explicit View_TeilnehmerTeilnehmerHinzufuegen(QWidget *parent = nullptr);
    ~View_TeilnehmerTeilnehmerHinzufuegen();

private:
    Ui::View_TeilnehmerTeilnehmerHinzufuegen *ui;
};

#endif // VIEW_TEILNEHMERTEILNEHMERHINZUFUEGEN_H
