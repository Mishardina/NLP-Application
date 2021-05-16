#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_input_file_clicked();

    void on_pushButton_output_clicked();

    void upload_text_to_textfield(QString path);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
