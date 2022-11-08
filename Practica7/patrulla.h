#include "auto.h"


class cPatrulla:public cAuto
{   
    public:
        cPatrulla();
        ~cPatrulla();
        void accelerar();
        void imprrimir();
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