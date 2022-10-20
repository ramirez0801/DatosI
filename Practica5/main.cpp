#include <iostream>
#include "pila.h"
#include "cola.h"
using namespace std;

int main(int argc, char const* argv[])
{
    float s;
    cPila pila;
    cCola cola;
    
    cout<<"\nPila: \n";
    pila.push(8.10);
    pila.push(10.8);
    pila.push(145.58);
    s = pila.size();
    cout<<"Tamanio: "<<s<<endl;
    pila.show();
    pila.pop();
    pila.show();

    cout<<"\nCola: \n";
    cola.push(10.5);
    cola.push(17.1);
    cola.push(77.1);
    s = cola.size();
    cout<<"Tamanio: "<<s<<endl;
    cola.show();
    cola.pop();
    cola.show();

    cout << "Exito" << endl;
    return 0;
}

