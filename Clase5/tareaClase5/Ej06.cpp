/*
EJERCICIO 6
Autor: Matías Tello S.
Fecha: 27 de julio de 2026

Ejercicio 6: Plan de internet (validación + recargo)

Enunciado: Escribe un algoritmo que reciba dos datos: el plan de internet y el consumo. El plan solo puede ser 1 o 2, y el consumo debe ser un número mayor o igual a cero. Si el plan es 1, la tarifa base es 12 dólares y el límite incluido es 80. Si el plan es 2, la tarifa base es 20 dólares y el límite incluido es 150. Si el consumo supera el límite del plan, se cobra un recargo por excedente: por cada unidad excedida se suma 0.25 al valor base. Si el consumo no supera el límite, se paga solo la tarifa base. Si el plan no es 1 ni 2, o si el consumo es negativo, el algoritmo debe mostrar "DATOS INVÁLIDOS". En caso contrario, debe mostrar el total a pagar.
*/

/*
MODELO E/P/S
Entrada: 
    Número correspondiente al plan de internet (1 o 2)
    Cantidad de consumo (número mayor o igual a cero)
Proceso: 
    Leer el número de plan y el consumo
    Validar si el plan es diferente de 1 y 2, o si el consumo es negativo
    Si no pasa la validación, establecer la acción para mostrar el mensaje de error
    Si es válido, determinar la tarifa base y el límite en función del plan ingresado (1 o 2)
    Verificar si el consumo excede el límite del plan
    De ser así, calcular el recargo multiplicando cada unidad excedida por 0.25
    Sumar el recargo (si existe) al valor base para obtener el total
Salida:
    Mensaje "DATOS INVÁLIDOS" en caso de que los datos no cumplan los requisitos
    El valor total a pagar calculado en caso de que los datos sean correctos
*/

#include <iostream>
using namespace std;

int main () {
    int plan;
    double consumo, tarifaBase, limite, recargo = 0, total;

    cout << "Ingrese el plan de internet (1 o 2): ";
    cin >> plan;

    if (plan <1 || plan > 2){
        cout << "DATOS INVALIDOS" << endl;
        return 1; // Salida con error
    }

    cout << "Ingrese la cantidad de consumo: ";
    cin >> consumo;
    
    if (consumo < 0) {
        cout << "DATOS INVALIDOS" << endl;
        return 1; // Salida con error
    }

    if (plan == 1) {
        tarifaBase = 12;
        limite = 80;
    } else { // plan == 2
        tarifaBase = 20;
        limite = 150;
    }

    if (consumo > limite) {
        recargo = (consumo - limite)*0.25;
    }

    total = tarifaBase + recargo;

    cout << "El total a pagar es: $" << total << endl;

    return 0;
}