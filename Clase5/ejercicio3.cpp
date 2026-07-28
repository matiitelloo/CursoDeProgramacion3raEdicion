/*
EJERCICIO DE REPASO 3
Autor: Matías Tello S.
Fecha: 22 de Julio de 2026

Ejercicio3: Contador con while.
Enunciado: Elaborar un programa en C++ que solicite al usuario un numero entero positivo N y muestre en
pantalla los numeros desde 1 hasta N, utilizando un bucle while.

Si el usuario ingresa un numero negativo, el programa debe mostrar un mensaje de error y terminar.
*/

/*
MODELO E/P/S

Entrada: Un numero entero positivo N
Proceso: 
    leer el valor de N
    Verificar si N es positivo
    Si no es positivo, mostrar mensaje de error
    Repetir mientras el contador sea menor o igual a N
    Mostrar el valor del contador
    Aumentar el contador en 1 en cada vuelta

Salida:
    Los numeros desde 1 hasta N
    Un mensaje de error si el numero ingresado no es valido

*/

#include <iostream>
using namespace std;

int main() {
    //Declarar variables
    int N, contador;

    //Pedir al usuario que ingrese un numero entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    //Verificar si el numero ingresado es positivo
    if (N <= 0) {
        //Si el numero no es valido, mostramos un mensaje de error
        cout << "Error: El numero ingresado debe ser mayor que cero." << endl;
    
    }else {
       //Inicializamos el contador en 1
        contador = 1;

        //Repetimos mientras el contador sea menor o igual a N
        while (contador <= N) {
            //Mostramos el valor del contador
            cout << contador << endl;
            //Aumentamos el contador en 1
            contador++;
        }
    }
    
    return 0;
}