/*
FUNCIONES
EJERCICIO 2
Autor: Matías Tello S.
Fecha: 27 de Julio de 2026

*/

//PRIMER EJEMPLO SIN &

#include <iostream>
using namespace std;


//FUNCION QUE SIRVE PARA AUMENTAR EL VALOR DE X
void aumentar(int &x){
    x = x + 1;
    cout << "Dentro de la funcion, x vale: " << x << endl;

}

int main(){
    int a = 10;
    aumentar(a);

    cout << "Fuera de la funcion, a vale: " << a << endl;

    return 0;
}