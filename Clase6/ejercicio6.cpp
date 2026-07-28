/*
EJERCICIO DE REPASO 6
Autor: Matías Tello S.
Fecha: 24 de Julio de 2026

Ejercicio6: Many simple con switch

Switch: es una estructura de seleccion que permite ejecutar diferentes bloques de codigo segun el valor de una
variable

Suele ser util cuando
    Hay varias opciones numericas o fijas
    Se quiere organizar mejor un menu
    
Diferencia con el if/else
    if/else sirve mas cuando las condiciones pueden ser variadas o complejas
    switch sirve mas cuando comparas una sola variable contra varios valores concretos

Enunciado: Elaborar un programa en C++ que muestre un menu con las siguientes opciones:
    1. Mostrar mensaje de bienvenida
    2. Mostrar el cuadrado de un numero
    3. Salir del programa

El programa debe repetirse hasta que el usuario elija la opcion 3

Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de error y volver a mostrar el menú.
*/

/*
MODELO E/P/S
Entrada: 
    Una opcion del menu
    Si elige una de las opciones se reealiza la accion correspondiente
Proceso: 
    Mostrar el menu
    Leer la opcion del usuario
    Evaluar la opcion con switch
    Ejecutar la accion
    Repetir hasta que el usuario elija la opcion 3
Salida:
    Mensaje de bienvenida
    La accion correspondiente a la opcion elegida
    Mensaje de error si la opcion es invalida
*/

#include <iostream>
using namespace std;

int main(){
    //Declarar variables
    int opcion, numero, cuadrado;

    //Usamos un do while porque queremos que el menu se muestre al menos una vez
    do{
        //Mostrar el menu
        cout << "============ MENU CON SWITCH ============:" << endl;
        cout << "1. Mostrar mensaje de bienvenida" << endl;
        cout << "2. Mostrar el cuadrado de un numero" << endl;
        cout << "3. Salir del programa" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        //Evaluamos la opcion elegida con switch
        switch(opcion){
            case 1:
                //opcion 1: Mostrar mensaje de bienvenida
                cout << "Bienvenido al programa!" << endl;
                break;
            case 2:
                //opcion 2: Mostrar el cuadrado de un numero
                cout << "Ingrese un numero para calcular su cuadrado: ";
                cin >> numero;

                cuadrado = numero * numero;

                //Mostramos el resultado
                cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;
                break;
            case 3:
                //opcion 3: Salir del programa
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                //opcion invalida
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
        }
    }while(opcion != 3); //Repetimos el menu hasta que el usuario elija la opcion 3

    return 0;
    }