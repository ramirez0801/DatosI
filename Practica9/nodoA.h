#pragma once
#include <iostream>
using namespace std;

class cNodoA {
private:
    float fdato;
    cNodoA* pIzq, * pDer;
    cNodoA();
    //cNodoA(float);
    void insertar(float);
    void inorden();
    void preorden();
    void postorden();
    bool toTLeft(float);
    int hijos();
    cNodoA *dameHijo();
    cNodoA *BuscarExtremo();

    friend class cArbol;
    
};

cNodoA::cNodoA()
{
    pDer = NULL;
    pIzq = NULL;
    fdato = 0;
}
bool cNodoA::toTLeft(float nd)
{
    if (nd > fdato)
        return true;
    else
        return false;
}

void cNodoA::insertar(float nd)
{
    if (toTLeft(nd))
    {
        if (pIzq == NULL)
        {
            pIzq = new cNodoA();
            pIzq->fdato = nd;
        }
        else
        {
            pIzq->insertar(nd);
        }
    }
    else
    {
        if (pDer == NULL)
        {
            pDer = new cNodoA();
            pDer->fdato = nd;
        }
        else
        {
            pDer->insertar(nd);
        }
    }
}

void cNodoA::inorden()
{
    if (pIzq != NULL)
    {
        pIzq->inorden();
    }
    cout << this->fdato<< " ";
    if (pDer != NULL)
    {
        pDer->inorden();
    }
}

void cNodoA::postorden()
{
    if (pIzq != NULL)
    {
        pIzq->postorden();
        cout << pIzq->fdato << " ";
    }
    if (pDer != NULL)
    {
        pDer->postorden();
        cout << pDer->fdato << " ";
    }
}

void cNodoA::preorden()
{
    
    if (pIzq != NULL)
    {   
        cout<<pIzq->fdato<<" ";
        pIzq->preorden();
    }
    if (pDer != NULL)
    {
         cout<<pDer->fdato<<" ";
        pDer->preorden();
    }
}

int cNodoA::hijos()
{
    int i = 0;
    if(pDer != NULL)
    {
        i++;
    }
    if(pIzq != NULL)
    {
        i++;
    }
    return i;
}

cNodoA* cNodoA::dameHijo()
{
    int i = 0;
    cNodoA *aux;
    
    if(pIzq != NULL)
    {
        i++;
        aux = pIzq;
    }
    if(pDer != NULL)
    {
        i++;
        aux = pDer;
    }

    switch (i)
    {
    case 1:
        return aux;
        break;
    case 2:
        return NULL;
        break;
    case 0: 
        return NULL;
        break;
    }
    return NULL;
}

cNodoA* cNodoA::BuscarExtremo()
{
    cNodoA *pActual;
    pActual = this;
    while(pActual->pDer != NULL)
    {
        pActual = pActual->pDer;
    }
    return pActual;

}