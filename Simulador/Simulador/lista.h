#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <iostream>
#include "bloco_memoria.h"

using namespace std;

template <typename TIPO>
struct TElemento
{
    TIPO dado;
    TElemento *proximo;
};

template <typename TIPO>
struct TLista
{
    TElemento <TIPO> *inicio;
};

template <typename TIPO>
void inicializa_Lista_Gen (TLista<TIPO> &Lista) //inicilaiza a lista com tamanho zero;
{
    Lista.inicio = NULL;
}

template <typename TIPO>
bool Lista_Inserir_Inicio(TLista<TIPO> &Lista,TIPO dado)
{
    TElemento<TIPO> *elemento = new TElemento<TIPO>;
    elemento->dado = dado;
    elemento->proximo = Lista.inicio;
    Lista.inicio = elemento;
    return true;
}

template <typename TIPO>
bool Lista_Remover_Inicio(TLista<TIPO> &Lista)
{
    TElemento<TIPO> *temp=Lista.inicio;

    Lista.inicio = temp->proximo;
    delete temp;
    return true;
}
template <typename TIPO>
bool Lista_Inserir_Fim(TLista<TIPO> &Lista,TIPO dado)
{
    TElemento<TIPO> *elemento = new TElemento<TIPO>;
    elemento->dado = dado;
    elemento->proximo = NULL;

    TElemento<TIPO> *temp = Lista.inicio;
    if(Lista.inicio != NULL)
    {
        while(temp->proximo != NULL)
        {
            temp = temp->proximo;
        }
        if(temp->proximo != NULL)
        {
            return false;
        }
        else
        {
            temp->proximo = elemento;
            return true;
        }

    }
    else{
        Lista.inicio = elemento;
        return true;
    }
}
template <typename TIPO>
bool Lista_Remover_Fim(TLista<TIPO> &Lista){
    TElemento<TIPO> *temp = Lista.inicio;
    if(Lista.inicio != NULL)
    {
        while(temp->proximo != NULL)
        {
            temp = temp->proximo;
        }
        temp=NULL;
        delete temp->proximo;
        return true;
    }
    return false;
}
template <typename TIPO>
bool Lista_Remove_Fim(TLista<TIPO> &Lista)
{
    if(Lista.inicio == NULL)
    {
        return false;
    }
    else
    {
        TElemento<TIPO> *temp=Lista.inicio;
        if(temp->proximo ==NULL)
        {
            Lista.inicio = temp->proximo;
            delete temp;
            return true;
        }
        else
        {
            TElemento<TIPO> *temp2 = Lista.inicio->proximo;
            while(temp2->proximo != NULL)
            {
                temp =temp->proximo;
            }
            temp->proximo = NULL;
            delete temp2;
            return true;
        }
    }
}

template <typename TIPO>
bool Lista_Inserir_posicao(TLista<TIPO> &Lista,TIPO dado,int posicao)
{

    TElemento<TIPO> *elemento = new TElemento<TIPO>;
    elemento->dado = dado;
    elemento->proximo = NULL;

    TElemento<TIPO> *temp = Lista.inicio;

    if(temp->proximo != NULL){
        for(int i=1; i<posicao; i++)
        {
            temp = temp->proximo;
        }
    }
    elemento->proximo=temp->proximo;
    temp->proximo=elemento;

    return true;
}

template <typename TIPO>
bool Lista_Remover_posicao(TLista<TIPO> &Lista,int posicao)
{
    TElemento<TIPO> *temp = Lista.inicio;
    TElemento<TIPO> *temp2 = temp->proximo;
    for(int i=0; i<posicao; i++)
    {
        temp = temp->proximo;
        temp2= temp->proximo;
    }
    if(posicao == 0){
        Lista.inicio = temp->proximo;
        delete temp;
    }
    else{
       temp->proximo=temp2->proximo;
       temp2->proximo=NULL;
        delete temp2;
    }
    return true;
}

