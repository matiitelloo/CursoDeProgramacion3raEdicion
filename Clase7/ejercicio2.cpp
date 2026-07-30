/*
ARREGLOS 1D
EJERCICIO 3
Autor: Matías Tello S.
Fecha: 27 de Julio de 2026

Enunciado: Realizar un programa en C++ que permita ingresar 6 numeros enteros en un arreglo.

Luego, el programa debe: 
    1. Mostrar todos los precios registrados junto con su posicion
    2. pedir al usuario un precio para buscar dentro del arreglo
    3. indicar si ese precio fue encontrado o no.
    4. mostrar la posicion de la primera coincidencia encontrada


*/

#include <iostream>
using namespace std;

int main(){
    //Declaramos un arreglo de 6 enteros para guardar precios
    int precios[6];

    //Variable que usaremos para rrecorer el arreglo
    int i;

    //Variable donde guardaremos el precio que el usuario desea buscar.
    int buscado;

    //Variable para guardar la posicion donde se encuentra el precio
    int posicion = 1;

    //Variable bandera para saber si el precio fue encontrado o no
    bool encontrado = false;

    //PASO 1: CARGAR LOS PRECIOS EN EL ARREGLO

    //Recorremos todas las posiciones
for(i = 0; i < 6; i++ ){
        cout << "Ingrese el precio " << i+1 << ":";
        cin >> precios[i];
    }

    cout << endl;
    cout << "Precios registrados: " << endl;

    //PASO 2: MOSTRAR LOS PRECIOS GUARDADOS
    for(i = 0; i < 6; i++){
        
    }



}