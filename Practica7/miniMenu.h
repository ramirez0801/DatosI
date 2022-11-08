#pragma once
#include <iostream>

using namespace std;

class menu
{
    public:
        int show();
};

int menu::show()
{
    int opc = 0;
    cout<<"\n\t1)Accelerar\n\t2)Imprimir\n\t3)Salir\n\tOpc: ";
    cin>>opc;
    return opc;
}