#include "arbol.h"

int main(int argc, char const *argv[])
{
    cArbol arbol;

	arbol.insertar(10);
	arbol.insertar(19);
	arbol.insertar(3);
	arbol.insertar(8);
	arbol.insertar(16);
	cout<<"\nInorden: \n";
	arbol.inorden();
	cout << "\nPostorden\n";
	arbol.postorden();
	cout<<"\nPreorden: \n";
	arbol.preorden();

	arbol.eliminacion(3);
	cout<<"\nInorden: \n";
	arbol.inorden();

	cout << "\nExito\n";

    return 0;
}
