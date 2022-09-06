#include <iostream>
//Emmanuel Ramirez Garcia
//05/09/22

using namespace std;

int Tamanio(char *pc)
{
    int i;
    for(i = 0; *pc != '\0'; i++)
        pc++;

    return i;
}

int cuenta(char *pszCadena, char contar)
{
    int c = 0;
    for(int i = 0; pszCadena[i] != '\0'; i++)
    {   
        if(pszCadena[i] == contar)
            c++;
        //pszCadena++;
    }
    return c;
}

void alReves(char *psz)
{
    int i = 0, j = 0; 
    for(i = 0; *psz != '\0'; psz++);    
    for(j = 0; *psz >= '\0'; j--)
    {
        cout<<*psz;
        psz--;
    }
}




main(){
    char plba[25] = {"Hola mundo"},l = {'o'}, pl1[15] ={"Hola"}, pl2[15] = {"mundo"} ;
    int cont = 0;
    //cout<<"Ingrese la palabra: ";

    //cin.getline(plba, 25);
    cont = Tamanio(plba);
    cout<<"Tamanio: "<<cont<<endl;

    //cout<<"Letra a contar: ";
    //cin>>l;
    cont = cuenta(plba, l);
    if(cont == 0)
        cout<<"No encontrada"<<endl;
    else
        cout<<"Contadas: "<<cont<<endl;

    alReves(plba);
}