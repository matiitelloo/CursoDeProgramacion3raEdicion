/*
EJERCICIO DE REPASO 5
Autor: Matías Tello S.
Fecha: 22 de Julio de 2026

Ejercicio5: Menu repetitivo con do while

Enunciado: Elaborar un programa en C++ que muestre un menú repetitivo con las siguientes opciones:
    1. Sumar dos números
    2. Mosrtrar la tabla de multiplicar de un número
    3. Salir del programa

El programa debe repetirse hasta que el usuario elija la opcion 3
Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de error y volver a mostrar el menú.
*/

/*
MODELO E/P/S
Entrada: 
    Una opcion del menu
    Dos numeros para sumar o un numero para mostrar su tabla de multiplicar
Proceso: 
    Mostrar el menu
    Leer la opcion del usuario
    Si la opcion es 1, pedir dos numeros y mostrar su suma
    Si la opcion es 2, pedir un numero y mostrar su tabla de multiplicar
    Si la opcion es 3, salir del programa
Salida:
    Resultado de la suma o la tabla de multiplicar, o un mensaje de error si la opcion es invalida
*/

#include <iostream>
using namespace std;

int main() {
    //Declarar variables
    int opcion, num1, num2, suma, i, numero;

    do {
        //Mostrar el menu principal
        cout << "============ MENU ============:" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Mostrar la tabla de multiplicar" << endl;
        cout << "3. Salir del programa" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        //Evaluamos la opcion elegida
        if (opcion == 1) { //== Significa comparacion a diferencia de = que es asignacion
            //Pedimos dos numeros para sumarlo
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            //Realizamos la suma
            suma = num1 + num2;

            //Mostramos el resultado
            cout << "La suma es: " << suma << endl;

        }else if (opcion == 2) {
            //Pedimos un numero para mostrar su tabla de multiplicar
            cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
            cin >> numero;

            //Mostramos la tabla del 1 al 10 usando un for
            for (i = 1; i <= 10; i++) {
                cout << numero << "x"<< i << "=" << numero * i << endl;
            }
        }else{
            //Si la opcion es invalida, mostramos un mensaje de error
            cout << "Opcion invalida, por favor seleccione una opcion valida." << endl;
        }

        //El numero seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;

}