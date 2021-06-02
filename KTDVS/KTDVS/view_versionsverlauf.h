#ifndef VIEW_VERSIONSVERLAUF_H
#define VIEW_VERSIONSVERLAUF_H

#include <QWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QToolButton>

namespace Ui {
class view_versionsverlauf;
}

class view_versionsverlauf : public QWidget
{
    Q_OBJECT

public:
    explicit view_versionsverlauf(QWidget *parent = nullptr);
    ~view_versionsverlauf();

    void onUpdate();

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::view_versionsverlauf *ui;

    QTableWidget *listeTeilnehmer;
    QPushButton *zurueck;
    //QPushButton *details;
    QToolButton *ausloggen;

    void onInit();
};

#endif // VIEW_VERSIONSVERLAUF_H
