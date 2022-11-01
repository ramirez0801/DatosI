#include <iostream>

using namespace std;


class cColaEstatica
{
    private:
        int arr[50], ie, il, cont = 0;
    public:
        void push(float);
        float pop();
        bool isFull();
        bool isEmpty();
        void mostrar();
};

void cColaEstatica::push(float nd)
{
    arr[ie] = nd;
    ie++;
    ie = ie % 50;
    cont++;
    cout<<"IE: "<<ie<<endl;
}

float cColaEstatica::pop()
{
    float R;
    R = arr[il];
    il++;
    il %= 50;
    cont--;
    return R;
}

void cColaEstatica::mostrar()
{
    for(int i = 0; i<cont; i++)
    {
        cout<<"Dato: ["<<i<<"]: "<<arr[i]<<endl;
    }
}
