/*
EJERCICIO 3
Autor: Matías Tello S.
Fecha: 27 de julio de 2026

Ejercicio 3: Descuento por edad

Enunciado: Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar según estas 
reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor a 18, el precio es 2.50 dólares. 
El algoritmo debe mostrar el precio final.
*/

/*
MODELO E/P/S
Entrada: 
    La edad de la persona
Proceso: 
    Leer la edad de la persona
    Evaluar mediante una condición si la edad es mayor/igual a 18 o menor a 18
    Asignar el precio de 5 dólares o 2.50 dólares según corresponda a la condición
Salida:
    El precio final a pagar
*/

#include <iostream>
using namespace std;

int main() {
    int edad;
    double precio;

    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    if (edad >= 18) {
        precio = 5.00;
    } else {
        precio = 2.50;
    }

    cout << "El precio a pagar es: $" << precio << endl;

    return 0;
}