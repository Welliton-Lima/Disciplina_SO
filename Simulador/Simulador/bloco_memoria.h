#ifndef BLOCO_MEMORIA_H
#define BLOCO_MEMORIA_H

#include <iostream>
#include "lista.h"

using namespace std;

class Bloco_memoria{
protected:
    string nome_programa;
    float TAM_bloco;
    int tempo;
    bool disponivel;

public:
    Bloco_memoria();
    Bloco_memoria(const string &nome_programa,float TAM_bloco ,int tempo,bool disponivel);
    int TAM_memoria,metodo;

    void setNome_programa(const string &value);
    string getNome_programa()const;

    void setTAM_bloco(const float &value);
    float getTAM_bloco()const;

    void setTempo(const int &value);
    int getTempo()const;

    void setDisponivel(const bool &value);
    bool getDisponivel()const;
};

#endif // BLOCO_MEMORIA_H
