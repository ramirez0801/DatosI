#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "Nodo.h"
#include <iostream>

using namespace std;

class ListaDoble
{
    public:
        ListaDoble();
        ~ListaDoble();

        Nodo *h,*t;
        void insertarP(int);
        void insertarM(int);
        void insertarU(int);
        Nodo* buscar(int);
        void mostrarPaU(void);
        void mostrarUaP(void);
        void eliminar(int);
        void vaciar(void);



    //private:
};

#endif // LISTADOBLE_H
