/********************************************************************************
** Form generated from reading UI file 'view_teilnehmerliste.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_TEILNEHMERLISTE_H
#define UI_VIEW_TEILNEHMERLISTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view_teilnehmerliste
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
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *liste;

    void setupUi(QWidget *view_teilnehmerliste)
    {
        if (view_teilnehmerliste->objectName().isEmpty())
            view_teilnehmerliste->setObjectName(QString::fromUtf8("view_teilnehmerliste"));
        view_teilnehmerliste->resize(1080, 720);
        horizontalLayoutWidget = new QWidget(view_teilnehmerliste);
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

        verticalLayoutWidget_2 = new QWidget(view_teilnehmerliste);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 80, 1061, 631));
        liste = new QVBoxLayout(verticalLayoutWidget_2);
        liste->setObjectName(QString::fromUtf8("liste"));
        liste->setContentsMargins(0, 0, 0, 0);

        retranslateUi(view_teilnehmerliste);

        QMetaObject::connectSlotsByName(view_teilnehmerliste);
    } // setupUi

    void retranslateUi(QWidget *view_teilnehmerliste)
    {
        view_teilnehmerliste->setWindowTitle(QCoreApplication::translate("view_teilnehmerliste", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("view_teilnehmerliste", "Teilnehmer hinzuf\303\274gen", nullptr));
        label->setText(QCoreApplication::translate("view_teilnehmerliste", "KTDVS", nullptr));
        toolButton->setText(QCoreApplication::translate("view_teilnehmerliste", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_teilnehmerliste: public Ui_view_teilnehmerliste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_TEILNEHMERLISTE_H
