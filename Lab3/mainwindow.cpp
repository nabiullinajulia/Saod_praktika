#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <stdlib.h>
#include "sllist.c"
#include <string.h>
#include <QMessageBox>

FILE *f = NULL;
SLLIST *Head = NULL, *Current = NULL;
int flag1 = 1, flag2 = 0, hp_i = 0;

typedef struct HELP
{
    char term[15];
    char info[100];
}HELP;

HELP hp[50];
int sizeHP = sizeof(HELP);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PrintList()
{
    HELP *hpTemp = NULL;
    ui->txtOutput->clear();
    SLLIST *This;
    for(This = Head; This != NULL; This = This->Next)
    {
        hpTemp =(HELP*)SLGetData(This, 0, 0);
        ui->txtOutput->append(hpTemp->term);
        ui->txtOutput->append(hpTemp->info);
        ui->txtOutput->append("");
    }
}

void MainWindow::PrintInfo()
{
    HELP *hpTemp = NULL;
    ui->txtInfo->clear();

    ui->txtInfo->append("HEAD");
    hpTemp =(HELP*)SLGetData(Head, 0, 0);
    ui->txtInfo->append(hpTemp->term);
    ui->txtInfo->append(hpTemp->info);
    ui->txtInfo->append("");

    ui->txtInfo->append("CURRENT");
    hpTemp =(HELP*)SLGetData(Current, 0, 0);
    ui->txtInfo->append(hpTemp->term);
    ui->txtInfo->append(hpTemp->info);
    ui->txtInfo->append("");
 }

void MainWindow::on_pushLoad_clicked()
{
    char buf[115];
    int i, en, ed;
    f = fopen("C:\\Qt\\Saod_Lab\\Lab3\\input.txt", "r");
    for(hp_i = 0; fgets(buf,115,f); hp_i++)
    {
        for (i = 0; buf[i] != ';'; i++);
        en = i;
        strncpy(hp[hp_i].term, buf, en);
        hp[hp_i].term[en] = '\0';
        ui->txtInput->append(hp[hp_i].term);
        ed = 0;
        for ( i = en+1; buf[i] != '\n'; i++)
            ed += 1;
        strncpy(hp[hp_i].info, buf+en+1, ed);
        hp[hp_i].info[ed] = '\0';
        ui->txtInput->append(hp[hp_i].info);
        ui->txtInput->append("");
     }
     fclose(f);
}

void MainWindow::on_pushSave_clicked()
{
    char buf[115];
    HELP *hpTemp;
    SLLIST *This;
    f = fopen("C:\\Qt\\Saod_Lab\\Lab3\\output.txt", "w");
    for(This = Head; This != NULL; This = This->Next)
    {
        buf[0] = 0;
        hpTemp =(HELP*)SLGetData(This, 0, 0);
        strcat(buf, hpTemp->term);
        strcat(buf, ";");
        strcat(buf, hpTemp->info);
        strcat(buf, "\n");
        fputs(buf, f);
    }
    fclose(f);
    QMessageBox::information(this,"Information","Successful! Data is saved in file!");
}

void MainWindow::on_pushAdd2_clicked()
{
    if (flag1 == 1 )
    {
        SLAdd(&Head, 0, hp+flag2, sizeHP);
        flag1 = 0; flag2 += 1;
        Current = Head;
    }
    else
    {
        SLAdd(&Current, 0, hp+flag2, sizeHP);
        flag2 += 1;
        Current = Current->Next;
    }
    if (hp+flag2 != NULL)
    {
        PrintList();
        PrintInfo();
    }
    else
        QMessageBox::information(0, "Information", "Spisok is over!");
}

void MainWindow::on_pushAdd1_clicked()
{
    SLFront(&Head,0, hp+flag2, sizeHP);
    PrintList();
    PrintInfo();
    flag2 += 1;
}

void MainWindow::on_pushDelete_clicked()
{
    SLDestroy(&Head);
    ui->txtOutput->clear();
    ui->txtInfo->clear();
    QMessageBox::information(this,"Information","Successful!");
}

void MainWindow::on_pushSearch_clicked()
{
    HELP *hpTemp, *hpTemp1 = NULL;
    ui->txtInfo->clear();
    SLLIST *This;
    QString str = ui->textEdit->toPlainText();
    QString str1;
    for(This = Head; This != NULL; This = This->Next)
    {
        hpTemp =(HELP*)SLGetData(This, 0, 0);
        str1 = (hpTemp->term);
        if (str == str1)
        {
            hpTemp1 =(HELP*)SLGetData(This, 0, 0);
        }
    }
    ui->txtInfo->append(hpTemp1->info);
    QMessageBox::information(this,"Information","Successful!");
}
