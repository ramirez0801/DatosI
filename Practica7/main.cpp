#include <iostream>
#include "patrullaBlindada.h"
#include "toreto.h"
#include "taxi.h"
#include "miniMenu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    menu men;
    int opc = 1; //Opcion principal
    while(opc!=0)
    {   //menu
        cout<<"\n\t1)Auto\n\t2)Patrulla\n\t3)Patrulla Blindada\n\t4)Taxi\n\t5)Toreto\n\t0)Salir\n\topc: ";
        cin>>opc;
        int  opcM = 0;//Opcion para el miniMenu
        switch (opc)
        {
            case 1:
            {   //Auto
                cAuto Auto;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            Auto.accelerar();
                            break;
                        case 2:
                            Auto.imprimir();
                            break;
                        case 3:
                            Auto.~cAuto();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                break;
            }
            case 2:
            {   //Patrulla
                cPatrulla patru;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            patru.accelerar();
                            break;
                        case 2:
                            patru.imprimir();
                            break;
                        case 3:
                            patru.~cPatrulla();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                break;
            }
            case 3:
            {   //Patrulla blindada
                cPatrullaBlin patruBlin;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            patruBlin.accelerar();
                            break;
                        case 2:
                            patruBlin.imprimir();
                            break;
                        case 3:
                            patruBlin.~cPatrullaBlin();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                break;
            }
            case 4:
            {   //Taxi
                cTaxi taxi;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            taxi.accelerar();
                            break;
                        case 2:
                            taxi.imprimir();
                            break;
                        case 3:
                            taxi.~cTaxi();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                break;
            }
            case 5:
            {   //Carro de Toreto
                cToreto toreto;
                while(opcM != 3)
                {
                    cout<<"\n\t1)Accelerar\n\t2)Imprimir\n\t3)Salir\n\t4)Turbo\n\tOpc: ";
                    cin>>opcM;
                    switch (opcM)
                    {
                        case 1:
                            toreto.accelerar();
                            break;
                        case 2:
                            toreto.imprimir();
                            break;
                        case 3:
                            toreto.~cToreto();
                            break;
                        case 4:
                            toreto.turbo();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                break;
            }
            default:
            {   //Opcion para salir
                if(opc == 0)
                    break;
                else
                    cout<<"Opcion no valida\n";
                break;
            }
        }
    }
    return 0;
}
