/*
FUNCIONES
EJERCICIO 1
Autor: Matias Tello S.
Fecha: 27 de julio 2026
*/

// PRIMER EJEMPLO: CON &

#include <iostream>
using namespace std;

// FUNCION QUE SIRVE PARA AUMENTAR EL VALOR DE X
void aumentar(int &x)
{
    x = x + 1;
    cout << "Dentro de la funcion, x vale: " << x << endl;
}

int main()
{
    int a = 10;
    aumentar(a);

    cout << "fuera de la funcion, a vale: " << a << endl;

    return 0;
}