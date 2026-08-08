/*
EJERCICIO EN CLASE - SISTEMA SIMPLE DE ANIMALES DEL REFUGIO 
Autor: Jhonatan Torres
Fecha: 05 de agosto de 2026

Enunciado: Desarrollar un programa en Java que permita representar animales
dentro de un refugio.

El sistema debe contar con:
    - una clase base llamada Animal 
    - dos subclases llamadas Perro y Gato
    - un metodo llamado hacerSonito() que se comporte de manera distinta en cada subclase
    - una coleccion que almacene varios animales
    - un recorrido que muestre la informacion y sonido de cada animal 

El objetivo del ejercicio es aplicar:
    - herencia 
    - polimorfismo 
    - uso basico de ArrayList
*/

/*
Archivo: App.java
Descripcion: 
    Clase principal donde probamos herencia, polimorfirmos y uso de ArrayList.
*/

import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        // Creamos una lista de tipo animal
        // Esto es importante porque aqui podremos guardar objetos como
        // Perro y Gato gracias a la gerencia.
        ArrayList<Animal> animales = new ArrayList<>();

        // Agregamos objetos de distintas subclases
        animales.add(new Perro("Firulais", 3));
        animales.add(new Gato("Nala", 7));
        animales.add(new Perro("Toby", 8));

        // Recorremos la lista
        for (Animal animal : animales) {
            animal.mostrarInfo();
            animal.hacerSonido(); // Aqui se aplica el polimorfismo
            System.out.println("--------------------------------");
        }
    }
}
