/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 25. Mar 17:41:38 2018
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
    QTextBrowser *textInput;
    QLabel *label;
    QTextBrowser *textOutput;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioGnom;
    QRadioButton *radioPyramid;
    QRadioButton *radioShell;
    QRadioButton *radioBinary;
    QLabel *label_4;
    QTextBrowser *text1;
    QLabel *label_5;
    QTextBrowser *text2;
    QTextBrowser *text3;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushLoad;
    QPushButton *pushSort;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(578, 469);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textInput = new QTextBrowser(centralWidget);
        textInput->setObjectName(QString::fromUtf8("textInput"));
        textInput->setGeometry(QRect(20, 30, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 131, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        textOutput = new QTextBrowser(centralWidget);
        textOutput->setObjectName(QString::fromUtf8("textOutput"));
        textOutput->setGeometry(QRect(300, 30, 256, 192));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 10, 201, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 270, 131, 16));
        label_3->setFont(font);
        radioGnom = new QRadioButton(centralWidget);
        radioGnom->setObjectName(QString::fromUtf8("radioGnom"));
        radioGnom->setGeometry(QRect(20, 300, 82, 18));
        radioGnom->setChecked(true);
        radioPyramid = new QRadioButton(centralWidget);
        radioPyramid->setObjectName(QString::fromUtf8("radioPyramid"));
        radioPyramid->setGeometry(QRect(20, 330, 101, 18));
        radioShell = new QRadioButton(centralWidget);
        radioShell->setObjectName(QString::fromUtf8("radioShell"));
        radioShell->setGeometry(QRect(20, 360, 82, 18));
        radioBinary = new QRadioButton(centralWidget);
        radioBinary->setObjectName(QString::fromUtf8("radioBinary"));
        radioBinary->setGeometry(QRect(20, 390, 121, 18));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 250, 111, 16));
        label_4->setFont(font);
        text1 = new QTextBrowser(centralWidget);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(460, 290, 71, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 300, 51, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        text2 = new QTextBrowser(centralWidget);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(460, 330, 71, 31));
        text3 = new QTextBrowser(centralWidget);
        text3->setObjectName(QString::fromUtf8("text3"));
        text3->setGeometry(QRect(460, 370, 71, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 340, 121, 20));
        label_6->setFont(font1);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 380, 121, 20));
        label_7->setFont(font1);
        pushLoad = new QPushButton(centralWidget);
        pushLoad->setObjectName(QString::fromUtf8("pushLoad"));
        pushLoad->setGeometry(QRect(20, 230, 75, 23));
        pushSort = new QPushButton(centralWidget);
        pushSort->setObjectName(QString::fromUtf8("pushSort"));
        pushSort->setGeometry(QRect(200, 230, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 578, 20));
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
        label_2->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", 0, QApplication::UnicodeUTF8));
        radioGnom->setText(QApplication::translate("MainWindow", "\320\223\320\275\320\276\320\274\321\214\321\217", 0, QApplication::UnicodeUTF8));
        radioPyramid->setText(QApplication::translate("MainWindow", "\320\237\320\270\321\200\320\260\320\274\320\270\320\264\320\260\320\273\321\214\320\275\320\260\321\217", 0, QApplication::UnicodeUTF8));
        radioShell->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\270\321\217\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        radioBinary->setText(QApplication::translate("MainWindow", "\320\224\320\262\320\276\320\270\321\207\320\275\321\213\320\265 \320\262\321\201\321\202\320\260\320\262\320\272\320\270", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\265\321\200\320\265\321\201\321\202\320\260\320\275\320\276\320\262\320\276\320\272", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        pushLoad->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushSort->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
