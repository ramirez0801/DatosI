#include <iostream>
#pragma once
#include "auto.h"

using namespace std;

//Clase Nodo***
class cNodo
{
private:
    cAuto* dato;
    cNodo* sig, * ant;
public:
    cNodo();
    ~cNodo();
    void agregarSig(cAuto*);
    cAuto* eliminarSig();
    friend class cLista;
};

cNodo::cNodo()
{
}

cNodo::~cNodo()
{
}

void cNodo::agregarSig(cAuto* dato)
{
    cNodo* pnn = new cNodo;
    pnn->dato = dato;
    pnn->sig = this->sig;
    pnn->ant = this;
    this->sig->ant = pnn;
    this->sig = pnn;
}

cAuto* cNodo::eliminarSig()
{
    cNodo* pnn = new cNodo;
    pnn = this->sig;
    this->sig = pnn->sig;
    pnn->sig->ant = this;
    pnn->sig = NULL;
    pnn->ant = NULL;
    return pnn->dato;
    ///delete pnn;
}

//Clase para lista***
class cLista
{
private:
    cNodo Inicio;
    cNodo Final;
public:
    cLista();
    ~cLista();
    void insertarInicio(cAuto*);
    void insertarFinal(cAuto*);
    int tamanio();
    bool vacio();
    void vaciar();
    void mostrar();
    cAuto* eliminarInicio();
    cAuto* eliminarFinal();
};

cLista::cLista()
{
    Inicio.sig = &Final;
    Final.ant = &Inicio;
}

cLista::~cLista()
{
    vaciar();
}

void cLista::insertarInicio(cAuto* _dato)
{
    Inicio.agregarSig(_dato);
}

void cLista::insertarFinal(cAuto* _dato)
{
    Final.ant->agregarSig(_dato);
}

int cLista::tamanio()
{
    int i;
    cNodo* p = Inicio.sig;
    //Recorre la lista y cuenta los nodos encontrados
    for (i = 0; p != &Final; i++)
    {
        p = p->sig;
    }
    return i;
}

bool cLista::vacio()
{
    //Si el nodo siguiente de la cabecera inicio es el nodo fina, la lista esta vacia
    return (Inicio.sig == &Final ? true : false);
}

void cLista::vaciar()
{   
    while(!vacio())
    {
        Inicio.eliminarSig();
    }
}

void cLista::mostrar()
{
    cNodo* pnn = new cNodo;
    if (vacio())
        cout << "\n\t---Lista vacia---\n";
    else
    {
        pnn = Inicio.sig;
        cout<<"Lista de tamanio: "<<tamanio()<<endl;
        for (int i = 1; pnn != &Final; i++)
        {
            pnn->dato->imprimir();
            pnn = pnn->sig;
        }
    }
    cout<<'\n';
}

cAuto* cLista::eliminarInicio()
{
    cAuto *dato;
    dato = Inicio.eliminarSig();
    return dato;
}

cAuto* cLista::eliminarFinal()
{
    cAuto *dato;
    dato = Final.ant->ant->eliminarSig();
    return dato;
}