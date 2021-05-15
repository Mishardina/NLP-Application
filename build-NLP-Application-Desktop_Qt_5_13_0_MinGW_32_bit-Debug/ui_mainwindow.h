/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label;
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;
    QWidget *widget_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QLineEdit *lineEdit;
    QWidget *widget_3;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QLineEdit *lineEdit_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(832, 552);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 510, 91, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 510, 111, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 190, 341, 16));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 351, 111));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 0, 341, 101));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        radioButton = new QRadioButton(widget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_4->addWidget(radioButton_2);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_4->addWidget(comboBox);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(360, 80, 221, 101));
        widget2 = new QWidget(widget_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 0, 221, 101));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        radioButton_6 = new QRadioButton(widget2);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout_3->addWidget(radioButton_6);

        radioButton_5 = new QRadioButton(widget2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_3->addWidget(radioButton_5);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(590, 80, 231, 101));
        widget3 = new QWidget(widget_3);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(0, 0, 231, 101));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        radioButton_7 = new QRadioButton(widget3);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout_2->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(widget3);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout_2->addWidget(radioButton_8);

        lineEdit_2 = new QLineEdit(widget3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 210, 811, 291));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 510, 151, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 0, 581, 41));
        label_5->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(radioButton_5, SIGNAL(clicked(bool)), plainTextEdit, SLOT(setDisabled(bool)));
        QObject::connect(radioButton_6, SIGNAL(clicked(bool)), plainTextEdit, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\201\320\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\321\200\320\260\320\275 \320\264\320\273\321\217 \321\200\320\260\320\261\320\276\321\202\321\213 \321\201 \321\202\320\265\320\272\321\201\321\202\320\276\320\274 \320\270 \320\262\320\270\320\267\321\203\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\265\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\260 \320\260\320\275\320\260\320\273\320\270\320\267\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\200\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\275\321\213\320\271 \320\260\320\275\320\260\320\273\320\270\320\267 \321\202\320\265\320\272\321\201\321\202\320\260", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\277\320\276 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \321\207\320\260\321\201\321\202\320\270 \321\200\320\265\321\207\320\270", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\321\203\321\211\320\265\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\263\320\276\320\273", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\273\320\260\320\263\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\207\320\260\321\201\321\202\320\270\320\265", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\224\320\265\320\265\320\277\321\200\320\270\321\207\320\260\321\201\321\202\320\270\320\265", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\320\265\321\207\320\270\320\265", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\262\320\260, \320\275\320\265 \320\276\321\202\320\275\320\276\321\201\321\217\321\211\320\270\321\205\321\201\321\217\n"
"\320\272 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274 \320\262\321\213\321\210\320\265 \321\207\320\260\321\201\321\202\321\217\320\274 \321\200\320\265\321\207\320\270", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202 \320\262\320\262\320\276\320\264\320\260:", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "\320\241 \321\215\320\272\321\200\320\260\320\275\320\260", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202 \320\262\321\213\320\262\320\276\320\264\320\260:", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \321\215\320\272\321\200\320\260\320\275", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "\320\222 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202 \320\262 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\262\320\265\321\202!\n"
"\320\255\321\202\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\262\321\213\320\277\320\276\320\273\320\275\321\217\320\265\321\202 \321\200\320\260\320\267\320\261\320\276\321\200 \321\202\320\265\320\272\321\201\321\202\320\260 \321\201 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265\320\274 \320\270 \321\203\320\272\320\260\320\267\320\260\320\275\320\270\320\265\320\274 \321\207\320\260\321\201\321\202\320\265\320\271 \321\200\320\265\321\207\320\270.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
