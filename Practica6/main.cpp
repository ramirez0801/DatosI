#include <iostream>
#include "pilaEstatica.h"
#include "colaEstatica.h"
using namespace std;

int main(int argc, char const* argv[])
{
    // cColaEstatica cola;
    // cola.push(10);
    // cola.push(8);
    // cola.push(7);
    // cola.mostrar();

    cPilaEstatica pila;
    pila.push(10);
    pila.push(14.87);
    pila.mostrar();
    pila.pop();
    pila.mostrar();

}