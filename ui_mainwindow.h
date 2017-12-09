/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    RenderArea *renderArea;
    QPushButton *btnBackgroundColor;
    QPushButton *btnLineColor;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnHuygens;
    QPushButton *btnHypo;
    QPushButton *btnFutureCurve;
    QPushButton *btnLine;
    QPushButton *btnAstroid;
    QPushButton *btnCycloid;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinCount;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinInterval;
    QComboBox *cboCurveSelect;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(567, 412);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        renderArea->setGeometry(QRect(10, 10, 361, 331));
        btnBackgroundColor = new QPushButton(centralWidget);
        btnBackgroundColor->setObjectName(QStringLiteral("btnBackgroundColor"));
        btnBackgroundColor->setGeometry(QRect(30, 350, 113, 32));
        btnLineColor = new QPushButton(centralWidget);
        btnLineColor->setObjectName(QStringLiteral("btnLineColor"));
        btnLineColor->setGeometry(QRect(150, 350, 113, 32));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 30, 187, 307));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnHuygens = new QPushButton(layoutWidget);
        btnHuygens->setObjectName(QStringLiteral("btnHuygens"));

        verticalLayout->addWidget(btnHuygens);

        btnHypo = new QPushButton(layoutWidget);
        btnHypo->setObjectName(QStringLiteral("btnHypo"));

        verticalLayout->addWidget(btnHypo);

        btnFutureCurve = new QPushButton(layoutWidget);
        btnFutureCurve->setObjectName(QStringLiteral("btnFutureCurve"));

        verticalLayout->addWidget(btnFutureCurve);

        btnLine = new QPushButton(layoutWidget);
        btnLine->setObjectName(QStringLiteral("btnLine"));

        verticalLayout->addWidget(btnLine);

        btnAstroid = new QPushButton(layoutWidget);
        btnAstroid->setObjectName(QStringLiteral("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnCycloid = new QPushButton(layoutWidget);
        btnCycloid->setObjectName(QStringLiteral("btnCycloid"));

        verticalLayout->addWidget(btnCycloid);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinCount = new QSpinBox(layoutWidget);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMaximumSize(QSize(60, 16777215));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(1);

        horizontalLayout_3->addWidget(spinCount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinScale = new QDoubleSpinBox(layoutWidget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        spinScale->setMaximumSize(QSize(60, 16777215));
        spinScale->setDecimals(1);
        spinScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinScale);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinInterval = new QDoubleSpinBox(layoutWidget);
        spinInterval->setObjectName(QStringLiteral("spinInterval"));
        spinInterval->setMaximumSize(QSize(60, 16777215));
        spinInterval->setMaximum(100);
        spinInterval->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinInterval);


        verticalLayout->addLayout(horizontalLayout_2);

        cboCurveSelect = new QComboBox(centralWidget);
        cboCurveSelect->setObjectName(QStringLiteral("cboCurveSelect"));
        cboCurveSelect->setGeometry(QRect(270, 350, 171, 31));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnBackgroundColor->setText(QApplication::translate("MainWindow", "Background", 0));
        btnLineColor->setText(QApplication::translate("MainWindow", "Line Color", 0));
        btnHuygens->setText(QApplication::translate("MainWindow", "Huygens", 0));
        btnHypo->setText(QApplication::translate("MainWindow", "Hypo Cycloid", 0));
        btnFutureCurve->setText(QApplication::translate("MainWindow", "FutureCurve", 0));
        btnLine->setText(QApplication::translate("MainWindow", "Line", 0));
        btnAstroid->setText(QApplication::translate("MainWindow", "Astroid", 0));
        btnCycloid->setText(QApplication::translate("MainWindow", "Cycloid", 0));
        label_3->setText(QApplication::translate("MainWindow", "Step Count", 0));
        label->setText(QApplication::translate("MainWindow", "Scale", 0));
        label_2->setText(QApplication::translate("MainWindow", "Interval Length", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
