#ifndef NODO_H
#define NODO_H

#include <iostream>

class Nodo
{
    public:
        Nodo();
        ~Nodo();
        int dato;
        Nodo *sig,*ant;

    friend class ListaDoble;
    //private:
};

#endif // NODO_H
