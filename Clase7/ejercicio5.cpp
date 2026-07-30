/*
FUNCIONES
EJERCICIO 2
Autor: Matias Tello S.
Fecha: 27 de julio 2026

Enunciado: Desarrollar un programa en C++ que permita ingresar 4 numeros enteros.
El programa debe usar funciones para:
    - leer los 4 numeros
    - calcular la suma
    - calcular el promedio
    - mostrar los resultados
El objetivo es comprender como dividir un problema en varias funciones con tareas claras.

*/

/*
E/P/S
ENTRADA:
    4 numeros enteros ingresados por usuario.

PROCESO:
    Leer los 4 numeros
    Calcular la suma
    Calcular el promedio
    Mostrar los resultados en pantalla
SALIDA:
    La suma de los 4 numeros
    El promedio de los 4 numeros

*/

/*
PLANTILLA MENTAL PARA MEMORIZAR

-Funcion de Tipo retorno
 tipo nombreFuncion(parametros){
    /intrucciones
    return resultado;
 }

-Funcion de Tipo void
 void nombreFuncion(parametros){
    /intrucciones
 }
*/

#include <iostream>
using namespace std;

// Firma de las funciones

void leerCuatroNumeros(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main()
{
    // Variables donde se guardaran los numeros
    int n1, n2, n3, n4;

    // Varioables para resultados
    int suma;
    double promedio;

    // Llamamos a la funcion que lee los 4 numeros
    leerCuatroNumeros(n1, n2, n3, n4);

    // Llamamos a la funcion que calcula la suma
    suma = calcularSuma(n1, n2, n3, n4);

    // Llamamos a la funcion que calcula el promedio

    promedio = calcularPromedio(suma);

    // Mostramos los resultados
    mostrarResultados(suma, promedio);

    return 0;
}

// FUNCIONES

// Esta funcion lee 4 numeros y los guarda en las variables originales
void leerCuatroNumeros(int &a, int &b, int &c, int &d)
{
    cout << "Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}

// Esta funcion recibe 4 numeros y devuelve la suma
int calcularSuma(int a, int b, int c, int d)
{
    return a + b + c + d;
}

// Esta funcion recibe la suma y devuelve el promedio
double calcularPromedio(int suma)
{
    return suma / 4.0;
}

// Esta funcion solo muestra resultados, por eso es de tipo void
void mostrarResultados(int suma, double promedio)
{
    cout << "Resultados: " << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}