#ifndef VIEW_VERSIONSVERLAUFDETAILLIERT_H
#define VIEW_VERSIONSVERLAUFDETAILLIERT_H

#include <QMainWindow>

namespace Ui {
class View_VersionsverlaufDetailliert;
}

class View_VersionsverlaufDetailliert : public QMainWindow
{
    Q_OBJECT

public:
    explicit View_VersionsverlaufDetailliert(QWidget *parent = nullptr);
    ~View_VersionsverlaufDetailliert();

private slots:
    void on_pushButton_clicked();

    void on_zurueck_clicked();

private:
    Ui::View_VersionsverlaufDetailliert *ui;
};

#endif // VIEW_VERSIONSVERLAUFDETAILLIERT_H
