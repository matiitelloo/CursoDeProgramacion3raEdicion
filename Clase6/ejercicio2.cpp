/*
QUEDEMOS CON ESTA IDEA
    - el arreglo guarda los datos
    - el indice nos dice en que posicion estamos
    - el for nos ayuda a movernos por todas las posiciones    
*/

#include <iostream>
using namespace std;

int main (){
    int datos[5];   //Arreglo de 5 enteros
    int i;          // Variable para recorrer posiciones

    //Cargar datos
    for(i = 0; i < 5; i++){
        cin >> datos[i];
    }

// Posiciones[5] = 1  2  3  4  5
    // datos[5] = [] [] [] [] []
    //Indices =   0  1  2  3  4     Los indices es lo que importa al momento de programar

    //Impresion de datos
    for(i = 0; i < 5; i++){
        cout << datos[i]<< endl;
    }
    return 0;
}