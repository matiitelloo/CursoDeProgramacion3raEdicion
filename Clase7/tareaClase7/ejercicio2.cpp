/*
Arreglos 1D y búsqueda secuencial en C++
EJERCICIO 2
Autor: Matias Tello S.
Fecha: 1 de agosto 2026

Enunciado: Desarrolle un programa en C++ que permita ingresar 6 cantidades enteras de
productos vendidos durante el día en un arreglo.
Luego, el programa debe:
1. mostrar todas las cantidades ingresadas
2. pedir al usuario una cantidad específica para buscar
3. indicar si esa cantidad se encuentra dentro del arreglo
4. mostrar la posición donde aparece por primera vez, o un mensaje indicando
que no fue encontrada
*/

#include <iostream>
using namespace std;

int main()
{

    int productos[6];

    int i;

    int buscado;

    int posicion = -1;

    bool encontrado = false;


    for (i = 0; i < 6; i++)
    {
        cout << "Ingrese la cantidad " << i + 1 << " de productos vendidos: ";
        cin >> productos[i];
    }

    cout << endl;
    
    cout << "Las cantidades registradas son:" << endl;

    for (i = 0; i < 6; i++)
    {
        cout << "Cantidad " << i + 1 << ": " << productos[i] << endl;
    }

    cout << "Ingrese la cantidad que desea buscar: ";
    cin >> buscado;

    for (i = 0; i < 6; i++)
    {
        if (productos[i] == buscado && encontrado == false)
        {
            encontrado = true;
            posicion = i;
        }
    }

    cout << endl;

    if (encontrado == true)
    {
        cout << "Cantidad encontrada en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "Cantidad no encontrada en el arreglo." << endl;
    }

    return 0;
}