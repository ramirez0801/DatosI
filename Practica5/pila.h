#include "lista.h"


class cPila
{
    private:
        cLista list;
    public:
        void push(float);
        float pop();
        int size();
        bool isEmpty();
        bool Full();
        void clean();
        void show();
};

void cPila::push(float _dato)
{
    list.insertarInicio(_dato);
}

float cPila::pop()
{
    float d;
    d = list.eliminarInicio();
    return d;
}

int cPila::size()
{
    return list.tamanio();
}

bool cPila::isEmpty()
{
    return list.vacio();
}

bool cPila::Full()
{
    return false;
}
        
void cPila::clean()
{
    list.vaciar();
}

void cPila::show()
{
    list.mostrar();
}

