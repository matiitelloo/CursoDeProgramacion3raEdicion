/*
FUNCIONES
EJERCICIO 1
Autor: Matías Tello S.
Fecha: 27 de Julio de 2026
*/


/*
CONCEPTOS IMPORTANTES PARA SABER

1. Una funcion tiene una tarea especifica.
2. Parametros
    int calcularSuma(int a, int b, int c, int d)

    Aqui la funcion recibe 4 valores

3. Retorno
    return a+b+c+d      es el valor que devuelve


AMPERSAND

    sin & = copia
    con & = variable orioginal
*/

//PRIMER EJEMPLO SIN &

#include <iostream>
using namespace std;


//FUNCION QUE SIRVE PARA AUMENTAR EL VALOR DE X
void aumentar(int x){
    x = x + 1;
    cout << "Dentro de la funcion, x vale: " << x << endl;

}

int main(){
    int a = 10;
    aumentar(a);

    cout << "Fuera de la funcion, a vale: " << a << endl;

    return 0;
}