#include <iostream>

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
    char tmp[25] = { "" };
    for (i; psz[i] != '\0'; i++);
    //i = i - 1;
    cout<<"i: "<<i<<endl;
    i = i - 1;
    while (i >= 0)
    {
        tmp[j] = psz[i];
        i--;
        j++;
    }
    psz = tmp;
    cout <<"TMP1: "<<psz;
    

    // while (j > 0)
    // {
    //     *psz = tmp[j];
    //     cout << tmp[j];
    //     i++;
    //     psz++;
    //     j--;
    // }
    
}





main(){
    char plba[25] = {"Hola mundo"},l = {'o'};
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
    //cout<<"Palabra: " <<plba;
}