#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include <ctime>

const int n = 25000;
int rBinary = 0, cBinary = 0, rGnom = 0, cGnom = 0,
rShell = 0, cShell = 0, rPyramid = 0, cPyramid = 0;
using namespace std;

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

void gnomesort(int ar[])
{
    int i = 0;
    while (i < n)
    {
        if (i == 0 || ar[i-1] <= ar[i])
        {
            i++;
            cGnom++;
        }
        else
        {
            int tmp = ar[i];
            ar[i] = ar[i-1];
            ar[--i] = tmp;
            rGnom+=3;
        }
    }
}


// ‘ункци€ "просеивани€" через кучу - формирование кучи
void siftDown(int *a, int k, int l)
{
  int child; // индекс максимального потомка
  int elem = a[k]; // флаг того, что куча сформирована
  while(k <= l/2) {  		// пока у a[k] есть дети
      child = 2*k;
      //  выбираем большего сына
      cPyramid++;
      if( child < l && a[child] < a[child+1] )
          child++;
      if( elem >= a[child] ) break;
      // иначе
      a[k] = a[child]; 	// переносим сына наверх
      k = child;
      rPyramid++;
    }
    a[k] = elem;
}

// ‘ункци€ "просеивани€" через кучу - формирование кучи
void siftDown(string *a, int k, int l)
{
  int child; // индекс максимального потомка
  string elem = a[k]; // флаг того, что куча сформирована
  while(k <= l/2) {  		// пока у a[k] есть дети
      child = 2*k;
      //  выбираем большего сына
      cPyramid++;
      if( child < l && a[child] < a[child+1] )
          child++;
      if( elem >= a[child] ) break;
      // иначе
      a[k] = a[child]; 	// переносим сына наверх
      k = child;
      rPyramid++;
    }
    a[k] = elem;
}
// ‘ункци€ сортировки на куче
void Pyramid(int *numbers)
{
  // ‘ормируем нижний р€д пирамиды
  for (int i = (n / 2) - 1; i >= 0; i--)
    siftDown(numbers, i, n-1);
  // ѕросеиваем через пирамиду остальные элементы
  for (int i = n - 1; i > 0; i--)
  {
    int temp = numbers[0];
    numbers[0] = numbers[i];
    numbers[i] = temp;
    rPyramid+=3;
    siftDown(numbers, 0, i - 1);
  }
}

void Shell(int inNumData[n])
{
    int i,j,k,t;
    for(k = n/2; k > 0; k /=2)
        for(i = k; i < n; i++)
        {
            t = inNumData[i];
            for(j = i; j>=k; j-=k)
            {
                if(t < inNumData[j-k])
                {
                    cShell++;
                    inNumData[j] = inNumData[j-k];
                    rShell++;
                }
                else
                    break;
            }
            inNumData[j] = t;
            rShell++;
        }
}

void BinaryInsert(int inNumData[n])
{
    int x, left, right, average;
    for (int i = 1; i < n; i++)
    {
        if ( inNumData[i-1] > inNumData[i])
        {
            cBinary++;
            x = inNumData[i];      // x Ц включаемый элемент
            left = 0;       // лева€ граница отсортированной части массива
            right = i-1;    // права€ граница отсортированной части массива
            do
            {
                average = (left+right)/2;      // average Ц нова€ "середина" последовательности
                if (inNumData[average] < x )
                {
                    left = average + 1;
                    cBinary++;
                }
                else
                    right=average - 1;
            } while (left<=right);     // поиск ведетс€ до тех пор, пока лева€ граница
            //не окажетс€ правее правой границы
            for (int  j=i-1; j>=left; j--)
            {
                inNumData[j+1] = inNumData[j];
                rBinary++;
            }
            inNumData[left] = x;
            rBinary++;
        }
    }
}

void MainWindow::on_pushLoad_clicked()
{
    QFile file("C://Qt//Saod_Lab//Lab1//input.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Information", "File can not be opened!");
    QTextStream in(&file);
    ui->textInput->setText((in.readAll()));
}

