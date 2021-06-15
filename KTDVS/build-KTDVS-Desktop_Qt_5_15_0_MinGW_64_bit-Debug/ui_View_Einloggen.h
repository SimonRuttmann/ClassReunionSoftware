/********************************************************************************
** Form generated from reading UI file 'View_Einloggen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_EINLOGGEN_H
#define UI_VIEW_EINLOGGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Einloggen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *LabelOben;
    QLabel *LabelUnten;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *Labl1;
    QLabel *LAbl2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *EMail;
    QLineEdit *Passwort;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Login;
    QPushButton *zurueck;

    void setupUi(QWidget *View_Einloggen)
    {
        if (View_Einloggen->objectName().isEmpty())
            View_Einloggen->setObjectName(QString::fromUtf8("View_Einloggen"));
        View_Einloggen->resize(400, 300);
        verticalLayoutWidget = new QWidget(View_Einloggen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 70, 261, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        LabelOben = new QLabel(verticalLayoutWidget);
        LabelOben->setObjectName(QString::fromUtf8("LabelOben"));

        verticalLayout_5->addWidget(LabelOben);

        LabelUnten = new QLabel(verticalLayoutWidget);
        LabelUnten->setObjectName(QString::fromUtf8("LabelUnten"));

        verticalLayout_5->addWidget(LabelUnten);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Labl1 = new QLabel(verticalLayoutWidget);
        Labl1->setObjectName(QString::fromUtf8("Labl1"));

        verticalLayout_4->addWidget(Labl1);

        LAbl2 = new QLabel(verticalLayoutWidget);
        LAbl2->setObjectName(QString::fromUtf8("LAbl2"));

        verticalLayout_4->addWidget(LAbl2);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        EMail = new QLineEdit(verticalLayoutWidget);
        EMail->setObjectName(QString::fromUtf8("EMail"));

        verticalLayout_3->addWidget(EMail);

        Passwort = new QLineEdit(verticalLayoutWidget);
        Passwort->setObjectName(QString::fromUtf8("Passwort"));

        verticalLayout_3->addWidget(Passwort);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Login = new QPushButton(verticalLayoutWidget);
        Login->setObjectName(QString::fromUtf8("Login"));

        horizontalLayout_2->addWidget(Login);


        verticalLayout->addLayout(horizontalLayout_2);

        zurueck = new QPushButton(View_Einloggen);
        zurueck->setObjectName(QString::fromUtf8("zurueck"));
        zurueck->setGeometry(QRect(10, 30, 80, 22));

        retranslateUi(View_Einloggen);

        QMetaObject::connectSlotsByName(View_Einloggen);
    } // setupUi

    void retranslateUi(QWidget *View_Einloggen)
    {
        View_Einloggen->setWindowTitle(QCoreApplication::translate("View_Einloggen", "Form", nullptr));
        LabelOben->setText(QCoreApplication::translate("View_Einloggen", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LabelUnten->setText(QCoreApplication::translate("View_Einloggen", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        Labl1->setText(QCoreApplication::translate("View_Einloggen", "E-Mail", nullptr));
        LAbl2->setText(QCoreApplication::translate("View_Einloggen", "Passwort", nullptr));
        Login->setText(QCoreApplication::translate("View_Einloggen", "Login", nullptr));
        zurueck->setText(QCoreApplication::translate("View_Einloggen", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Einloggen: public Ui_View_Einloggen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_EINLOGGEN_H
