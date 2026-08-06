/*
EJERCICIO 3 - Encapsulamiento con validacion
Autor: Matias Tello S.

Enunciado:
    Crear una clase llamada CuentaBancaria con los atributos privados titular y saldo.
    La clase debe permitir consultar y modificar sus datos de forma controlada
    usando getter, setter y metodos con validaciones.

*/

public class App {
    public static void main(String[] args) throws Exception {
        CuentaBancaria cuenta1 = new CuentaBancaria("Jhonatan", 100.0);
        System.out.println("=== DATOS INICIALES ===");
        System.out.println("Titular: " + cuenta1.getTitular());
        System.out.println("Saldo: " + cuenta1.getSaldo());

        System.out.println();

        cuenta1.setTitular("Paul"); // Cambiamos el nombre del titular usando el setter
        System.out.println("Nuevo titular: " + cuenta1.getTitular()); // Mostramos el nuevo titular

        System.out.println();

        cuenta1.depositar(50.0);
        cuenta1.retirar(30.0);

        cuenta1.retirar(200.0); // Inteamos realizar un retiro invalido porque supera el saldo
        cuenta1.retirar(-10.0);

        System.out.println();

        System.out.println("=== DATOS FINALES===");
        System.out.println("Titular: " + cuenta1.getTitular());
        System.out.println("Saldo: " + cuenta1.getSaldo());
    }
}
