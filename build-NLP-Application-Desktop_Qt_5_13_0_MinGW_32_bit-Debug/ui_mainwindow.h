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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;
    QWidget *widget_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_input;
    QPushButton *pushButton_input_file;
    QWidget *widget_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_output;
    QPushButton *pushButton_output;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(832, 555);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 510, 91, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 510, 111, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 291, 111));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 291, 101));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(false);

        verticalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        verticalLayout_4->addWidget(radioButton_2);

        comboBox = new QComboBox(layoutWidget);
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
        widget_2->setGeometry(QRect(310, 80, 261, 101));
        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 261, 101));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        radioButton_6 = new QRadioButton(layoutWidget1);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setChecked(false);

        verticalLayout_3->addWidget(radioButton_6);

        radioButton_5 = new QRadioButton(layoutWidget1);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setChecked(true);

        verticalLayout_3->addWidget(radioButton_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_input = new QLineEdit(layoutWidget1);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        lineEdit_input->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lineEdit_input);

        pushButton_input_file = new QPushButton(layoutWidget1);
        pushButton_input_file->setObjectName(QString::fromUtf8("pushButton_input_file"));

        horizontalLayout_3->addWidget(pushButton_input_file);


        verticalLayout_3->addLayout(horizontalLayout_3);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(580, 80, 241, 101));
        layoutWidget2 = new QWidget(widget_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 241, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        radioButton_7 = new QRadioButton(layoutWidget2);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setChecked(false);

        verticalLayout_2->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(layoutWidget2);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setChecked(true);

        verticalLayout_2->addWidget(radioButton_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_output = new QLineEdit(layoutWidget2);
        lineEdit_output->setObjectName(QString::fromUtf8("lineEdit_output"));

        horizontalLayout_4->addWidget(lineEdit_output);

        pushButton_output = new QPushButton(layoutWidget2);
        pushButton_output->setObjectName(QString::fromUtf8("pushButton_output"));

        horizontalLayout_4->addWidget(pushButton_output);


        verticalLayout_2->addLayout(horizontalLayout_4);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 510, 151, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 30, 581, 41));
        label_5->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 210, 811, 291));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(horizontalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);

        plainTextEdit_2 = new QPlainTextEdit(horizontalLayoutWidget);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));

        horizontalLayout->addWidget(plainTextEdit_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 190, 811, 16));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(radioButton_5, SIGNAL(toggled(bool)), plainTextEdit, SLOT(setDisabled(bool)));
        QObject::connect(radioButton_6, SIGNAL(toggled(bool)), plainTextEdit, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));
        QObject::connect(radioButton, SIGNAL(toggled(bool)), comboBox, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_2, SIGNAL(toggled(bool)), comboBox, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_6, SIGNAL(toggled(bool)), lineEdit_input, SLOT(setDisabled(bool)));
        QObject::connect(radioButton_7, SIGNAL(toggled(bool)), lineEdit_output, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_input_file, SIGNAL(clicked()), comboBox, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\201\320\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
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
        pushButton_input_file->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200...", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202 \320\262\321\213\320\262\320\276\320\264\320\260:", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \321\215\320\272\321\200\320\260\320\275", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "\320\222 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_output->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200...", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202 \320\262 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\262\320\265\321\202!\n"
"\320\255\321\202\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\262\321\213\320\277\320\276\320\273\320\275\321\217\320\265\321\202 \321\200\320\260\320\267\320\261\320\276\321\200 \321\202\320\265\320\272\321\201\321\202\320\260 \321\201 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265\320\274 \320\270 \321\203\320\272\320\260\320\267\320\260\320\275\320\270\320\265\320\274 \321\207\320\260\321\201\321\202\320\265\320\271 \321\200\320\265\321\207\320\270.", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \321\202\320\265\320\272\321\201\321\202\320\260 \320\262\321\200\321\203\321\207\320\275\321\203\321\216/\320\277\320\276\320\272\320\260\320\267\320\260 \321\202\320\265\320\272\321\201\321\202\320\260 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 \320\262\321\213\320\262\320\276\320\264\320\260 \320\277\321\200\320\276\320\260\320\275\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276 \321\202\320\265\320\272\321\201\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
