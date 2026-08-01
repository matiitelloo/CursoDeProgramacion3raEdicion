/*
Arreglos 1D y búsqueda secuencial en C++
EJERCICIO 1
Autor: Matias Tello S.
Fecha: 1 de agosto 2026

Enunciado: Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo.
Luego, el programa debe:
1. mostrar todas las edades registradas junto con su posición
2. pedir al usuario una edad adicional para buscar dentro del arreglo
3. indicar si esa edad fue encontrada o no
4. en caso de encontrarla, mostrar la posición de la primera coincidencia
*/

/*
MODELO E/P/S
Entrada: 
    8 edades enteras para el arreglo
    1 edad entera adicional a buscar
Proceso: 
    Declarar el arreglo de 8 posiciones
    Leer las 8 edades con un ciclo for
    Mostrar las edades registradas con su posicion
    Leer la edad a buscar
    Realizar la busqueda secuencial usando una variable bandera
    Guardar la posicion de la primera coincidencia
Salida:
    Lista de edades registradas con sus posiciones
    Mensaje indicando si fue encontrada y su posicion, o mensaje de no encontrada
*/

#include <iostream>
using namespace std;

int main()
{

    int edades[8];

    int i;

    int buscado;

    int posicion = -1;

    bool encontrado = false;


    for (i = 0; i < 8; i++)
    {
        cout << "Ingrese la edad " << i + 1 << ": ";
        cin >> edades[i];
    }

    cout << endl;
    
    cout << "Las edades registradas son:" << endl;

    for (i = 0; i < 8; i++)
    {
        cout << "Edad " << i + 1 << ": " << edades[i] << endl;
    }

    cout << "Ingrese la edad que desea buscar: ";
    cin >> buscado;

    for (i = 0; i < 8; i++)
    {
        if (edades[i] == buscado && encontrado == false)
        {
            encontrado = true;
            posicion = i;
            break;
        }
    }

    cout << endl;

    if (encontrado == true)
    {
        cout << "Edad encontrada en la posicion: " << posicion + 1 << endl;
    }
    else
    {
        cout << "Edad no encontrada en el arreglo." << endl;
    }

    return 0;
}