#include "auto.h"

class cTaxi:public cAuto
{
    public:
        cTaxi();
        ~cTaxi();
        void accelerar();
        virtual void imprimirV();
        void imprimir();
};

cTaxi::cTaxi()
{
    vel = 0;
    cout<<"\nConstruyendo Taxi\n";
}

cTaxi::~cTaxi()
{
    cout<<"\nEl taxi ha sido detenido por transito\n";
}

void cTaxi::accelerar()
{
    vel =+ 5;
    cout<<"\nAccelerando...\n";
}

void cTaxi::imprimir()
{
    cout<<"\nTaxi que va a: "<<vel<<endl;
}

void cTaxi::imprimirV()
{
    cout<<"\nTaxi que va a: "<<vel<<endl;
}