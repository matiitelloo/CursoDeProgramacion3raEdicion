/*
EJERCICIO 2
Autor: Matías Tello S.
Fecha: 27 de julio de 2026

Ejercicio 2: Área y perímetro de un rectángulo

Enunciado: Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos, debe calcular y mostrar el área y el perímetro del rectángulo.
*/

/*
MODELO E/P/S
Entrada: 
    La base del rectángulo
    La altura del rectángulo
Proceso: 
    Leer la base y la altura ingresadas
    Calcular el área multiplicando la base por la altura
    Calcular el perímetro sumando el doble de la base y el doble de la altura
Salida:
    El área calculada del rectángulo
    El perímetro calculado del rectángulo
*/

#include <iostream>
using namespace std;

int main (){

    double base, altura, area, perimetro;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2*(base + altura);

    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}