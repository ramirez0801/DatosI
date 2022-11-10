#include "patrulla.h"

class cPatrullaBlin:public cPatrulla
{
    private:
        int blindaje;
    public:
        cPatrullaBlin();
        ~cPatrullaBlin();
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
    cout<<"\nVelocidad: "<<vel<<endl;
}

