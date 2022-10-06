#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    h = NULL;
    t = NULL;
    //ctor
}

ListaDoble::~ListaDoble()
{
    //dtor
}

void ListaDoble::insertarP(int d)
{
    //Insertar al pricipio de la lista
    Nodo *tmp = new Nodo;
    tmp->dato = d;
    if(h == NULL)
    {
        h = tmp;
        t = h;
    }
    else
    {
        tmp->ant = NULL;
        tmp->sig = h;
        h->ant = tmp;
        h = tmp;
    }
    cout<<"\n\tElemento insertado"<<endl;

}

void ListaDoble::insertarM(int d)
{
    //Insertar en medio de la lista
    Nodo *tmp = new Nodo;
    Nodo *aux = new Nodo;
    int elem;
    tmp->dato = d;
    aux = buscar(d);
    if(h == NULL)
    {
        cout<<"\n\tInsertando al principio"<<endl;
        insertarP(d);
    }
    else
    {
        cout<<"Digite el elemento\n(se insertara antes del elemento seleccionado)"<<endl;
        cout<<"Elemento: ";
        cin>>elem;
        aux = buscar(elem);
        if(aux == h)
        {
            cout<<"\n\tInsertando al principio"<<endl;
            insertarP(d);
        }
        else if(aux != NULL)
        {
            tmp->sig = aux;
            tmp->ant = aux->ant;
            aux->ant->sig = tmp;
            aux->ant = tmp;
            cout<<"\n\t Elemento insertado"<<endl;
        }

    }
}

void ListaDoble::insertarU(int d)
{
    //Insertar al final de la lista

    Nodo *tmp = new Nodo;
    tmp->dato = d;
    if(h == NULL)
    {
        h = tmp;
        t = h;
    }
    else
    {
        tmp->sig = NULL;
        tmp->ant = t;
        t->sig = tmp;
        t = tmp;
    }
    cout<<"\n\t Elemento insertado"<<endl;
}

Nodo* ListaDoble::buscar(int d)
{
    //Buscar por elemento
    Nodo* aux = new Nodo;
    aux = h;
    bool band = true;
    if(h != NULL)
    {
        for(int i = 0;aux && band;i++)
        {
            if(aux->dato == d)
            {
                band = false;
                cout<<"\n\tElemento encontrado\n\tPosicion: "<<i<<endl;
                return aux;
            }
            else if(aux != NULL)
            {
                aux = aux->sig;
            }
            if(aux == NULL)
            {
                cout<<"\n\tElemento no encontrado"<<endl;
                return aux;
            }
        }
    }
    else
    {
        cout<<"\n\tLista vacia"<<endl;
    }
}

void ListaDoble::mostrarPaU()
{
    //Imprimir la lista del primero al ultimo
    Nodo *aux = new Nodo;
    aux = h;

    if(h != NULL)
    {
        while(aux != NULL)
        {
            cout<<"\t"<<aux->dato;
            aux = aux->sig;
        }
    }
    else
    {
        cout<<"\t\n Lista vacia"<<endl;
    }

}

void ListaDoble::mostrarUaP()
{
    //Imprimir la lista del ultimo al primero
    Nodo *aux = new Nodo;
    aux = t;

     if(h != NULL)
    {
        while(aux != NULL)
        {
            cout<<"\t"<<aux->dato;
            aux = aux->ant;
        }
    }
    else
    {
        cout<<"\t\n Lista vacia"<<endl;
    }
}

void ListaDoble::eliminar(int d)
{
    //Eliminar un elemento
    Nodo *aux = new Nodo;

    aux = buscar(d);
    if(aux == h && h->sig != NULL)
    {
        h = h->sig;
        h->ant = NULL;
        delete aux;
        cout<<"\n\tElemento eliminado"<<endl;
    }
    else if(aux == t && t->ant != NULL)
    {
        t = t->ant;
        t->sig = NULL;
        delete aux;
        cout<<"\n\tElemento eliminado"<<endl;
    }
    else if(aux != NULL && aux->sig != NULL)
    {
        aux->sig->ant = aux->ant;
        aux->ant->sig = aux->sig;
        delete aux;
        cout<<"\n\tElemento eliminado"<<endl;
    }
}

void ListaDoble::vaciar()
{
    //Elimina toda la lista
    if(h == NULL)
        cout<<"\n\t Lista vacia"<<endl;
    else
    {
        Nodo *aux = new Nodo;
        aux = h;
        while(h != NULL)
        {
            h = h->sig;
            delete aux;
        }
        cout<<"\n\tLista eliminada"<<endl;
    }

}


