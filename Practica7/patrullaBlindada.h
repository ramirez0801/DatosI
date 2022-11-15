#include "patrulla.h"

class cPatrullaBlin:public cPatrulla
{
    private:
        int blindaje;
    public:
        cPatrullaBlin();
        ~cPatrullaBlin();
        virtual void imprimirV();
        void imprimir();
        void accelerar();
};

cPatrullaBlin::cPatrullaBlin()
{
    vel = 0;
    cout<<"\nConstruyendo patrulla blindada\n";
}

cPatrullaBlin::~cPatrullaBlin()
{
    cout<<"\nLa patrulla recibio un misil\n";
}

void cPatrullaBlin::accelerar()
{
    vel += 1.5;
    cout<<"\nAccelerando...\n";
}

void cPatrullaBlin::imprimir()
{
    cout<<"\nBlindado que va a: "<<vel<<endl;
}

void cPatrullaBlin::imprimirV()
{
    cout<<"\nBlindado que va a: "<<vel<<endl;
}

