#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>

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
            ui->plainTextEdit->setPlainText(str);
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

void MainWindow::upload_text_to_textfield(QString path) {

}

