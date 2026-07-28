/*
EJERCICIO DE REPASO 4
Autor: Matías Tello S.
Fecha: 22 de Julio de 2026

Ejercicio4: Acumulador con for

Enunciado: Elaborar un programa en C++ que solicite al usuario 5 numeros enteros y calcule la suma total de
esos numeros utilizando un bucle for. 

El programa debe mostrar el resultado final de la suma.

*/

/*
MODELO E/P/S
Entrada: 5 numeros enteros ingresados por el usuario
Proceso: 
    Inicializar una variable suma en 0
    Repetir 5 veces:
        repetir un numero
        leer un numero
        sumar ese valor al acumulador
    Mostrar la suma total
Salida:
    La suma total de los 5 numeros ingresados
*/


#include <iostream>
using namespace std;

int main(){
    //Declarar variables
    int i, numero, suma;

    //Inicializar la variable suma en 0
    suma = 0;

    //Usamos un for porque sabemos que vamos a repetir 5 veces
    for(i = 1; i <= 5; i++){
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        //Acumulamos el numero ingresado en la suma total
        suma = suma + numero;
    }

    //Mostramos el resultado final de la suma
    cout << "La suma total de los 5 numeros ingresados es: " << suma << endl;

    return 0;
}