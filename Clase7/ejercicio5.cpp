/*
FUNCIONES
EJERCICIO 2
Autor: Matías Tello S.
Fecha: 27 de Julio de 2026

Enunciado: Realizar un programa en C++ que permita ingresar 4 numeros enteros.
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
    4 numeros enteros ingresados por el usuario.
PROCESO:
    Leer los 4 numeros
    Calcular la suma
    Calcular el promedio
    Mostrar los resultados en pantalla
SALIDA:

*/

/*
PLANTILLA MENTAL PARA MEMORIZAR
tipo nombreFuncion(parametros){
    /instrucciones
    return resultado;

}

*/


#include <iostream>
using namespace std;

//Firma de las funciones

void leerCuatroNumeros(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main