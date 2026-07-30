/*
Suma de 5 números
EJERCICIO 2
Autor: Matías Tello S.
Fecha: 30 de Julio de 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
suma total de esos valores.
Al final, el programa debe mostrar:
- la suma total
- y cuántos números fueron ingresados

*/


#include <iostream>
using namespace std;

int main(){
    int i, numero, suma;

    suma = 0;

    for (i = 1; i <=5; i++){
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        suma = suma + numero;   
    }
    
    cout << "La suma total de los 5 numeros ingresados es: " << suma << endl;

    return 0;

}