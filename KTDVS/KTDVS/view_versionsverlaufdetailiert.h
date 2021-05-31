#ifndef VIEW_VERSIONSVERLAUFDETAILIERT_H
#define VIEW_VERSIONSVERLAUFDETAILIERT_H

#include <QWidget>

namespace Ui {
class View_VersionsverlaufDetailiert;
}

class View_VersionsverlaufDetailiert : public QWidget
{
    Q_OBJECT

public:
    explicit View_VersionsverlaufDetailiert(QWidget *parent = nullptr);
    ~View_VersionsverlaufDetailiert();

private:
    Ui::View_VersionsverlaufDetailiert *ui;
};

#endif // VIEW_VERSIONSVERLAUFDETAILIERT_H
