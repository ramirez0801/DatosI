#include <iostream>

using namespace std;

//Clase Nodo
class cNodo
{
    private:
        int dato;
        cNodo *sig,*ant;
    public:
        cNodo();
        ~cNodo();
        void agregarSig(float);
        float eliminarSig();
        friend class cLista;
};

cNodo::cNodo()
{ 
}

cNodo::~cNodo()
{
}

void cNodo::agregarSig(float dato)
{
    cNodo *pnn = new cNodo;
    pnn->dato = dato;
    pnn->sig = this->sig;
    pnn->ant = this;
    this->sig->ant = pnn;
    this->sig = pnn;
}

float cNodo::eliminarSig()
{
    cNodo *pnn = new cNodo;
    pnn = this->sig;
    this->sig = pnn->sig;
    pnn->sig->ant = this;
    pnn->sig = NULL;
    pnn->ant = NULL;
    return pnn->dato;
    ///delete pnn;
}

//Clase para lista
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
        void mostrar();
        float eliminarInicio();
        float eliminarFinal();
};

cLista::cLista()
{
    Inicio.sig = &Final;
    Final.ant = &Inicio;
}

cLista::~cLista()
{
}

void cLista::insertarInicio(float _dato)
{
    Inicio.agregarSig(_dato);
    //cNodo *pnn = new cNodo;
    //cout<<"Inci1 "<<Inicio.sig->dato<<endl;
    // pnn->sig = Inicio.sig;
    // Inicio.sig->ant = pnn;
    // Inicio.sig = pnn;
    // pnn->ant = &Inicio;
    // pnn->dato = _dato;
}

void cLista::insertarFinal(float _dato)
{
    Final.ant->agregarSig(_dato);
    // cNodo *pnn = new cNodo;
    // //cout<<"Final "<<Final.ant->dato;
    // pnn->dato = _dato;
    // pnn->sig = &Final;
    // Final.ant->sig = pnn;
    // Final.ant = pnn;
}

int cLista::tamanio()
{
    int i;
    cNodo *p = Inicio.sig;
    //Recorre la lista y cuenta los nodos encontrados
    for(i = 0; p != &Final; i++) 
    {
        p = p->sig;
    }
    return i;
}

bool cLista::vacio()
{
    //Si el nodo siguiente de la cabecera inicio es el nodo fina, la lista esta vacia
    if(Inicio.sig == &Final) return true;
    return false;
}

void cLista::vaciar()
{
    cNodo *aux = new cNodo;
    cNodo *pn = new cNodo;
    pn = Inicio.sig;
    for(int i = 0; pn != &Final; i++)
    {
      aux = pn;
      pn = pn->sig;
      delete aux;
    }

}

void cLista::mostrar()
{
    cNodo *pnn = new cNodo;
    if(vacio())
        cout<<"\n\t---Lista vacia---\n";
    else
    {
        pnn = Inicio.sig;
        for(int i = 1; pnn != &Final; i++)
        {
            cout<<"Dato["<<i<<"]: "<<pnn->dato<<endl;
            pnn = pnn->sig;
        }
    }
}

float cLista::eliminarInicio()
{
    float dato;
    dato = Inicio.eliminarSig();
    return dato;
}

float cLista::eliminarFinal()
{
    float dato;
    dato = Final.ant->ant->eliminarSig();
    return dato;
}

int main(int argc, char const *argv[])
{
    int num = 0;
    float dato;
    cLista *list = new cLista;
    list->insertarInicio(5);
    list->insertarInicio(6);
    list->insertarFinal(10);
    list->mostrar();
    num = list->tamanio();
    cout<<"Tamanio: "<<num<<'\n';
    dato = list->eliminarInicio(),
    cout<<"Dato eliminado inicio: "<<dato<<'\n';
    dato = list->eliminarFinal(),
    cout<<"Dato eliminado final: "<<dato<<'\n';
    list->mostrar();
    list->vaciar();
    list->mostrar();

    //cout<<"\n\t******\n\t1)Agregar al inicio\n\t2)Agregar al final\n\t3)Mostrar\n\t4)Tamanio\n\t5)Eliminar inicio\n\t6)Eliminar final\n\t7)Vaciar";    

    cout<<"Exito"<<endl;    
    return 0;
}
