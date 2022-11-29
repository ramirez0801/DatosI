#pragma once
#include "nodoA.h"

class cArbol
{
private:
    cNodoA* raiz;
public:
    cArbol();
    void insertar(float);
    void inorden();
    void postorden();
    void preorden();

};

cArbol::cArbol()
{
    raiz = NULL;
}

void cArbol::insertar(float nd)
{
    if (raiz == NULL)
    {
        raiz = new cNodoA;
        raiz->insertar(nd);
    }
    else
    {
        raiz->insertar(nd);
    }

}

void cArbol::inorden()
{
    raiz->inorden();
}

void cArbol::postorden()
{
    raiz->postorden();
}

void cArbol::preorden()
{
    raiz->preorden();
}