/********************************************************************************
** Form generated from reading UI file 'View_Erstersystemstart_test.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_ERSTERSYSTEMSTART_TEST_H
#define UI_VIEW_ERSTERSYSTEMSTART_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_ErsterSystemstart_test
{
public:
    QPushButton *NeuesSystem;
    QPushButton *Beitreten;

    void setupUi(QWidget *View_ErsterSystemstart_test)
    {
        if (View_ErsterSystemstart_test->objectName().isEmpty())
            View_ErsterSystemstart_test->setObjectName(QString::fromUtf8("View_ErsterSystemstart_test"));
        View_ErsterSystemstart_test->resize(400, 300);
        NeuesSystem = new QPushButton(View_ErsterSystemstart_test);
        NeuesSystem->setObjectName(QString::fromUtf8("NeuesSystem"));
        NeuesSystem->setGeometry(QRect(10, 70, 171, 111));
        Beitreten = new QPushButton(View_ErsterSystemstart_test);
        Beitreten->setObjectName(QString::fromUtf8("Beitreten"));
        Beitreten->setGeometry(QRect(210, 70, 171, 111));

        retranslateUi(View_ErsterSystemstart_test);

        QMetaObject::connectSlotsByName(View_ErsterSystemstart_test);
    } // setupUi

    void retranslateUi(QWidget *View_ErsterSystemstart_test)
    {
        View_ErsterSystemstart_test->setWindowTitle(QCoreApplication::translate("View_ErsterSystemstart_test", "Form", nullptr));
        NeuesSystem->setText(QCoreApplication::translate("View_ErsterSystemstart_test", "Neues System erstellen", nullptr));
        Beitreten->setText(QCoreApplication::translate("View_ErsterSystemstart_test", "Bestehendem System beitreten", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_ErsterSystemstart_test: public Ui_View_ErsterSystemstart_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_ERSTERSYSTEMSTART_TEST_H
