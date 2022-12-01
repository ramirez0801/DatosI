#pragma once
#include "nodoA.h"

class cArbol 
{
private:
    cNodoA* raiz;
    cNodoA* BuscarMalPadre(float);
public:
    cArbol();
    void insertar(float);
    void inorden();
    void postorden();
    void preorden();
    void eliminacion(float);
    
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
        raiz->fdato = nd;
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
    cout<<raiz->fdato<<" ";
}

void cArbol::preorden()
{
    cout<<raiz->fdato<<" ";
    raiz->preorden();
}

cNodoA* cArbol::BuscarMalPadre(float nd)
{
    cNodoA *pActual = raiz;
    while(pActual)
    {
        
        if(nd > pActual->fdato)
        {
            if(nd == pActual->pIzq->fdato)
                return pActual;
            else
                pActual = pActual->pIzq;
        }
        else
        {
            if(nd == pActual->pDer->fdato)
                return pActual;
            else
                pActual = pActual->pDer;
        }
    }
    return pActual;
}

void cArbol::eliminacion(float nd)
{
    cNodoA *maloP;
    cNodoA *dameH;
    cNodoA *NietoI;
    cNodoA *NietoD;
    cNodoA *ultimoD;
    int ch;

    if(nd == raiz->fdato)
    {
        ch = raiz->hijos();
        switch(ch)
        {
            case 0: 
                delete raiz;
                raiz = NULL;
                break;
            case 1:
                dameH = raiz->dameHijo();
                delete raiz;
                raiz = dameH;
                break;
            case 2:
                NietoI = raiz->pIzq;
                NietoD = raiz->pDer;
                delete raiz;
                raiz = NietoI;
                ultimoD = NietoI->BuscarExtremo();
                ultimoD->pDer = NietoD;
                break;
        }
    }
    else
    {
        maloP = BuscarMalPadre(nd);
        if(nd > maloP->fdato)
        {
            ch = maloP->pIzq->hijos();
            switch (ch)
            {
            case 0:
                delete maloP->pIzq;
                break;
            case 1:
                dameH = maloP->pIzq->dameHijo();
                delete maloP->pIzq;
                maloP->pIzq = dameH;
                break;
            case 2:
                NietoD = maloP->pIzq->pDer;
                NietoI = maloP->pIzq->pIzq;
                delete maloP->pIzq;
                maloP->pIzq = NietoI;
                ultimoD = NietoI->BuscarExtremo();
                ultimoD->pDer = NietoD;
                break;
            }
        }
        else
        {
            ch = maloP->pDer->hijos();
            switch (ch)
            {
            case 0:
                delete maloP->pDer;
                break;
            case 1:
                dameH = maloP->pDer->dameHijo();
                delete maloP->pDer;
                maloP->pDer = dameH;
                break;
            case 2:
                NietoD = maloP->pDer->pDer;
                NietoI = maloP->pDer->pIzq;
                delete maloP->pDer;
                maloP->pDer = NietoI;
                ultimoD = NietoI->BuscarExtremo();
                ultimoD->pDer = NietoD;
                break;
            }
        }
    }
}

