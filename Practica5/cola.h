#include "lista.h"

class cCola
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

void cCola::push(float _dato)
{
    list.insertarInicio(_dato);
}

float cCola::pop()
{
    float d;
    d = list.eliminarFinal();
    return d;
}

int cCola::size()
{
    return list.tamanio();
}

bool cCola::isEmpty()
{
    return list.vacio();
}

bool cCola::Full()
{
    return false;
}
        
void cCola::clean()
{
    list.vaciar();
}

void cCola::show()
{
    list.mostrar();
}