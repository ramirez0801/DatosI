#include <iostream>
#include "patrullaBlindada.h"
#include "toreto.h"
#include "taxi.h"
#include "miniMenu.h"
#include "lista.h"
#include "auto.h"

using namespace std;

int main(int argc, char const *argv[])
{
    menu men;
    cLista lista;
    int opc = 1; //Opcion principal
    while(opc!=0)
    {   //menu
        cout<<"\n\t1)Auto\n\t2)Patrulla\n\t3)Patrulla Blindada\n\t4)Taxi\n\t5)Toreto\n\t6)Mostrar lsita\n\t0)Salir\n\tOpc: ";
        cin>>opc;
        int  opcM = 0;//Opcion para el miniMenu
        switch (opc)
        {
            case 1:
            {   //Auto
                cAuto *Auto = new cAuto;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            Auto->accelerar();
                            break;
                        case 2:
                            Auto->imprimirV();
                            break;
                        case 3:
                            Auto->~cAuto();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                    lista.insertarInicio(Auto);
                }
                break;
            }
            case 2:
            {   //Patrulla
                cPatrulla *patru = new cPatrulla;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            patru->accelerar();
                            break;
                        case 2:
                            patru->imprimir();
                            break;
                        case 3:
                            patru->~cPatrulla();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                    lista.insertarInicio(patru);
                }
                break;
            }
            case 3:
            {   //Patrulla blindada
                cPatrullaBlin *patruBlin = new cPatrullaBlin;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            patruBlin->accelerar();
                            break;
                        case 2:
                            patruBlin->imprimir();
                            break;
                        case 3:
                            patruBlin->~cPatrullaBlin();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                lista.insertarInicio(patruBlin);
                break;
            }
            case 4:
            {   //Taxi
                cTaxi *taxi = new cTaxi;
                while(opcM != 3)
                {
                    opcM = men.show();
                    switch (opcM)
                    {
                        case 1:
                            taxi->accelerar();
                            break;
                        case 2:
                            taxi->imprimir();
                            break;
                        case 3:
                            taxi->~cTaxi();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                lista.insertarInicio(taxi);
                break;
            }
            case 5:
            {   //Carro de Toreto
                cToreto *toreto = new cToreto;
                while(opcM != 3)
                {
                    cout<<"\n\t1)Accelerar\n\t2)Imprimir\n\t3)Salir\n\t4)Turbo\n\tOpc: ";
                    cin>>opcM;
                    switch (opcM)
                    {
                        case 1:
                            toreto->accelerar();
                            break;
                        case 2:
                            toreto->imprimir();
                            break;
                        case 3:
                            toreto->~cToreto();
                            break;
                        case 4:
                            toreto->turbo();
                            break;
                        default:
                            cout<<"Opcion no valida\n";
                            break;
                    }
                }
                lista.insertarInicio(toreto);
                break;
            }
            case 6:
            {
                lista.mostrar();
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
