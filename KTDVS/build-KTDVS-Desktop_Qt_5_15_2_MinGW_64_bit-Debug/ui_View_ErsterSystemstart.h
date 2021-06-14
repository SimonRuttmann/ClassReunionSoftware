/********************************************************************************
** Form generated from reading UI file 'View_ErsterSystemstart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_ERSTERSYSTEMSTART_H
#define UI_VIEW_ERSTERSYSTEMSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_ErsterSystemstart
{
public:
    QPushButton *NeuesSystem;
    QPushButton *Beitreten;

    void setupUi(QWidget *View_ErsterSystemstart)
    {
        if (View_ErsterSystemstart->objectName().isEmpty())
            View_ErsterSystemstart->setObjectName(QString::fromUtf8("View_ErsterSystemstart"));
        View_ErsterSystemstart->resize(400, 300);
        NeuesSystem = new QPushButton(View_ErsterSystemstart);
        NeuesSystem->setObjectName(QString::fromUtf8("NeuesSystem"));
        NeuesSystem->setGeometry(QRect(10, 70, 171, 111));
        Beitreten = new QPushButton(View_ErsterSystemstart);
        Beitreten->setObjectName(QString::fromUtf8("Beitreten"));
        Beitreten->setGeometry(QRect(210, 70, 171, 111));

        retranslateUi(View_ErsterSystemstart);

        QMetaObject::connectSlotsByName(View_ErsterSystemstart);
    } // setupUi

    void retranslateUi(QWidget *View_ErsterSystemstart)
    {
        View_ErsterSystemstart->setWindowTitle(QCoreApplication::translate("View_ErsterSystemstart", "Form", nullptr));
        NeuesSystem->setText(QCoreApplication::translate("View_ErsterSystemstart", "Neues System erstellen", nullptr));
        Beitreten->setText(QCoreApplication::translate("View_ErsterSystemstart", "Bestehendem System beitreten", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_ErsterSystemstart: public Ui_View_ErsterSystemstart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_ERSTERSYSTEMSTART_H
