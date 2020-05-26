/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *Tabela;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *qnt_programas;
    QLabel *label_3;
    QPushButton *Simular;
    QPushButton *Passo_a_Passo;
    QLabel *label_4;
    QLabel *label_5;
    QCheckBox *Giga_1;
    QCheckBox *Gigas_2;
    QCheckBox *Gigas_3;
    QCheckBox *Gigas_4;
    QCheckBox *Primeiro_encaixe;
    QCheckBox *Pior_encaixe;
    QCheckBox *Melhor_encaixe;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Tabela = new QTableView(centralwidget);
        Tabela->setObjectName(QString::fromUtf8("Tabela"));
        Tabela->setGeometry(QRect(580, 10, 211, 551));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 161, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 270, 161, 31));
        qnt_programas = new QTextEdit(centralwidget);
        qnt_programas->setObjectName(QString::fromUtf8("qnt_programas"));
        qnt_programas->setGeometry(QRect(10, 300, 161, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 180, 161, 31));
        Simular = new QPushButton(centralwidget);
        Simular->setObjectName(QString::fromUtf8("Simular"));
        Simular->setGeometry(QRect(200, 100, 141, 51));
        Passo_a_Passo = new QPushButton(centralwidget);
        Passo_a_Passo->setObjectName(QString::fromUtf8("Passo_a_Passo"));
        Passo_a_Passo->setGeometry(QRect(10, 340, 141, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 0, 411, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 30, 301, 31));
        Giga_1 = new QCheckBox(centralwidget);
        Giga_1->setObjectName(QString::fromUtf8("Giga_1"));
        Giga_1->setGeometry(QRect(10, 120, 70, 17));
        Gigas_2 = new QCheckBox(centralwidget);
        Gigas_2->setObjectName(QString::fromUtf8("Gigas_2"));
        Gigas_2->setGeometry(QRect(90, 120, 70, 17));
        Gigas_3 = new QCheckBox(centralwidget);
        Gigas_3->setObjectName(QString::fromUtf8("Gigas_3"));
        Gigas_3->setGeometry(QRect(10, 150, 70, 17));
        Gigas_4 = new QCheckBox(centralwidget);
        Gigas_4->setObjectName(QString::fromUtf8("Gigas_4"));
        Gigas_4->setGeometry(QRect(90, 150, 70, 17));
        Primeiro_encaixe = new QCheckBox(centralwidget);
        Primeiro_encaixe->setObjectName(QString::fromUtf8("Primeiro_encaixe"));
        Primeiro_encaixe->setGeometry(QRect(10, 210, 101, 17));
        Pior_encaixe = new QCheckBox(centralwidget);
        Pior_encaixe->setObjectName(QString::fromUtf8("Pior_encaixe"));
        Pior_encaixe->setGeometry(QRect(10, 230, 81, 17));
        Melhor_encaixe = new QCheckBox(centralwidget);
        Melhor_encaixe->setObjectName(QString::fromUtf8("Melhor_encaixe"));
        Melhor_encaixe->setGeometry(QRect(10, 250, 101, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TAMANHO DA MEM\303\223RIA", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "QUANTIDADE DE PROGRAMAS", nullptr));
        qnt_programas->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "METODO", nullptr));
        Simular->setText(QCoreApplication::translate("MainWindow", "Simular", nullptr));
        Passo_a_Passo->setText(QCoreApplication::translate("MainWindow", "PASSO A PASSO", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SELECIONE AS OP\303\207\303\225ES, CLICK NO BOT\303\203O SIMULAR PARA INICIAR.", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "AO INICIAR CLICK NO BOT\303\203O PASSO A PASSO", nullptr));
        Giga_1->setText(QCoreApplication::translate("MainWindow", "1 GIGA", nullptr));
        Gigas_2->setText(QCoreApplication::translate("MainWindow", "2 GIGAS", nullptr));
        Gigas_3->setText(QCoreApplication::translate("MainWindow", "3 GIGAS", nullptr));
        Gigas_4->setText(QCoreApplication::translate("MainWindow", "4 GIGAS", nullptr));
        Primeiro_encaixe->setText(QCoreApplication::translate("MainWindow", "Primeiro encaixe", nullptr));
        Pior_encaixe->setText(QCoreApplication::translate("MainWindow", "Pior encaixe", nullptr));
        Melhor_encaixe->setText(QCoreApplication::translate("MainWindow", "Melhor encaixe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
