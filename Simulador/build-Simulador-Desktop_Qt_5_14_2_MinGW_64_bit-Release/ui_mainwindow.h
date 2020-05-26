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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
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
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QPushButton *Manual;
    QLineEdit *setTAM_prog;
    QLineEdit *setTEMPO_prog;
    QLabel *label_TAM_prog;
    QLabel *label_TEMPO;
    QPushButton *Proximo;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 605);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 161, 41));
        label->setAutoFillBackground(true);
        label->setMargin(4);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 270, 161, 31));
        label_2->setAutoFillBackground(true);
        label_2->setMargin(4);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 161, 51));
        label_3->setAutoFillBackground(true);
        label_3->setMargin(4);
        Simular = new QPushButton(centralwidget);
        Simular->setObjectName(QString::fromUtf8("Simular"));
        Simular->setGeometry(QRect(200, 100, 141, 51));
        Passo_a_Passo = new QPushButton(centralwidget);
        Passo_a_Passo->setObjectName(QString::fromUtf8("Passo_a_Passo"));
        Passo_a_Passo->setGeometry(QRect(200, 160, 141, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 0, 431, 31));
        label_4->setAutoFillBackground(true);
        label_4->setMargin(4);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 431, 31));
        label_5->setAutoFillBackground(true);
        label_5->setMargin(4);
        Giga_1 = new QCheckBox(centralwidget);
        Giga_1->setObjectName(QString::fromUtf8("Giga_1"));
        Giga_1->setGeometry(QRect(10, 120, 81, 31));
        Giga_1->setAutoFillBackground(true);
        Gigas_2 = new QCheckBox(centralwidget);
        Gigas_2->setObjectName(QString::fromUtf8("Gigas_2"));
        Gigas_2->setGeometry(QRect(90, 120, 81, 31));
        Gigas_2->setAutoFillBackground(true);
        Gigas_3 = new QCheckBox(centralwidget);
        Gigas_3->setObjectName(QString::fromUtf8("Gigas_3"));
        Gigas_3->setGeometry(QRect(10, 150, 81, 17));
        Gigas_3->setAutoFillBackground(true);
        Gigas_4 = new QCheckBox(centralwidget);
        Gigas_4->setObjectName(QString::fromUtf8("Gigas_4"));
        Gigas_4->setGeometry(QRect(90, 150, 81, 17));
        Gigas_4->setAutoFillBackground(true);
        Primeiro_encaixe = new QCheckBox(centralwidget);
        Primeiro_encaixe->setObjectName(QString::fromUtf8("Primeiro_encaixe"));
        Primeiro_encaixe->setGeometry(QRect(10, 210, 161, 17));
        Primeiro_encaixe->setAutoFillBackground(true);
        Pior_encaixe = new QCheckBox(centralwidget);
        Pior_encaixe->setObjectName(QString::fromUtf8("Pior_encaixe"));
        Pior_encaixe->setGeometry(QRect(10, 226, 161, 31));
        Pior_encaixe->setAutoFillBackground(true);
        Melhor_encaixe = new QCheckBox(centralwidget);
        Melhor_encaixe->setObjectName(QString::fromUtf8("Melhor_encaixe"));
        Melhor_encaixe->setGeometry(QRect(10, 250, 161, 21));
        Melhor_encaixe->setAutoFillBackground(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 300, 161, 21));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(450, 40, 341, 441));
        Manual = new QPushButton(centralwidget);
        Manual->setObjectName(QString::fromUtf8("Manual"));
        Manual->setGeometry(QRect(210, 320, 131, 51));
        setTAM_prog = new QLineEdit(centralwidget);
        setTAM_prog->setObjectName(QString::fromUtf8("setTAM_prog"));
        setTAM_prog->setGeometry(QRect(10, 370, 161, 21));
        setTAM_prog->setAutoFillBackground(false);
        setTEMPO_prog = new QLineEdit(centralwidget);
        setTEMPO_prog->setObjectName(QString::fromUtf8("setTEMPO_prog"));
        setTEMPO_prog->setGeometry(QRect(10, 430, 161, 20));
        label_TAM_prog = new QLabel(centralwidget);
        label_TAM_prog->setObjectName(QString::fromUtf8("label_TAM_prog"));
        label_TAM_prog->setGeometry(QRect(10, 320, 161, 51));
        label_TAM_prog->setAutoFillBackground(true);
        label_TAM_prog->setMargin(4);
        label_TEMPO = new QLabel(centralwidget);
        label_TEMPO->setObjectName(QString::fromUtf8("label_TEMPO"));
        label_TEMPO->setGeometry(QRect(10, 390, 161, 41));
        label_TEMPO->setAutoFillBackground(true);
        label_TEMPO->setMargin(4);
        Proximo = new QPushButton(centralwidget);
        Proximo->setObjectName(QString::fromUtf8("Proximo"));
        Proximo->setGeometry(QRect(210, 390, 131, 51));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 43, 431, 20));
        label_6->setAutoFillBackground(true);
        label_6->setMargin(4);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 62, 431, 21));
        label_7->setAutoFillBackground(true);
        label_7->setMargin(4);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(-4, 2, 811, 561));
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QString::fromUtf8("MainWindow{\n"
"	imagem: url(:/imagem/fundo.jpg)\n"
"}"));
        label_8->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(450, 5, 341, 31));
        label_9->setAutoFillBackground(true);
        MainWindow->setCentralWidget(centralwidget);
        label_8->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        Simular->raise();
        Passo_a_Passo->raise();
        label_4->raise();
        label_5->raise();
        Giga_1->raise();
        Gigas_2->raise();
        Gigas_3->raise();
        Gigas_4->raise();
        Primeiro_encaixe->raise();
        Pior_encaixe->raise();
        Melhor_encaixe->raise();
        lineEdit->raise();
        listWidget->raise();
        Manual->raise();
        setTAM_prog->raise();
        setTEMPO_prog->raise();
        label_TAM_prog->raise();
        label_TEMPO->raise();
        Proximo->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
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
        label_3->setText(QCoreApplication::translate("MainWindow", "METODO", nullptr));
        Simular->setText(QCoreApplication::translate("MainWindow", "Simular", nullptr));
        Passo_a_Passo->setText(QCoreApplication::translate("MainWindow", "PASSO A PASSO", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "1- SELECIONE AS OP\303\207\303\225ES, CLICK NO BOT\303\203O SIMULAR PARA INICIAR.", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "2- AO INICIAR CLICK NO BOT\303\203O PASSO A PASSO", nullptr));
        Giga_1->setText(QCoreApplication::translate("MainWindow", "1 GIGA", nullptr));
        Gigas_2->setText(QCoreApplication::translate("MainWindow", "2 GIGAS", nullptr));
        Gigas_3->setText(QCoreApplication::translate("MainWindow", "3 GIGAS", nullptr));
        Gigas_4->setText(QCoreApplication::translate("MainWindow", "4 GIGAS", nullptr));
        Primeiro_encaixe->setText(QCoreApplication::translate("MainWindow", "Primeiro encaixe", nullptr));
        Pior_encaixe->setText(QCoreApplication::translate("MainWindow", "Pior encaixe", nullptr));
        Melhor_encaixe->setText(QCoreApplication::translate("MainWindow", "Melhor encaixe", nullptr));
        Manual->setText(QCoreApplication::translate("MainWindow", "Manual", nullptr));
        label_TAM_prog->setText(QCoreApplication::translate("MainWindow", "TAMANHO", nullptr));
        label_TEMPO->setText(QCoreApplication::translate("MainWindow", "TEMPO", nullptr));
        Proximo->setText(QCoreApplication::translate("MainWindow", "PROXIMO", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "3- TAMANHO E TEMPO DO PROCESSO S\303\203O ADICIONADOS AUTOMATICAMENTE", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "4- PARA PERSONALIZAR TEMPO E TAMANHO CLICK EM MANUAL E DEPOIS EM SIMULAR", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "                                              MEM\303\223RIA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
