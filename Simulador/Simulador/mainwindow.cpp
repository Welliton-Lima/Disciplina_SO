#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <QMessageBox>
#include <QPixmap>
#include "lista.h"
#include "bloco_memoria.h"

void simular();
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TAM_check=true,TAM_memoria=0,metodo_check=true,i=0,check=true,manual=false,metodo=0,qnt=0,proximo=0;
    ui->Passo_a_Passo->setEnabled(false);
    ui->Proximo->setEnabled(false);
    ui->setTEMPO_prog->setEnabled(false);
    ui->setTAM_prog->setEnabled(false);
    QPixmap imagem(":/imagem/fundo.jpg");
    ui->label_8->setPixmap(imagem);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Giga_1_clicked()
{
    if(TAM_check == true){
        ui->Gigas_2->setEnabled(false);
        ui->Gigas_3->setEnabled(false);
        ui->Gigas_4->setEnabled(false);
        TAM_memoria=1000;
        TAM_check=false;
    }
    else if(proximo == 0){
        ui->Gigas_2->setEnabled(true);
        ui->Gigas_3->setEnabled(true);
        ui->Gigas_4->setEnabled(true);
        TAM_check=true;
    }
}

void MainWindow::on_Gigas_2_clicked()
{
    if(TAM_check == true){
        ui->Giga_1->setEnabled(false);
        ui->Gigas_3->setEnabled(false);
        ui->Gigas_4->setEnabled(false);
        TAM_memoria=2000;
        TAM_check=false;
    }
    else if(proximo == 0){
        ui->Giga_1->setEnabled(true);
        ui->Gigas_3->setEnabled(true);
        ui->Gigas_4->setEnabled(true);
        TAM_check=true;
    }

}

void MainWindow::on_Gigas_3_clicked()
{
    if(TAM_check == true){
        ui->Giga_1->setEnabled(false);
        ui->Gigas_2->setEnabled(false);
        ui->Gigas_4->setEnabled(false);
        TAM_memoria=3000;
        TAM_check=false;
    }
    else if(proximo == 0){
        ui->Giga_1->setEnabled(true);
        ui->Gigas_2->setEnabled(true);
        ui->Gigas_4->setEnabled(true);
        TAM_check=true;
    }
}

void MainWindow::on_Gigas_4_clicked()

{
    if(TAM_check == true){
        ui->Giga_1->setEnabled(false);
        ui->Gigas_2->setEnabled(false);
        ui->Gigas_3->setEnabled(false);
        TAM_memoria=4000;
        TAM_check=false;
    }
    else if(proximo == 0){
        ui->Giga_1->setEnabled(true);
        ui->Gigas_2->setEnabled(true);
        ui->Gigas_3->setEnabled(true);
        TAM_check=true;
    }

}
void MainWindow::on_Primeiro_encaixe_clicked()
{
    if(metodo_check == true){
        ui->Pior_encaixe->setEnabled(false);
        ui->Melhor_encaixe->setEnabled(false);
        metodo_check = false;
        metodo = 1;
    }
    else{
        ui->Pior_encaixe->setEnabled(true);
        ui->Melhor_encaixe->setEnabled(true);
        metodo_check = true;
    }
}

void MainWindow::on_Pior_encaixe_clicked()
{
    if(metodo_check == true){
        ui->Primeiro_encaixe->setEnabled(false);
        ui->Melhor_encaixe->setEnabled(false);
        metodo_check = false;
        metodo = 2;
    }
    else{
        ui->Primeiro_encaixe->setEnabled(true);
        ui->Melhor_encaixe->setEnabled(true);
        metodo_check = true;
    }
}

void MainWindow::on_Melhor_encaixe_clicked()
{
    if(metodo_check == true){
        ui->Primeiro_encaixe->setEnabled(false);
        ui->Pior_encaixe->setEnabled(false);
        metodo_check = false;
        metodo = 3;
    }
    else{
        ui->Primeiro_encaixe->setEnabled(true);
        ui->Pior_encaixe->setEnabled(true);
        metodo_check = true;
    }

}

void MainWindow::on_Simular_clicked()
{
    QString temp = ui->lineEdit->text();
    qnt_programa = temp.toInt();
    if(TAM_check == false && metodo_check == false && qnt_programa>0){

        if(proximo == 0){
            inicializa_Lista_Gen(memoria);
            Bloco_memoria mem_inicial("MEMORIA LIVRE",TAM_memoria,0,true);
            Lista_Inserir_Fim(memoria,mem_inicial);
            TElemento<Bloco_memoria> *nav = memoria.inicio;
            ui->listWidget->addItem("__________________________________________________________________");
            ui->listWidget->addItem(QString::fromStdString("\t"+nav->dado.getNome_programa()));
            ui->listWidget->addItem(QString::fromStdString("\tTAMANHO: ")+QString::number(nav->dado.getTAM_bloco())+QString::fromStdString(" MegaBytes:"));
            ui->listWidget->addItem("__________________________________________________________________\n");
        }

        ui->lineEdit->clear();
        ui->lineEdit->setEnabled(false);
        ui->Simular->setEnabled(false);
        ui->Passo_a_Passo->setEnabled(true);

        ui->Giga_1->setEnabled(false);
        ui->Gigas_2->setEnabled(false);
        ui->Gigas_3->setEnabled(false);
        ui->Gigas_4->setEnabled(false);
        TAM=TAM_memoria;
        qnt=qnt_programa;
        if(manual ==false){
            while(i<qnt){
                p.setDisponivel(false);
                p.setNome_programa("PROGRAMA "+std::to_string(i+1));
                p.setTAM_bloco(rand()%499+1);
                p.setTempo(rand()%99+2);
                i++;
                 blocos.push_back(p);
            }
           i=0;
        }
     }

    else{
        QMessageBox msgBox;
        msgBox.setText("PARAMETROS INVÁLIDOS!");
        msgBox.exec();
    }

}

