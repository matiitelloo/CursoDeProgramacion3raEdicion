/*
Archivo: Personaje.java
Descripcion:
    Clase padre que representa un personaje de la academia de videojuegos.
    Contiene los datos y el comportamiento comun a todos los personajes.
*/

public class Personaje {
    // Atributos privados (encapsulamiento)
    private int id;
    private String nombre;
    private int nivel;

    // Constructor: inicializa los tres atributos
    public Personaje(int id, String nombre, int nivel) {
        this.id = id;
        this.nombre = nombre;
        this.nivel = nivel;
    }

    // Getters necesarios para mostrar y buscar informacion
    public int getId() {
        return id;
    }

    public String getNombre() {
        return nombre;
    }

    public int getNivel() {
        return nivel;
    }

    // Muestra los datos basicos del personaje
    public void mostrarInfo() {
        System.out.println("Id: " + id);
        System.out.println("Nombre: " + nombre);
        System.out.println("Nivel: " + nivel);
    }

    // Accion generica del padre. Las subclases la sobrescriben.
    public String realizarAccion() {
        return nombre + " realiza una accion general";
    }
}
