#include <iostream>

using namespace std;

class CCadena{
    private:
        char buffer[128];
    public:
        void leer();
        void imprimir();
        int tamanio();
        int cuenta(char);
        void concatena(char*);
};

void CCadena::leer()
{
    cout<<"Escriba la palabra: ";
    cin.getline(buffer,128);
}

void CCadena::imprimir()
{
    cout<<buffer<<endl;
}

int CCadena::tamanio()
{
    int i;
    for(i = 0; buffer[i] != '\0'; i++)
        buffer[i];

    return i;
}

int CCadena::cuenta(char contar)
{
    int c = 0;
    for(int i = 0; buffer[i] != '\0'; i++)
    {   
        if(buffer[i] == contar)
            c++;
        
    }
    return c;
}

void CCadena::concatena(char *plb2)
{
    int i;
    for(i = 0; buffer[i] != '\0'; i++);
    
    for(int j = 0; plb2[j] != '\0'; j++)
    {
        buffer[i] = plb2[j];
        i++;
    }
}
void salto()
{
    system("pause");
    system("cls");
}

int main()
{
    int opc = 1, aux;
    char aux1[30], aux2;
    CCadena cadena;
    cadena.leer();
    while(opc != 0)
    {
        cout<<"\n\t1)Tamanio\n\t2)Contar una letra\n\t3)Concatenar una palabra\n\t0)Salir\n\tOpc: ";
        cin>>opc;
        switch (opc)
        {
        case 0:
            salto();
            cout<<"\n\tSALIENDO...";
            break;
        case 1:
            aux = cadena.tamanio();
            cout<<"Tamanio de la cadena: "<<aux<<endl;
            salto();
            break;
        case 2:
            cout<<"Escriba la letra a buscar: ";
            cin>>aux2;
            aux = cadena.cuenta(aux2);
            cout<<"Letras contadas: "<<aux<<endl;
            salto();
            break;

        case 3: 
            cout<<"Escriba la palabra a concatenar: ";
            cin>>aux1;
            cadena.concatena(aux1);
            cadena.imprimir();
            salto();
            break;
        default:
            cout<<"\n---opcion no valida---";
            salto();
            break;
        }

    }
    
    return 0;
}
