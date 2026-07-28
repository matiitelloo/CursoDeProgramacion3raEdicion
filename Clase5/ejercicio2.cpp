/*
EJERCICIO DE REPASO 2
Autor: Matias Tello S.
Fecha: 22 de julio 2026
EJERCICIO 2: Envío gratis en una compra
Enunciado:
Una tienda recibe el monto de una compra.
Reglas:
- Si el monto de la compra es mayor o igual a $50,
  el envío es gratuito.
- Si el monto de la compra es menor a $50,
  se agregan $5 por concepto de envío.
El programa debe mostrar:
- El costo del envío.
- El total final a pagar.

*/

#include <iostream>
using namespace std;

int main(){
    double montoCompra, costoEnvio, totalFinal;
    cout << "Ingrese el monto de la compra: ";
    cin >> montoCompra;

    if(montoCompra >= 50){
        costoEnvio = 0;
        cout << "El costo del envio es: $" << costoEnvio << endl;
    } else {
        costoEnvio = 5;
        cout << "El costo del envio es: $" << costoEnvio << endl;
    }
    totalFinal = montoCompra + costoEnvio;
    cout << "El total final a pagar es de: $" << totalFinal << endl;

    return 0;
}
