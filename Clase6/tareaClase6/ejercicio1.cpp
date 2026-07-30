/*
Números pares hasta N
EJERCICIO 1
Autor: Matías Tello S.
Fecha: 30 de Julio de 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
muestre en pantalla todos los números pares desde 1 hasta N.
Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
de error.

*/

#include <iostream>
using namespace std;

int main (){
    int N;

    cout << "Ingrese un numero positivo: ";
    cin >> N;

    if (N<=0) {
        cout << "ERROR. Ingrese un numero positivo.";
    } else {
        cout << "Numero pares desde 1 hasta " << N << ":" << endl;

        int i=2;

        while (i <= N){
            cout << i << " ";
            i=i+2;

        }
    }
    
    return 0;

}
