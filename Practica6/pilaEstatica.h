#include <iostream>

using namespace std;

const int Tope = 50;

class cPilaEstatica
{
    private:
        int arr[Tope], index = 0;
    public:
        void push(float);
        float pop();
        bool isFull();
        bool isEmpty();
        void vaciar();
        void mostrar();
};

void cPilaEstatica::push(float nd)
{
    if(!isFull())
    {
        arr[index] = nd;
        index++;
    }
    else
        cout<<"Pila llena\n";
}

float cPilaEstatica::pop()
{
    if(isEmpty())
    {
        cout<<"Pila Vacia\n";
        return 0;
    }
    else
    {
        int tmp = arr[--index];
        return tmp;
    }
}

bool cPilaEstatica::isFull()
{
    return (index > Tope) ? true : false;
}

bool cPilaEstatica::isEmpty()
{
    return index == 0 ? true : false;
}

void cPilaEstatica::vaciar()
{

}

void cPilaEstatica::mostrar()
{
    for(int i = 0; i<index; i++) cout<<"Dato["<<i<<"]: "<<arr[i]<<endl;
}