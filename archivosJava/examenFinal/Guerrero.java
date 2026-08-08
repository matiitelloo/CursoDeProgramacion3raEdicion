/*
Archivo: Guerrero.java
Descripcion:
    Clase hija que hereda de Personaje.
    Representa a un guerrero dentro de la academia.
*/

public class Guerrero extends Personaje {

    // Constructor: llama al constructor de la clase padre
    public Guerrero(int id, String nombre, int nivel) {
        super(id, nombre, nivel);
    }

    // Sobrescritura del metodo realizarAccion()
    @Override
    public String realizarAccion() {
        // Usamos el getter porque los atributos del padre son privados
        return getNombre() + " ataca con su espada";
    }
}
