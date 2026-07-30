/*
Tabla de multiplicar repetitiva
EJERCICIO 3
Autor: Matías Tello S.
Fecha: 30 de Julio de 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
tabla de multiplicar del 1 al 10.
Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada
correctamente.

*/

#include <iostream>
using namespace std;

int main(){

    int i, numero;

    cout << "Ingrese un numero entero para mostrar su tabla de multiplicar: ";
    cin >> numero;


    for (i = 1; i <= 10; i++) {
    cout << numero << "x"<< i << "=" << numero * i << endl;
    }
    cout << "La tabla fue generada correctamente.";

}