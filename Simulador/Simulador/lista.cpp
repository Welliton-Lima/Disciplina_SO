#ifndef MEMORIA_H_INCLUDED
#define MEMORIA_H_INCLUDED
#include "lista.h"
//#include "bloco_memoria.h"
/*
using namespace std;
Lista::Lista()
{

}
template <typename TIPO>
bool  Lista::unir_particao(TLista<TIPO> &Lista,TIPO programa,int opc)
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
        for(int i = 0; i<indice; i++)
        {
            Lista_Remover_posicao(Lista,indice_atual);
        }
        Lista_Inserir_posicao(Lista,programa,indice_atual);

        if(TAM_Bloco > 0)
        {
            TIPO Memoria;
            Memoria.setDisponivel(true);
            Memoria.setNome_programa("NAO ALOCADO");
            Memoria.setTAM_bloco(TAM_Bloco);
            Memoria.setTempo(0);
            Lista_Inserir_posicao(Lista,Memoria,indice);
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
bool Lista::Primeiro_encaixe(TLista<TIPO> &Lista,TIPO programa)
{

    TElemento<TIPO> *nav = Lista.inicio;
    float TAM_Bloco=0;
    int indice=0,proximo=0;
    bool check = false,chk=false;

    while(proximo != 1)
    {
        cout<<"A "<<endl;
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
                Memoria.setNome_programa("NAO ALOCADO");
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
bool Lista::Pior_encaixe(TLista<TIPO> &Lista,TIPO programa)
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
            Memoria.setNome_programa("NAO ALOCADO");
            Memoria.setTAM_bloco(Tamanho_atual);
            Memoria.setTempo(0);
            Lista_Inserir_posicao(Lista,Memoria,indice_atual+1);
        }
    }
    else if(Tamanho_atual == 0)
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
bool  Lista::Melhor_encaixe(TLista<TIPO> &Lista,TIPO programa)
{
    TElemento<TIPO> *nav = Lista.inicio;
    int proximo = -1,indice=0,indice_atual=0,Tamanho_atual=0;
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
            if(proximo == 0 && (nav->dado.getTAM_bloco() > programa.getTAM_bloco()) &&  (nav->dado.getTAM_bloco() < Tamanho_atual))
            {
                indice_atual = indice;
                Tamanho_atual = nav->dado.getTAM_bloco();
            }
        }
        if(nav->proximo == NULL)
        {
            nav = Lista.inicio;
            proximo++;
        }
        else
            nav = nav->proximo;
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
            Memoria.setNome_programa("NAO ALOCADO");
            Memoria.setTAM_bloco(Tamanho_atual);
            Memoria.setTempo(0);
            Lista_Inserir_posicao(Lista,Memoria,indice_atual+1);
        }
    }
    else if(Tamanho_atual ==0)
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
void  Lista::tempo_processamento(TLista<TIPO> &Lista)
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
                nav->dado.setNome_programa("NAO ALOCADO");
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
int Lista::tempo_processamento1(TLista<TIPO> &Lista)
{
    TElemento<TIPO> *nav = Lista.inicio;
    int TAM=0,TAM_menmoria=0;
    while(nav->proximo != NULL)
    {
        if(nav->dado.getDisponivel() == false){
            TAM++;
        }
        nav=nav->proximo;
    }
    TAM=TAM-1;
    nav = Lista.inicio;
    for(int i = 0;i<TAM;i++)
    {
        if(nav->dado.getDisponivel()==false)
        {
            nav->dado.setTempo(nav->dado.getTempo()-1);
            if(nav->dado.getTempo()==0)
            {
                nav->dado.setDisponivel(true);
                nav->dado.setNome_programa("NAO ALOCADO");
                nav->dado.setTempo(0);
                TAM++;
                TAM_menmoria+=nav->dado.getTAM_bloco();
            }
        }
        nav=nav->proximo;
    }
    return TAM_menmoria;
}*/

#endif // MEMORIA_H_INCLUDED
