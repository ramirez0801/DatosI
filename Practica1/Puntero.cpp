// Puntero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int Potencia(int iBase, int iExp) {
    int num = 1;
    if (iExp == 0)
        return 1;
    else
    {
        for (int i = 1; i <= iExp; i++)
            num = num * iBase;

        return num;
    }
}

void Potencia2(int *pBase, int iExp) {
    int num = 1;
    
    if (iExp == 0)
        *pBase = 1;
    else
    {
        for(int i = 1; i <= iExp; i++)
            num = num * *pBase;
        *pBase = num;

    }
}

int main()
{
    int n, num = 5;
    int iX = 5, iY = 10;
    int* pA;
    pA = &iX;
    cout << "iX: "<<iX << endl;
    cout << "*pA: " << *pA << endl;
    cout << "&iX: " << &iX << endl;
    cout << "pA: " << pA << endl;

    pA = &iY;
    cout << "iY: " << iY << endl;
    cout << "*pA: " << *pA << endl;
    cout << "&iY: " << &iY << endl;
    cout << "pA: " << pA << endl;

    cout << "----" << endl;

    n = Potencia(5, 0);
    cout << n << endl;
    n = Potencia(5, 1);
    cout << n << endl;
    n = Potencia(5, 2);
    cout << n << endl;
    n = Potencia(5, 3);
    cout << n << endl;

    cout << "----"<<endl;

    Potencia2(&num, 0);
    cout << num << endl;
    num = 5;
    Potencia2(&num, 1);
    cout << num << endl;
    num = 5;
    Potencia2(&num, 2);
    cout << num << endl;
    num = 5;
    Potencia2(&num, 3);
    cout << num << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
