#include "bloco_memoria.h"

Bloco_memoria::Bloco_memoria()
{

}
Bloco_memoria::Bloco_memoria(const string &nome_programa,float TAM_bloco,int tempo,bool disponivel)
{
    this->nome_programa = nome_programa;
    this->TAM_bloco = TAM_bloco;
    this->tempo = tempo;
    this->disponivel = disponivel;
}

string Bloco_memoria::getNome_programa()const{
    return nome_programa;
}

void Bloco_memoria::setNome_programa(const string &value){
    nome_programa = value;
}


float Bloco_memoria::getTAM_bloco()const{
    return TAM_bloco;
}
void Bloco_memoria::setTAM_bloco(const float &value){
    TAM_bloco = value;
}


int Bloco_memoria::getTempo()const{
    return tempo;
}

void Bloco_memoria::setTempo(const int &value){
    tempo = value;
}

bool Bloco_memoria::getDisponivel()const{
    return disponivel;
}
void Bloco_memoria::setDisponivel(const bool &value){
    disponivel = value;
}



