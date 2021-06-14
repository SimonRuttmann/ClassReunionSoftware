/********************************************************************************
** Form generated from reading UI file 'View_Teilnehmerliste.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_TEILNEHMERLISTE_H
#define UI_VIEW_TEILNEHMERLISTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_Teilnehmerliste
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *Teilnehmertabelle;

    void setupUi(QWidget *View_Teilnehmerliste)
    {
        if (View_Teilnehmerliste->objectName().isEmpty())
            View_Teilnehmerliste->setObjectName(QString::fromUtf8("View_Teilnehmerliste"));
        View_Teilnehmerliste->resize(1080, 720);
        horizontalLayoutWidget = new QWidget(View_Teilnehmerliste);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 1061, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        toolButton = new QToolButton(horizontalLayoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Test/Resources/Logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setCheckable(false);

        horizontalLayout->addWidget(toolButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        Teilnehmertabelle = new QTableWidget(View_Teilnehmerliste);
        if (Teilnehmertabelle->columnCount() < 7)
            Teilnehmertabelle->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Teilnehmertabelle->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Teilnehmertabelle->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Teilnehmertabelle->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Teilnehmertabelle->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Teilnehmertabelle->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Teilnehmertabelle->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Teilnehmertabelle->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        Teilnehmertabelle->setObjectName(QString::fromUtf8("Teilnehmertabelle"));
        Teilnehmertabelle->setGeometry(QRect(10, 80, 1061, 611));

        retranslateUi(View_Teilnehmerliste);

        QMetaObject::connectSlotsByName(View_Teilnehmerliste);
    } // setupUi

    void retranslateUi(QWidget *View_Teilnehmerliste)
    {
        View_Teilnehmerliste->setWindowTitle(QCoreApplication::translate("View_Teilnehmerliste", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("View_Teilnehmerliste", "Teilnehmer hinzuf\303\274gen", nullptr));
        label->setText(QCoreApplication::translate("View_Teilnehmerliste", "KTDVS", nullptr));
        toolButton->setText(QCoreApplication::translate("View_Teilnehmerliste", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Teilnehmertabelle->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("View_Teilnehmerliste", "Vorname", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Teilnehmertabelle->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("View_Teilnehmerliste", "Nachname", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Teilnehmertabelle->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("View_Teilnehmerliste", "EMail", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Teilnehmertabelle->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("View_Teilnehmerliste", "Telefonnummer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_Teilnehmerliste: public Ui_View_Teilnehmerliste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_TEILNEHMERLISTE_H
