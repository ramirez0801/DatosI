#pragma once
#include "lista.h"

class cNodoA{
    private:
        float dato;
        cNodoA *pIzq, *pDer;
    public:
        cNodoA();
        cNodoA(float);
        void insertar(float);
        void inorden();
        void preorden();
        void postorden();
        bool toTRight(float);
};

cNodoA::cNodoA()
{
    
}

bool cNodoA::toTRight(float nd)
{
    return nd > dato ? true : false;
}

void cNodoA::inorden()
{
    if(pIzq)
    {
        pIzq->inorden();
        cout<<dato;
    }
    if(pDer)
    {
        pDer->inorden();
    }
}

void cNodoA::insertar(float nd)
{
    if(toTRight(nd))
    {
        if(pDer)
            pDer->insertar(nd);
        else
        {
            pDer = new cNodoA(nd);
            pDer->dato = nd;
        }
    }
    else
    {
        if(pIzq)
            pIzq->insertar(nd);
        else
        {
            pIzq = new cNodoA(nd);
            pIzq->dato = nd;
        }
    }
}