template <typename TIPO>
bool  unir_particao(TLista<TIPO> &Lista,TIPO programa,int opc)
{
    int proximo=-1,indice=1,indice_atual=0,indice_final=0,indice_inicial=0,TAM_Bloco=-1,bloco_atual=0,check=0;
    TElemento<TIPO> *nav = Lista.inicio;

    while(proximo != 1)
    {
        if(nav->dado.getDisponivel()==true)
        {
            indice_atual++;
            bloco_atual += nav->dado.getTAM_bloco();
            if(opc == 0 && bloco_atual >= programa.getTAM_bloco())
            {
                proximo = 1;
                check=1;
                indice_inicial=indice - indice_atual;
                indice_final = indice_atual;
                TAM_Bloco = bloco_atual;
            }
            else if(opc!=0 && proximo==-1 && bloco_atual > TAM_Bloco)
            {
                TAM_Bloco = bloco_atual;
                indice_inicial=indice - indice_atual;
                indice_final = indice_atual;
                check=1;
            }
            else if(opc == 2 && (bloco_atual >= programa.getTAM_bloco()) && (bloco_atual < TAM_Bloco))
            {
                TAM_Bloco = bloco_atual;
                indice_inicial=indice - indice_atual;
                indice_final = indice_atual;
            }
        }
        else
        {
            indice_atual=0;
            bloco_atual=0;
        }
        if(nav->proximo==NULL && (opc == 0 || opc == 1)){
            proximo =1;
        }
        else if(nav->proximo == NULL && opc ==2)
        {
            bloco_atual=0,indice_atual=0,indice=0;
            proximo++;
            nav=Lista.inicio;
        }
        nav=nav->proximo;
        indice++;
    }
    TAM_Bloco = TAM_Bloco - programa.getTAM_bloco();
    if(TAM_Bloco >= 0){
        indice_atual = indice_inicial;
        indice = indice_final;
        Lista_Inserir_posicao(Lista,programa,indice);
        if(TAM_Bloco > 0)
        {
            TIPO Memoria;
            Memoria.setDisponivel(true);
            Memoria.setNome_programa("FRAGMENTO");
            Memoria.setTAM_bloco(TAM_Bloco);
            Memoria.setTempo(0);
            Lista_Inserir_posicao(Lista,Memoria,indice+1);
        }
        for(int i = 0; i<indice; i++)
        {
            Lista_Remover_posicao(Lista,indice_atual);
        }
    }
    if(check == 0){
        return false;
    }
    else{
        return true;
   }
}

template <typename TIPO>
bool Primeiro_encaixe(TLista<TIPO> &Lista,TIPO programa)
{

    TElemento<TIPO> *nav = Lista.inicio;
    float TAM_Bloco=0;
    int indice=0,proximo=0;
    bool check = false,chk=false;

    while(proximo != 1)
    {
        if(nav->dado.getDisponivel()==true)
        {
            if(nav->dado.getTAM_bloco() == programa.getTAM_bloco())
            {
                nav->dado = programa;
                proximo=1;
                check = true;
            }
            else if(nav->dado.getTAM_bloco() > programa.getTAM_bloco())
            {
                TAM_Bloco = nav->dado.getTAM_bloco() - programa.getTAM_bloco();
                nav->dado = programa;

                TIPO Memoria;
                Memoria.setDisponivel(true);
                Memoria.setNome_programa("FRAGMENTO");
                Memoria.setTAM_bloco(TAM_Bloco);
                Memoria.setTempo(0);
                Lista_Inserir_posicao(Lista,Memoria,indice+1);
                proximo=1;
                check = true;
            }
        }
        if(nav->proximo == NULL){
            proximo=1;
        }
        nav = nav->proximo;
        indice++;
    }
    if(check == false)
    {
       chk = unir_particao(Lista,programa,0);
    }
    if(check == false && chk == false){
        return false;
    }
    else{
        return true;
    }

}

template <typename TIPO>
bool Pior_encaixe(TLista<TIPO> &Lista,TIPO programa)
{
    TElemento<TIPO> *nav = Lista.inicio;
    int indice=0,indice_atual=0,Tamanho_atual=0,proximo=0;
    bool check =false;

    while(proximo != 1)
    {
        if(nav->dado.getDisponivel()==true && programa.getTAM_bloco() <= nav->dado.getTAM_bloco())
        {
            if(Tamanho_atual < nav->dado.getTAM_bloco())
            {
                indice_atual = indice;
                Tamanho_atual=nav->dado.getTAM_bloco();
                proximo=1;
                check = true;
            }
        }
        nav = nav->proximo;
        indice++;
    }
    if(Tamanho_atual >= programa.getTAM_bloco())
    {
        nav = Lista.inicio;
        for(int i=0; i<indice_atual; i++)
        {
            nav = nav->proximo;
        }
        Tamanho_atual = nav->dado.getTAM_bloco() - programa.getTAM_bloco();
        nav->dado = programa;
        if(Tamanho_atual > 0)
        {
            TIPO Memoria;
            Memoria.setDisponivel(true);
            Memoria.setNome_programa("FRAGMENTO");
            Memoria.setTAM_bloco(Tamanho_atual);
            Memoria.setTempo(0);
            Lista_Inserir_posicao(Lista,Memoria,indice_atual+1);
        }
    }
    else if(check==false)
    {
        check = unir_particao(Lista,programa,1);
    }

    if (check == false)
    {
        return false;
    }
    else{
        return true;
    }
}

