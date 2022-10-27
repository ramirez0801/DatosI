#include <iostream>

using namespace std;


class cPilaEstatica
{
    private:
        int MAX = 50;
        int arr[50], index = 0;
    public:
        void push(float);
        float pop();
        bool isFull();
        bool isEmpty();

};

void cPilaEstatica::push(float nd)
{
    arr[index] = nd;
    index++;
}

float cPilaEstatica::pop()
{
    return arr[--index];
}

bool cPilaEstatica::isFull()
{
    return (index > 50) ? true : false;
}

bool cPilaEstatica::isEmpty()
{
    return index == 0 ? true : false;
}