void MainWindow::on_Passo_a_Passo_clicked()
{
    ui->Passo_a_Passo->setEnabled(false);
    srand(time(NULL));
    nav = memoria.inicio;
    proximo=0;

    if(qnt_programa > 0)
        {
            if(blocos.at(i).getTAM_bloco() <= TAM_memoria)
            {
                if(metodo == 1){
                    check = Primeiro_encaixe(memoria,blocos.at(i));
                }
                else if(metodo == 2){
                    check = Pior_encaixe(memoria,blocos.at(i));
                }
                else if(metodo == 3){
                    check = Melhor_encaixe(memoria,blocos.at(i));
                }
            }
            else{
                check = false;
            }
            if (check == false)
            {
                TAM_memoria = TAM_memoria+tempo_processamento1(memoria);
            }
            else
            {
                TAM_memoria = TAM_memoria - blocos.at(i).getTAM_bloco();
                TAM_memoria = TAM_memoria + tempo_processamento1(memoria);
                qnt_programa = qnt_programa-1;
                i=i+1;;
            }
            ui->listWidget->clear();
            while(nav != NULL){
                    ui->listWidget->addItem("__________________________________________________________________");
                    ui->listWidget->addItem(QString::fromStdString(nav->dado.getNome_programa()));
                    ui->listWidget->addItem(QString::fromStdString("\tTAMANHO: ")+QString::number(nav->dado.getTAM_bloco())+QString::fromStdString(" MegaBytes"));
                    ui->listWidget->addItem(QString::fromStdString("\tTEMPO: ")+QString::number(nav->dado.getTempo()));
                    ui->listWidget->addItem("__________________________________________________________________\n");
                    nav=nav->proximo;
                    proximo++;
                    }
        }
    else{
        ui->listWidget->clear();
        TAM_memoria= TAM_memoria+tempo_processamento1(memoria);
        while(nav != NULL){
                ui->listWidget->addItem("__________________________________________________________________");
                ui->listWidget->addItem(QString::fromStdString(nav->dado.getNome_programa()));
                ui->listWidget->addItem(QString::fromStdString("\tTAMANHO: ")+QString::number(nav->dado.getTAM_bloco())+QString::fromStdString(" MegaBytes"));
                ui->listWidget->addItem(QString::fromStdString("\tTEMPO: ")+QString::number(nav->dado.getTempo()));
                ui->listWidget->addItem("__________________________________________________________________\n");
              nav=nav->proximo;
        }
        if(TAM_memoria == TAM){
            ui->Passo_a_Passo->setEnabled(false);
            ui->lineEdit->setEnabled(true);
            ui->Simular->setEnabled(true);
            ui->Manual->setEnabled(true);
            ui->Proximo->setEnabled(true);
            manual=false;
            blocos.clear();
            i=0,proximo=1;
            TAM_memoria = TAM;
            QMessageBox msgBox;
            msgBox.setText("TODOS OS PROGRAMAS FORAM EXECUTADOS!");
            msgBox.exec();
        }
    }
	ui->Passo_a_Passo->setEnabled(true);
}


void MainWindow::on_Proximo_clicked()
{
    if(i <= qnt_programa && qnt_programa > 0){
        ui->label_TAM_prog->setText("TAMANHO DO PROCESSO "+QString::number(i));
        ui->label_TEMPO->setText("TEMPO DO PROCESSO "+QString::number(i));

        if(ui->setTAM_prog->text().toInt() > 0 && ui->setTEMPO_prog->text().toInt() >0){
               p.setNome_programa("Programa "+std::to_string(i));
               p.setDisponivel(false);
               p.setTAM_bloco(ui->setTAM_prog->text().toInt());
               p.setTempo(ui->setTEMPO_prog->text().toInt()+1);
                i=i+1;
        }
        ui->setTAM_prog->clear();
        ui->setTEMPO_prog->clear();
        blocos.push_back(p);
    }
    if(i>qnt_programa){
        ui->label_TAM_prog->setText("FIM");
        ui->label_TEMPO->setText("FIM");
        ui->setTAM_prog->setEnabled(false);
        ui->setTEMPO_prog->setEnabled(false);
        ui->Proximo->setEnabled(false);
        i=0;
    }
}

void MainWindow::on_Manual_clicked()
{
    qnt_programa = ui->lineEdit->text().toInt();
    if(qnt_programa > 0){
        ui->lineEdit->setEnabled(false);
        ui->label_TAM_prog->setText("TAMANHO DO PROCESSO");
        ui->label_TEMPO->setText("TEMPO DO PROCESSO");
        qnt_programa = ui->lineEdit->text().toInt();
        manual=true;
        ui->Manual->setEnabled(false);
        ui->setTEMPO_prog->setEnabled(true);
        ui->setTAM_prog->setEnabled(true);
        ui->Proximo->setEnabled(true);
        i=1;
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("PREENCHA TODOS OS PARÂMETROS ACIMA\nPARA SELECIONAR ESSA OPÇÃO!");
        msgBox.exec();
    }
}

