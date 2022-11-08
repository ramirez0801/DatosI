#pragma once
#include <iostream>
#include "motor.h"

using namespace std;

class cAuto
{
    protected:
        cMotor motor;
        float vel;
    public:
        cAuto();
        ~cAuto();
        void imprimir();
        void accelerar();
};

cAuto::cAuto()
{
    vel = 0;
    // motor.setCililndros(0);
    // motor.setCilindrada(0);
    cout<<"\nCreando Auto\n";
}

cAuto::~cAuto()
{
    cout<<"\nDestruyendo auto\n";
}

void cAuto::accelerar()
{
    vel += 1;
    cout<<"\nAccelerando...";
}

void cAuto::imprimir()
{
    cout<<"\nVelocidad: "<<vel;
}

