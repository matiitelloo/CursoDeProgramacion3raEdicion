/*
EJERCICIO DE REPASO 1
Autor: Matías Tello S.
Fecha: 22 de Julio de 2026

Ejercicio1: Cambio en una compra.
Enunciado: Un cliente compra un producto. El sistema el precio del producto y el dinero pagado.
Debe mostrar:
    - Si pagado >= precio, mostrar el cambio
    - Si pagado < precio, mostrar cuanto falta para completar el pago

E/P/S

Entrada: precio, pagado
Proceso: comparar precio y pagado, calcular cambio o falta
Salida: ,emsake "Su cambio es: " o "Falta: "

*/

#include <iostream>
using namespace std;

int main (){
    //1) Declarar variables
    double precio, pagado, cambio, faltan;
    //2) Lecrtura de datos
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese el dinero pagado: ";
    cin >> pagado;


    //3) Decision
    if(pagado < precio){
        faltan = precio - pagado; //Proceso
        cout << "Faltan: $" << faltan << endl; //Salida
    }
    else{ //Es el equivalente al sino en pseint
        //Si pagado es mayor o igual, hay cambio
        cambio = pagado - precio; //Proceso
        cout << "Su cambio es: $" << cambio << endl; //Salida
    }
return 0;

}