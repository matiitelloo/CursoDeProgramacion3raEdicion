/*
Menú repetitivo con switch
EJERCICIO 4
Autor: Matías Tello S.
Fecha: 30 de Julio de 2026

Enunciado: Elaborar un programa en C++ que muestre el siguiente menú:
1. Mostrar el doble de un número
2. Mostrar el triple de un número
3. Salir
El programa debe repetirse hasta que el usuario elija la opción 3.
Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
error y volver a mostrar el menú.

*/

#include <iostream>
using namespace std;

int main() {

    int opcion, num, doble, triple;

    do{
        cout << "============ MENU ============:" << endl;
        cout << "1. Mostrar el doble de un numero" << endl;
        cout << "2. Mostrar el triple de un numero" << endl;
        cout << "3. Salir del programa" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion){
        case 1:
            
            cout << "Ingrese un numero: ";
            cin >> num;
            doble = num*2;
            cout << "El doble de " << num << " es: " << doble << endl;
            break;
        case 2:
            
            cout << "Ingrese un numero: ";
            cin >> num;
            triple = num*3;
            cout << "El triple de " << num << " es: " << triple << endl;
            break;        
        case 3:
        
            cout << "Saliendo del programa..." << endl;
            break; 
        default:
            cout << "Opcion invalida, por favor seleccione una opcion valida." << endl;
        break; 
        }

    }while (opcion != 3);

    return 0;
}