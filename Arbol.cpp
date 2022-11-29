// Arbol.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "arbol.h"
using namespace std;



int main()
{
	cArbol arbol;

	arbol.insertar(10);
	arbol.insertar(9);
	arbol.insertar(3);
	arbol.insertar(8);
	arbol.insertar(16);

	arbol.inorden();
	cout << "\n";
	arbol.postorden();
	cout << "\nExito\n";


}

