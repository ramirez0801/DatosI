#include "auto.h"

class cToreto:public cAuto
{
    public:
        cToreto();
        ~cToreto();
        void accelerar();
        void imprimir();
        void turbo();
};

cToreto::cToreto()
{
    vel = 0;
    cout<<"\nConstruyendo ToretoCar\n";
}

cToreto::~cToreto()
{
    cout<<"\nToreto ha sido arrestado\n";
}

void cToreto::accelerar()
{
    vel +=3;
    cout<<"\nAccelerando...\n";
}

void cToreto::turbo()
{
    vel += 10;
    cout<<"\nTurbooooooooo\n";
}

void cToreto::imprimir()
{
    cout<<"\nVelocidad: "<<vel<<endl;
}
