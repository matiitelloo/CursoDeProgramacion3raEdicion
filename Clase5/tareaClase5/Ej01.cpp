/*
EJERCICIO 1
Autor: Matías Tello S.
Fecha: 27 de julio de 2026

Ejercicio 1: Conversión de temperatura

Enunciado: Escribe un algoritmo que reciba una temperatura en grados Celsius y la convierta a grados Fahrenheit. 
El algoritmo debe mostrar el valor final en Fahrenheit. Usa la conversión estándar entre Celsius y Fahrenheit, 
usando la fórmula F=(C*9/5)+32.
*/

/*
MODELO E/P/S
Entrada: 
    Temperatura en grados Celsius
Proceso: 
    Leer la temperatura de entrada
    Calcular el equivalente aplicando la conversión a Fahrenheit
Salida:
    El valor final de la temperatura en grados Fahrenheit
*/

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0/5.0) + 32;

    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;

    return 0;
}