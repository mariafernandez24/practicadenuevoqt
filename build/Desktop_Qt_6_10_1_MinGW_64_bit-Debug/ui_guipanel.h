/********************************************************************************
** Form generated from reading UI file 'guipanel.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPANEL_H
#define UI_GUIPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "analogwidgets/led.h"

QT_BEGIN_NAMESPACE

class Ui_GUIPanel
{
public:
    QLabel *statusLabel;
    QPushButton *statusButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QLCDNumber *lcdNumber;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QSplitter *splitter;
    QLabel *serialPortLabel;
    QComboBox *serialPortComboBox;
    QPushButton *runButton;
    QPushButton *pingButton;
    Led *led;

    void setupUi(QWidget *GUIPanel)
    {
        if (GUIPanel->objectName().isEmpty())
            GUIPanel->setObjectName("GUIPanel");
        GUIPanel->resize(1103, 738);
        statusLabel = new QLabel(GUIPanel);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(80, 690, 281, 20));
        statusButton = new QPushButton(GUIPanel);
        statusButton->setObjectName("statusButton");
        statusButton->setGeometry(QRect(10, 690, 51, 21));
        tabWidget = new QTabWidget(GUIPanel);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-50, -20, 1061, 621));
        tabWidget->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        lcdNumber = new QLCDNumber(tab_2);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(70, 220, 64, 23));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 250, 104, 21));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 0, 471, 80));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(20, 30, 221, 19));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        serialPortLabel = new QLabel(splitter);
        serialPortLabel->setObjectName("serialPortLabel");
        splitter->addWidget(serialPortLabel);
        serialPortComboBox = new QComboBox(splitter);
        serialPortComboBox->setObjectName("serialPortComboBox");
        splitter->addWidget(serialPortComboBox);
        runButton = new QPushButton(groupBox);
        runButton->setObjectName("runButton");
        runButton->setGeometry(QRect(270, 30, 98, 27));
        pingButton = new QPushButton(groupBox);
        pingButton->setObjectName("pingButton");
        pingButton->setGeometry(QRect(390, 30, 61, 27));
        led = new Led(tab_2);
        led->setObjectName("led");
        led->setGeometry(QRect(70, 110, 16, 16));
        tabWidget->addTab(tab_2, QString());
        QWidget::setTabOrder(serialPortComboBox, pingButton);
        QWidget::setTabOrder(pingButton, runButton);

        retranslateUi(GUIPanel);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GUIPanel);
    } // setupUi

    void retranslateUi(QWidget *GUIPanel)
    {
        GUIPanel->setWindowTitle(QCoreApplication::translate("GUIPanel", "GUIPanel", nullptr));
        statusLabel->setText(QCoreApplication::translate("GUIPanel", "Detenido", nullptr));
        statusButton->setText(QCoreApplication::translate("GUIPanel", "Estado:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("GUIPanel", "Tab 1", nullptr));
        textEdit->setHtml(QCoreApplication::translate("GUIPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">totalProductos</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GUIPanel", "Conexi\303\263n USB", nullptr));
        serialPortLabel->setText(QCoreApplication::translate("GUIPanel", "Puerto Serie:", nullptr));
        runButton->setText(QCoreApplication::translate("GUIPanel", "Conectar", nullptr));
        pingButton->setText(QCoreApplication::translate("GUIPanel", "Ping", nullptr));
#if QT_CONFIG(tooltip)
        led->setToolTip(QCoreApplication::translate("GUIPanel", "Color Led component", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        led->setWhatsThis(QCoreApplication::translate("GUIPanel", "Led indicator", nullptr));
#endif // QT_CONFIG(whatsthis)
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("GUIPanel", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIPanel: public Ui_GUIPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPANEL_H