template <typename TIPO>
bool  Melhor_encaixe(TLista<TIPO> &Lista,TIPO programa)
{
    TElemento<TIPO> *nav = Lista.inicio;
    int proximo = -1,indice=0,indice_atual=0,Tamanho_atual=-1;
    bool chek = false;
    while(proximo != 1)
    {
        if(nav->dado.getDisponivel() == true)
        {
            if(programa.getTAM_bloco() == nav->dado.getTAM_bloco())
            {
                nav->dado = programa;
                Tamanho_atual=nav->dado.getTAM_bloco();
                proximo=1;
                chek = true;
            }
            if(proximo ==-1  && (programa.getTAM_bloco() < nav->dado.getTAM_bloco()))
            {
                if(Tamanho_atual < nav->dado.getTAM_bloco())
                {
                    indice_atual = indice;
                    Tamanho_atual=nav->dado.getTAM_bloco();
                    chek = true;
                }

            }
            else if((nav->dado.getTAM_bloco() > programa.getTAM_bloco()) &&  (nav->dado.getTAM_bloco() < Tamanho_atual))
            {
                indice_atual = indice;
                Tamanho_atual = nav->dado.getTAM_bloco();
            }
        }
        if(nav->proximo == NULL)
        {
            nav = Lista.inicio;
            indice=-1;
            proximo++;
        }
        else{
            nav = nav->proximo;
        }
        indice++;
    }
    if(Tamanho_atual >= programa.getTAM_bloco())
    {
        proximo=0,nav=Lista.inicio;
        while(proximo < indice_atual)
        {
            nav=nav->proximo;
            proximo++;
        }
        Tamanho_atual = nav->dado.getTAM_bloco() - programa.getTAM_bloco();
        nav->dado = programa;
        //Lista_Inserir_posicao(Lista,programa,indice_atual-1);
        if(Tamanho_atual > 0)
        {
            TIPO Memoria;
            Memoria.setDisponivel(true);
            Memoria.setNome_programa("FRAGMENTO");
            Memoria.setTAM_bloco(Tamanho_atual);
            Memoria.setTempo(0);
            Lista_Inserir_posicao(Lista,Memoria,indice_atual+1);
        }
    }
    else if(chek == false)
    {
        chek = unir_particao(Lista,programa,2);
    }
    if(chek == false){
        return false;
    }
    else
    {
       return true;
    }
}

template <typename TIPO>
void  tempo_processamento(TLista<TIPO> &Lista)
{
    TElemento<TIPO> *nav = Lista.inicio;
    int TAM=0;
    while(nav->proximo != NULL)
    {
        if(nav->dado.getDisponivel()==false){
            TAM++;
        }
        nav=nav->proximo;
    }
    nav = Lista.inicio;
    while(TAM >0)
    {
        if(nav->dado.getDisponivel()==false)
        {
            nav->dado.setTempo(nav->dado.getTempo() - 1);
            if(nav->dado.getTempo()==0)
            {
                nav->dado.setDisponivel(true);
                nav->dado.setNome_programa("FRAGMENTO");
                nav->dado.setTempo(0);
                TAM--;
            }
        }
        if(nav->proximo == NULL){
            nav = Lista.inicio;
        }
        else{
            nav=nav->proximo;
        }
    }
}

template <typename TIPO>
int tempo_processamento1(TLista<TIPO> &Lista)
{
    TElemento<TIPO> *nav = Lista.inicio;
    int TAM=0,TAM_memoria=0;
    while(nav != NULL)
    {
        if(nav->dado.getDisponivel() == false){
            TAM++;
        }
        nav=nav->proximo;
    }
    nav = Lista.inicio;
    while(nav != NULL)
    {
        if(nav->dado.getDisponivel()==false)
        {
            nav->dado.setTempo(nav->dado.getTempo()-1);
            if(nav->dado.getTempo()<=0)
            {
                nav->dado.setDisponivel(true);
                nav->dado.setNome_programa("FRAGMENTO");
                nav->dado.setTempo(0);
                TAM_memoria=TAM_memoria+nav->dado.getTAM_bloco();
            }
        }
        nav=nav->proximo;
    }
    return TAM_memoria;
}




#endif // LISTA_H_INCLUDED
