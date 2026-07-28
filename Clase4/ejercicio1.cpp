/*
EJERCICIO DE REPASO 1
Autor: Matías Tello S.
Fecha: 20 de Julio de 2026

Enunciado: Pide dos enteros y muestra la suma.

*/

#include <iostream>
using namespace std;

int main() {
    //Aqui estoy declarando mis variables a y b de tipo entero
    int a, b, suma;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    //Calculo la respuesta.
    suma = a + b;
    cout << "La suma es: " << suma << endl;

    return 0;
} 