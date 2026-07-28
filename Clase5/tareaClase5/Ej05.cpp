/*
EJERCICIO 5
Autor: Matías Tello S.
Fecha: 27 de julio de 2026

Ejercicio 5: Reparto de horas en semanas, días y horas

Enunciado: Escribe un algoritmo que reciba un número entero de horas totales (un valor no negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.
*/

/*
MODELO E/P/S
Entrada: 
    Un número entero no negativo que representa las horas totales
Proceso: 
    Leer la cantidad de horas totales
    Dividir las horas totales para 168 y extraer la cantidad de semanas
    Tomar el residuo de la división anterior y dividirlo para 24 para extraer los días
    Determinar las horas sobrantes finales con el residuo de la última división
Salida:
    Cantidad de semanas
    Cantidad de días
    Cantidad de horas sobrantes
*/

#include <iostream>
using namespace std;

int main() {
    int horasTotales, semanas, dias, horasSobrantes;

    cout << "Ingrese la cantidad de horas totales: ";
    cin >> horasTotales;

    if (horasTotales < 0) {
        cout << "Por favor, ingrese un número entero no negativo." << endl;
        return 1; // Salida con error
    }

    semanas = horasTotales/168;
    dias = (horasTotales%168)/24;
    horasSobrantes = horasTotales%24;

    cout << "Semanas: " << semanas << endl;
    cout << "Dias: " << dias << endl;
    cout << "Horas sobrantes: " << horasSobrantes << endl;

    return 0;
}