/*
Archivo: Perro.java
Descripcion: 
    Clase hija que hereda de animal. 
    Representa a un perro dentro del refugio.


*/

public class Perro extends Animal {
    // Constructor de perro
    public Perro(String nombre, int edad) {
        // llamamos al constructor de la clase padre
        super(nombre, edad);
    }

    // Sobreescribimos el metodo hacerSonido()
    @Override
    public void hacerSonido() {
        System.out.println("Guau guau");
    }
}
