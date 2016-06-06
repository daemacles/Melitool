/********************************************************************************
** Form generated from reading UI file 'melitool.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MELITOOL_H
#define UI_MELITOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MelitoolClass
{
public:
    QAction *actionE_xit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *load_image_button_;
    QPushButton *analyze_button_;
    QSpacerItem *verticalSpacer;
    QGraphicsView *graphics_view_;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MelitoolClass)
    {
        if (MelitoolClass->objectName().isEmpty())
            MelitoolClass->setObjectName(QStringLiteral("MelitoolClass"));
        MelitoolClass->resize(635, 581);
        actionE_xit = new QAction(MelitoolClass);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        centralWidget = new QWidget(MelitoolClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        load_image_button_ = new QPushButton(centralWidget);
        load_image_button_->setObjectName(QStringLiteral("load_image_button_"));

        verticalLayout->addWidget(load_image_button_);

        analyze_button_ = new QPushButton(centralWidget);
        analyze_button_->setObjectName(QStringLiteral("analyze_button_"));

        verticalLayout->addWidget(analyze_button_);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        graphics_view_ = new QGraphicsView(centralWidget);
        graphics_view_->setObjectName(QStringLiteral("graphics_view_"));

        horizontalLayout->addWidget(graphics_view_);

        MelitoolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MelitoolClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 31));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QStringLiteral("menuMain"));
        MelitoolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MelitoolClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MelitoolClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MelitoolClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MelitoolClass->setStatusBar(statusBar);

        menuBar->addAction(menuMain->menuAction());
        menuMain->addAction(actionE_xit);

        retranslateUi(MelitoolClass);
        QObject::connect(actionE_xit, SIGNAL(triggered()), MelitoolClass, SLOT(close()));

        QMetaObject::connectSlotsByName(MelitoolClass);
    } // setupUi

    void retranslateUi(QMainWindow *MelitoolClass)
    {
        MelitoolClass->setWindowTitle(QApplication::translate("MelitoolClass", "Melitool", 0));
        actionE_xit->setText(QApplication::translate("MelitoolClass", "E&xit", 0));
        load_image_button_->setText(QApplication::translate("MelitoolClass", "Load Image", 0));
        analyze_button_->setText(QApplication::translate("MelitoolClass", "Analyze", 0));
        menuMain->setTitle(QApplication::translate("MelitoolClass", "&File", 0));
    } // retranslateUi

};

namespace Ui {
    class MelitoolClass: public Ui_MelitoolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MELITOOL_H
