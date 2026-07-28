/*
EJERCICIO DE REPASO 2
Autor: Matías Tello S.
Fecha: 20 de Julio de 2026

Enunciado: Pide una base y una altura de un rectangulo (enteros) y calcula el area 

*/

#include <iostream>

using namespace std;

int main() {
    //Declarar variables
    int base, altura, area;

    //Ingreso datos
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    //CALCULOS
    area = base * altura;

    cout << "El area del rectangulo es: " << area << endl;

    return 0;
}