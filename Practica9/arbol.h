#pragma once
#include "nodoA.h"

class cArbol
{
private:
    cNodoA *raiz;
public:
    cArbol();
    void insertar(float);

};

cArbol::cArbol(/* args */)
{
    raiz = NULL;
}

void cArbol::insertar(float nd)
{ 
    if(raiz)
    {
        raiz->insertar(nd);
    }
    else
    {
        raiz->dato = nd;
    }

}
