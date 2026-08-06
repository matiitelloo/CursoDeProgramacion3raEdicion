/*
Ejercicio2 - Constructor y metodos
Autor: Matias Tello S.
Enunciado: 
    Crear una clase llamada Producto con los atributos nombre, precio y stock.
    La clase debe tener constructor, un metodo para mostrar informacion 
    y un metodo para caluclar el valor total del inventario.

*/

public class App {
    public static void main(String[] args) throws Exception { // Aqui comienza el metodo/funcion main

        Producto producto1 = new Producto("Mouse", 15.50, 10); // Creamos el primer objeto usando el contructor

        Producto producto2 = new Producto("Teclado", 25.00, 5); // Creamos el segundo objeto usando el constructor

        System.out.println("=== PRODUCTO 1 ==="); // mostramos un titulo para el primer producto

        producto1.mostrarInfo(); // Llamamos al metodo mostarrInfo del primer objeto

        System.out.println("Valor total en inventario: " + producto1.calcularValorInventario()); // Mostramos el
                                                                                                 // resultado del metodo
                                                                                                 // caclularValorInventario

        System.out.println();

        System.out.println("=== PRODUCTO 2 ==="); // mostramos un titulo para el primer producto

        producto2.mostrarInfo(); // Llamamos al metodo mostarrInfo del primer objeto

        System.out.println("Valor total en inventario: " + producto2.calcularValorInventario());

    }
}
