#pragma once
#include <iostream>

using namespace std;

class cMotor
{
    protected:
        int cilindros, cilindrada;
    public:
        void imprimir();
        int getCilindros();
        void setCililndros(int);
        int getCilindrada();
        void setCilindrada(int);

};

void cMotor::setCililndros(int c)
{
    cout<<"\nCilindros: ";
    cin>>cilindros;
}

void cMotor::setCilindrada(int c)
{
    cout<<"\nClilindrada: ";
    cin>>cilindrada;
}

int cMotor::getCilindros()
{
    return cilindros;
}

int cMotor::getCilindrada()
{
    return cilindrada;
}

void cMotor::imprimir()
{
    cout<<"\nCilindros: "<<cilindros<<"\nCilindrada: "<<cilindrada<<endl;
}