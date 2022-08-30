#include <iostream>

using namespace std;

int Potencia( int iBase, int iExp ){
    if(iExp == 0)
        return 1;
    else
    {
        iBase = iBase * Potencia(iBase, iExp-1);
        return iBase;
    }
}

void Potencia2(int *pBase, int iExp){
    int num = *pBase;
    if(iExp == 0)
        cout<<1<<endl;
    else
    {
        *pBase = *pBase * num;
        cout<<*pBase<<endl;
    }
}

main()
{
    int n, num = 5;
    n = Potencia(5,0);
    cout<<n<<endl;
    n = Potencia(5,1);
    cout<<n<<endl;
    n = Potencia(5,2);
    cout<<n<<endl;
    n = Potencia(5,3);
    cout<<n<<endl;

    Potencia2(&num,0);
    Potencia2(&num,1);
    Potencia2(&num,2);
    Potencia2(&num,3);
}