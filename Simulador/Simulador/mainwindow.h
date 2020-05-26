#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bloco_memoria.h"
#include "lista.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    int TAM_memoria,metodo,qnt_programa,qnt,proximo,i,TAM;;
    bool TAM_check,metodo_check,manual,check;
    vector<Bloco_memoria> blocos;
    Bloco_memoria p;
    TLista<Bloco_memoria>memoria;
    TElemento<Bloco_memoria> *nav;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Giga_1_clicked();

    void on_Gigas_2_clicked();

    void on_Gigas_3_clicked();

    void on_Gigas_4_clicked();

    void on_Primeiro_encaixe_clicked();

    void on_Pior_encaixe_clicked();

    void on_Melhor_encaixe_clicked();

    void on_Simular_clicked();

    void on_Passo_a_Passo_clicked();

    void on_Manual_clicked();

    void on_Proximo_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
