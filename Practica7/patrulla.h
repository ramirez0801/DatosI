#include "auto.h"


class cPatrulla:public cAuto
{   
    public:
        cPatrulla();
        ~cPatrulla();
        void accelerar();
        virtual void imprimirV();
        void imprimir();
};

cPatrulla::cPatrulla()
{
    vel = 0;
    cout<<"\nConstruyendo patrulla\n";
}

cPatrulla::~cPatrulla()
{
    cout<<"\nDestruyendo patrulla\n";
}

void cPatrulla::accelerar()
{
    vel += 2;
    cout<<"\nAccelerando...";
}

void cPatrulla::imprimirV()
{   
    cout<<"Patrulla que va a: "<<vel<<endl;
}

void cPatrulla::imprimir()
{
    cout<<"Patrulla que va a: "<<vel<<endl;
}