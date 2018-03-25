/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 25. Mar 15:37:45 2018
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
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
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
    QTextBrowser *txtInfo;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushLoad;
    QPushButton *pushSave;
    QPushButton *pushAdd1;
    QPushButton *pushAdd2;
    QPushButton *pushDelete;
    QTextEdit *textEdit;
    QPushButton *pushSearch;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 468);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        txtInput = new QTextBrowser(centralWidget);
        txtInput->setObjectName(QString::fromUtf8("txtInput"));
        txtInput->setGeometry(QRect(20, 40, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 151, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        txtOutput = new QTextBrowser(centralWidget);
        txtOutput->setObjectName(QString::fromUtf8("txtOutput"));
        txtOutput->setGeometry(QRect(290, 40, 256, 192));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 10, 151, 16));
        label_2->setFont(font);
        txtInfo = new QTextBrowser(centralWidget);
        txtInfo->setObjectName(QString::fromUtf8("txtInfo"));
        txtInfo->setGeometry(QRect(20, 290, 251, 101));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 260, 171, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 260, 81, 20));
        label_4->setFont(font);
        pushLoad = new QPushButton(centralWidget);
        pushLoad->setObjectName(QString::fromUtf8("pushLoad"));
        pushLoad->setGeometry(QRect(300, 290, 111, 23));
        pushSave = new QPushButton(centralWidget);
        pushSave->setObjectName(QString::fromUtf8("pushSave"));
        pushSave->setGeometry(QRect(430, 290, 111, 23));
        pushAdd1 = new QPushButton(centralWidget);
        pushAdd1->setObjectName(QString::fromUtf8("pushAdd1"));
        pushAdd1->setGeometry(QRect(300, 320, 111, 23));
        pushAdd2 = new QPushButton(centralWidget);
        pushAdd2->setObjectName(QString::fromUtf8("pushAdd2"));
        pushAdd2->setGeometry(QRect(430, 320, 111, 23));
        pushDelete = new QPushButton(centralWidget);
        pushDelete->setObjectName(QString::fromUtf8("pushDelete"));
        pushDelete->setGeometry(QRect(430, 380, 111, 23));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(300, 350, 101, 31));
        pushSearch = new QPushButton(centralWidget);
        pushSearch->setObjectName(QString::fromUtf8("pushSearch"));
        pushSearch->setGeometry(QRect(430, 350, 111, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 607, 20));
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
        label->setText(QApplication::translate("MainWindow", "\320\222\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\265 \320\276\320\272\320\275\320\276", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", 0, QApplication::UnicodeUTF8));
        pushLoad->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushAdd1->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\275\320\260\321\207\320\260\320\273\320\276", 0, QApplication::UnicodeUTF8));
        pushAdd2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\320\275\320\265\321\206", 0, QApplication::UnicodeUTF8));
        pushDelete->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        pushSearch->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\202\320\265\321\200\320\274\320\270\320\275", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
