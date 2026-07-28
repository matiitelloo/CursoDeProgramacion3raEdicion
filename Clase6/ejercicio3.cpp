/*
ARREGLOS 1D
EJERCICIO 1
Autor: Matías Tello S.
Fecha: 24 de Julio de 2026

Enunciado: Realizar un programa en C++ que permita ingresar 5 notas enteras en un arreglo.
    Luego, el programa debe mostrar todas las notas ingresadas, una por una, indicando
    la posicion en la que fueron guardadas.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 5 enteros para guardar las notas
    int notas[5];

    // Variable que usaremos para recorrer el arreglo
    int i;

    // Cargar los datos

    for (i = 0; i < 5; i++)
    {
        cout << "Ingrese la nota: " << i + 1 << ": ";
        // Guardamos la nota en la posicion i del arreglo
        cin >> notas[i];
    }
    cout << endl; // un salto de linea puro
    cout << "Notas registradas: " << endl;

    // Impresion de datos

    for (i = 0; i < 5; i++)
    {
        // Mostramos la posicion en el valor guardado en esa posicion
        cout << "Indice " << i << ": " << notas[i] << endl;
    }
    return 0;
}