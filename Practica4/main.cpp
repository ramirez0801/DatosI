#include <iostream>

using namespace std;

class cNodo
{
    private:
        int dato;
        cNodo *sig,*ant;
    public:
        cNodo();
        ~cNodo();
        void agregar(float);
        void eliminar();
        friend class cLista;
};

cNodo::cNodo()
{ 
}

cNodo::~cNodo()
{
}

void cNodo::agregar(float dato)
{
    cNodo *pnn = new cNodo;
    pnn->dato = dato;
    pnn->sig = this->sig;
    pnn->ant = this;
    this->sig = pnn;
    cout<<"PNN: "<<pnn->dato<<endl;
}


class cLista
{
    private:
        cNodo Inicio;
        cNodo Final;
    public:
        cLista();
        ~cLista();
        void insertarInicio(float);
        void insertarFinal(float);
        int tamanio();
        bool vacio();
        void vaciar();
};

cLista::cLista()
{
    Inicio.sig = &Final;
    Final.ant = &Inicio;
}

cLista::~cLista()
{
}

void cLista::insertarInicio(float dato)
{
    Inicio.agregar(dato);
}

void cLista::insertarFinal(float dato)
{
    cNodo *pnn = new cNodo;
    pnn->dato = dato;
    pnn->sig = &Final;
    Final.sig = pnn;
}

int cLista::tamanio()
{
    return 0;
}

bool cLista::vacio()
{

}

void cLista::vaciar()
{

}



int main(int argc, char const *argv[])
{
    cNodo *nodo = new cNodo;
    cLista *pLista = new cLista;
    
    nodo->agregar(5);
    nodo->agregar(10);

    pLista->insertarInicio(8);
    cout<<"Exito"<<endl;    
    return 0;
}
