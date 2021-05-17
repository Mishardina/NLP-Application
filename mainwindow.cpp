#include <Python.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <string>
#include <QStringList>
#include <QCheckBox>
#include <QDebug>

QStringList posCodes;
QStringList posNames;

void parseAnalysedText(QFile bufferAnalysedTextFile);
void parsePartsOfSpeechFile(QFile &posFile, QStringList &posCodes, QStringList &posNames);
void fillCsvFileWithNeededPOS(QWidget* widget);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    const QString posFileName = "pack_ru/parts_of_speech.csv";
    QFile posFile(posFileName);
    parsePartsOfSpeechFile(posFile, posCodes, posNames);
    ui->setupUi(this);

    for (int i = 0; i < posNames.size(); i++)
    {
        QCheckBox* thisLine = new QCheckBox;
        thisLine->setChecked(true);
        thisLine->setText(posNames.at(i));
        ui->verticalLayout_4->addWidget(thisLine);
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startAnalysisButton_pressed(){
    fillCsvFileWithNeededPOS(ui->widget);

    const QString bufferFileName = "pack_ru/buffer_text.txt";
    QFile bufferTextFile(bufferFileName);
    FILE* textAnalyzer;
    const char textAnalyzerName[] = "pack_ru/analysis_script.py";

    bufferTextFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    QString text = ui->textEdit->toPlainText();
    QTextStream outTextStream(&bufferTextFile);
    outTextStream.setCodec("UTF-8");
    outTextStream << text;
    bufferTextFile.close();

    //Загрузка интерпретатора Python
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

void parseAnalysedText() {

}

void parsePartsOfSpeechFile(QFile &posFile, QStringList &posCodes, QStringList &posNames) {
    QString bufString;
    QTextStream in(&posFile);

    posFile.open(QIODevice::ReadOnly);


    in.setCodec("UTF-8"); // change the file codec to UTF-8.

    bufString = in.readLine();
    posCodes = bufString.split(';');

    bufString = in.readLine();
    posNames = bufString.split(';');

    posFile.close();
}

void fillCsvFileWithNeededPOS(QWidget* widget) {
    //qDebug() << container->itemAt(0);
    const QString neededPOSFileName = "pack_ru/needed_pos.csv";
    QFile neededPOSFile(neededPOSFileName);
    QList<QCheckBox*> checkboxes = widget->findChildren<QCheckBox*> ();
    QStringList neededPOS;
    QCheckBox *ch;
    int j = 0;
    foreach(ch, checkboxes)
    {
        if (ch->isChecked() == true) {
            neededPOS.append(posCodes.at(j));
        }
        j++;
        //qDebug() << ch->isChecked();
    }

    neededPOSFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    QTextStream outTextStream(&neededPOSFile);
    outTextStream.setCodec("UTF-8");
    for (int i = 0; i < neededPOS.count(); i++) {
        if (i != neededPOS.count() - 1) {
            outTextStream << neededPOS.at(i) << ';';
        }
        else outTextStream << neededPOS.at(i);

    }
    neededPOSFile.close();
}
