#include <Python.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <string>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startAnalysisButton_pressed(){
    const std::string bufferFileName = "pack_ru/buffer_text.txt";
    std::ofstream bufferTextFile;
    FILE* textAnalyzer;
    const char textAnalyzerName[] = "pack_ru/analysis_script.py";

    bufferTextFile.open(bufferFileName, std::fstream::trunc);
    /*
    if (!bufferTextFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "FAILED TO CREATE FILE / FILE DOES NOT EXIST";
    }*/
    QString text = ui->textEdit->toPlainText();
    //ui->plainTextEdit_2->setPlainText(text);
    bufferTextFile << text.toStdString();
    //bufferTextFile.write(text.toStdString(), text.toStdString().size());
    //QTextStream stream(&bufferTextFile);
    //stream << text << '\n';
    bufferTextFile.close();

    Py_Initialize();

    //Выполнение скрипта
    textAnalyzer = _Py_fopen(textAnalyzerName, "r");
    PyRun_SimpleFile(textAnalyzer, textAnalyzerName);

    //Выгрузка интерпретатора Python
    Py_Finalize();
}

void MainWindow::on_pushButton_input_file_clicked()
{
    QString path = QFileDialog::getOpenFileName(0,QObject::tr("Укажите файл c входным текстом"),QDir::homePath(), QObject::tr("Текстовый файл (*.txt);;Все файлы (*.*)"));
    if (!path.isEmpty()) {
        this->ui->lineEdit_input->setText(path);
        QFile inpfile(path);

        if ((inpfile.exists())&&(inpfile.open(QIODevice::ReadOnly)))
        {
            QString str="";
            while(!inpfile.atEnd())
            {
                str=str + inpfile.readLine();
            }
            ui->textEdit->setText(str);
            inpfile.close();
        }

    }
}

void MainWindow::on_pushButton_output_clicked()
{
    QString path = QFileDialog::getOpenFileName(0,QObject::tr("Укажите файл для вывода результата"),QDir::homePath(), QObject::tr("Текстовый файл (*.txt);;Все файлы (*.*)"));
    if (!path.isEmpty()) {
        this->ui->lineEdit_output->setText(path);
    }

}


