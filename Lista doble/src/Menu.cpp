#include "Menu.h"


Menu::Menu()
{
     ListaDoble *listaD = new ListaDoble;
     int opc,d,opc1,opc2;
     do
    {
        cout<<"\n\t**Menu**"<<endl;
        cout<<"\t1) Insertar"<<endl;
        cout<<"\t2) Ver lista"<<endl;
        cout<<"\t3) Eliminar"<<endl;
        cout<<"\t4) Vaciar lista"<<endl;
        cout<<"\t5) Buscar"<<endl;
        cout<<"\t0) Salir"<<endl;
        cout<<"\t Opcion: ";
        cin>>opc;

        switch(opc)
        {
            case 1:
                 cout<<"\n\t1)Insertar al pricipio\n\t2)Insertar en medio\n\t3)Insertar al final"<<endl;
                 cout<<"\tOpcion: ";
                 cin>>opc2;
                 switch(opc2)
                 {
                    case 1:
                        cout<<"\nDigite el elemento a insertar"<<endl;
                        cin>>d;
                        listaD->insertarP(d);
                        break;
                    case 2:
                        cout<<"\nDigite el elemento a insertar"<<endl;
                        cin>>d;
                        listaD->insertarM(d);
                        break;
                    case 3:
                        cout<<"\nDigite el elemento a insertar"<<endl;
                        cin>>d;
                        listaD->insertarU(d);
                        break;
                    default:
                        cout<<"\n\tOpcion no valida"<<endl;
                        break;
                }

                 break;
            case 2:
                 cout<<"\n\t1)Del primero al ultimo elemento\n\t2)Del ultimo al primer elemnto"<<endl;
                 cout<<"\n\tOpcion: ";
                 cin>>opc1;
                 switch(opc1)
                 {
                    case 1:
                        cout<<endl;
                        listaD->mostrarPaU();
                        break;
                    case 2:
                        cout<<endl;
                        listaD->mostrarUaP();
                        break;
                    default:
                        cout<<"\n\tOpcion no valida"<<endl;
                        break;
                 }
                 cout<<endl;
                 break;
            case 3:
                 if(listaD->h == NULL)
                 {
                     cout<<"\n\tLista vacia"<<endl;
                 }
                 else
                {
                    cout<<"\nDigite el elemento a eliminar: "<<endl;
                     cin>>d;
                     listaD->eliminar(d);
                }
                 break;
            case 4:
                 listaD->vaciar();
                 break;
            case 5:
                cout<<"\n\tElemento a buscar: ";
                cin>>d;
                listaD->buscar(d);
                break;
            default:
                if(opc != 0)
                    cout<<"\n\tOpcion no valida"<<endl;
                break;

        }
    }while(opc!=0);

    cout<<"Saliendo!"<<endl;


}

Menu::~Menu()
{
    //dtor
}
