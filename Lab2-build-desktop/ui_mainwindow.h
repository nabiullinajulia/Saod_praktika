/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 25. Mar 13:46:58 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *txtInput;
    QLabel *label;
    QTextBrowser *txtOutput;
    QLabel *label_2;
    QRadioButton *radioS;
    QRadioButton *radioE;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *txtNS;
    QTextBrowser *txtNE;
    QLabel *label_5;
    QLabel *label_6;
    QTextBrowser *txtTS;
    QTextBrowser *txtTE;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushLoad;
    QPushButton *pushSort;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(603, 479);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        txtInput = new QTextBrowser(centralWidget);
        txtInput->setObjectName(QString::fromUtf8("txtInput"));
        txtInput->setGeometry(QRect(20, 40, 256, 211));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 121, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        txtOutput = new QTextBrowser(centralWidget);
        txtOutput->setObjectName(QString::fromUtf8("txtOutput"));
        txtOutput->setGeometry(QRect(290, 40, 256, 211));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 10, 131, 16));
        label_2->setFont(font);
        radioS = new QRadioButton(centralWidget);
        radioS->setObjectName(QString::fromUtf8("radioS"));
        radioS->setGeometry(QRect(20, 340, 111, 18));
        radioS->setChecked(true);
        radioE = new QRadioButton(centralWidget);
        radioE->setObjectName(QString::fromUtf8("radioE"));
        radioE->setGeometry(QRect(20, 370, 131, 18));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 310, 191, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 270, 191, 16));
        label_4->setFont(font);
        txtNS = new QTextBrowser(centralWidget);
        txtNS->setObjectName(QString::fromUtf8("txtNS"));
        txtNS->setGeometry(QRect(430, 320, 61, 31));
        txtNE = new QTextBrowser(centralWidget);
        txtNE->setObjectName(QString::fromUtf8("txtNE"));
        txtNE->setGeometry(QRect(430, 360, 61, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 330, 101, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 370, 131, 16));
        label_6->setFont(font1);
        txtTS = new QTextBrowser(centralWidget);
        txtTS->setObjectName(QString::fromUtf8("txtTS"));
        txtTS->setGeometry(QRect(510, 320, 61, 31));
        txtTE = new QTextBrowser(centralWidget);
        txtTE->setObjectName(QString::fromUtf8("txtTE"));
        txtTE->setGeometry(QRect(510, 360, 61, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 300, 81, 16));
        label_7->setFont(font1);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(520, 300, 51, 16));
        label_8->setFont(font1);
        pushLoad = new QPushButton(centralWidget);
        pushLoad->setObjectName(QString::fromUtf8("pushLoad"));
        pushLoad->setGeometry(QRect(20, 260, 75, 23));
        pushSort = new QPushButton(centralWidget);
        pushSort->setObjectName(QString::fromUtf8("pushSort"));
        pushSort->setGeometry(QRect(200, 260, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        radioS->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\276\320\265 \321\201\320\273\320\270\321\217\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        radioE->setText(QApplication::translate("MainWindow", "\320\225\321\201\321\202\320\265\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \321\201\320\273\320\270\321\217\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\270\320\264 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\276\320\265 \321\201\320\273\320\270\321\217\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\320\225\321\201\321\202\320\265\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \321\201\320\273\320\270\321\217\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\215\320\273-\320\276\320\262:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217:", 0, QApplication::UnicodeUTF8));
        pushLoad->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushSort->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