void MainWindow::on_pushSort_clicked()
{
    //проверка: выбран метод двоичных вставок?
    if(ui->radioBinary->isChecked())
        {

            int inNumData[n];
            cBinary = 0; rBinary = 0;
            ifstream fileIn ("C://Qt//Saod_Lab//Lab1//input.txt");
            for (int i = 0; i < n; i++)
            {
                fileIn >> inNumData[i];
            }
            clock_t start = clock();
            BinaryInsert(inNumData);
            clock_t end = clock();
            ofstream fileOut ("C://Qt//Saod_Lab//Lab1//outBinary.txt");
            for (int i = 0; i < n; i++)
            {
                fileOut << inNumData[i] << "\n";
            }
            double binaryInsertTime = double(end - start)/CLOCKS_PER_SEC;
            ui->text1->setText(QString::number(binaryInsertTime, 'f', 3));
            ui->text2->setText(QString::number(rBinary));
            ui->text3->setText(QString::number(cBinary));

            QFile file("C://Qt//Saod_Lab//Lab1//outBinary.txt");
            if (!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0, "Information", "File can not be opened!");
            QTextStream out(&file);
            ui->textOutput->setText((out.readAll()));
        }

    else if(ui->radioGnom->isChecked())
        {
            int inNumData[n];
            cGnom = 0; rGnom = 0;
            ifstream fileIn ("C://Qt//Saod_Lab//Lab1//input.txt");
            for (int i = 0; i < n; i++)
            {
                fileIn >> inNumData[i];
            }
            clock_t start = clock();
            gnomesort(inNumData);
            clock_t end = clock();
            ofstream fileOut ("C://Qt//Saod_Lab//Lab1//outGnom.txt");
            for (int i = 0; i < n; i++)
            {
                fileOut << inNumData[i] << "\n";
            }
            double gnomTime = double(end - start)/CLOCKS_PER_SEC;
            ui->text1->setText(QString::number(gnomTime, 'f', 3));
            ui->text2->setText(QString::number(rGnom));
            ui->text3->setText(QString::number(cGnom));

            QFile file("C://Qt//Saod_Lab//Lab1//outGnom.txt");
            if (!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0, "Information", "File can not be opened!");
            QTextStream out(&file);
            ui->textOutput->setText((out.readAll()));
        }
    else if(ui->radioShell->isChecked())
        {
            int inNumData[n];
            cShell = 0; rShell = 0;
            ifstream fileIn ("C://Qt//Saod_Lab//Lab1//input.txt");
            for (int i = 0; i < n; i++)
            {
                fileIn >> inNumData[i];
            }
            clock_t start = clock();
            Shell(inNumData);
            clock_t end = clock();
            ofstream fileOut ("C://Qt//Saod_Lab//Lab1//outShell.txt");
            for (int i = 0; i < n; i++)
            {
                fileOut << inNumData[i] << "\n";
            }
            double ShellTime = double(end - start)/CLOCKS_PER_SEC;
            ui->text1->setText(QString::number(ShellTime, 'f', 3));
            ui->text2->setText(QString::number(rShell));
            ui->text3->setText(QString::number(cShell));

            QFile file("C://Qt//Saod_Lab//Lab1//outShell.txt");
            if (!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0, "Information", "File can not be opened!");
            QTextStream out(&file);
            ui->textOutput->setText((out.readAll()));
        }
    else if(ui->radioPyramid->isChecked())
        {
            int *inNumData=new int[n];
            cPyramid = 0; rPyramid = 0;
            ifstream fileIn ("C://Qt//Saod_Lab//Lab1//input.txt");
            for (int i = 0; i < n; i++)
            {
                fileIn >> inNumData[i];
            }
            clock_t start = clock();
            Pyramid(inNumData);
            clock_t end = clock();
            ofstream fileOut ("C://Qt//Saod_Lab//Lab1//outPyramid.txt");
            for (int i = 1; i < n; i++)
            {
                fileOut << inNumData[i] << "\n";
            }
            double PyramidTime = double(end - start)/CLOCKS_PER_SEC;
            ui->text1->setText(QString::number(PyramidTime, 'f', 3));
            ui->text2->setText(QString::number(rPyramid));
            ui->text3->setText(QString::number(cPyramid));

            QFile file("C://Qt//Saod_Lab//Lab1//outPyramid.txt");
            if (!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0, "Information", "File can not be opened!");
            QTextStream out(&file);
            ui->textOutput->setText((out.readAll()));
        }
}
