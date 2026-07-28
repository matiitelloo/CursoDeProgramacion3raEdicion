/*
EJERCICIO 4
Autor: Matías Tello S.
Fecha: 27 de julio de 2026

Ejercicio 4: Nota final con ponderaciones

Enunciado: Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto. 
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale el 30%, el Parcial 2 
vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la nota final.
*/

/*
MODELO E/P/S
Entrada: 
    Calificación del Parcial 1
    Calificación del Parcial 2
    Calificación del Proyecto
Proceso: 
    Leer las tres calificaciones
    Multiplicar la nota del Parcial 1 por 0.30, la del Parcial 2 por 0.30 y la del Proyecto por 0.40
    Sumar los tres resultados ponderados
Salida:
    La nota final calculada
*/

#include <iostream>
using namespace std;

int main() {
    double p1, p2, proyecto, notaFinal;

    cout << "Ingrese la calificacion del Parcial 1: ";
    cin >> p1;

    cout << "Ingrese la calificacion del Parcial 2: ";
    cin >> p2;

    cout << "Ingrese la calificacion del Proyecto: ";
    cin >> proyecto;

    notaFinal = (p1*0.30) + (p2*0.30) + (proyecto*0.40);

    cout << "La nota final es: " << notaFinal << endl;

    return 0;
}