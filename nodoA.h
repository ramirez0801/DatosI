#pragma once
#include <iostream>
using namespace std;

class cNodoA {
private:
    float dato;
    cNodoA* pIzq, * pDer;
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
    pDer = NULL;
    pIzq = NULL;
}

cNodoA::cNodoA(float nd)
{
    dato = nd;
}


bool cNodoA::toTRight(float nd)
{
    if (nd > dato)
        return true;
    else
        return false;
}



void cNodoA::insertar(float nd)
{
    if (toTRight(nd))
    {
        if (pDer)
            pDer->insertar(nd);
        else
        {
            pDer = new cNodoA(nd);
            pDer->dato = nd;
        }
    }
    else
    {
        if (pIzq)
            pIzq->insertar(nd);
        else
        {
            pIzq = new cNodoA(nd);
            pIzq->dato = nd;
        }
    }
}

void cNodoA::inorden()
{
    if (pIzq != NULL)
    {
        pIzq->inorden();
    }
        cout << dato<< " ";
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
        cout << dato << " ";
    }
    if (pDer != NULL)
    {
        pDer->postorden();
        cout << dato << " ";
    }
}

void cNodoA::preorden()
{

}