/*
Archivo: Mago.java
Descripcion:
    Clase hija que hereda de Personaje.
    Representa a un mago dentro de la academia.
*/

public class Mago extends Personaje {

    // Constructor: llama al constructor de la clase padre
    public Mago(int id, String nombre, int nivel) {
        super(id, nombre, nivel);
    }

    // Sobrescritura del metodo realizarAccion()
    @Override
    public String realizarAccion() {
        // Usamos el getter porque los atributos del padre son privados
        return getNombre() + " lanza un hechizo";
    }
}
