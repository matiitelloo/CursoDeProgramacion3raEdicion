/*
EJERCICIO 1 - Clases, objetos y atributos
Autor: Matias Tello
Enunciado: 
    Crear una clase llamada "Estudiante" con los atributos nombre, edad y carrera
    Luego, desde la clase principal, crear dos objetos y mostrar sus datos en consola

*/

public class App { // Aqui declaramo    s la clase principal del programa
    public static void main(String[] args) throws Exception { //Aqui comienza el metodo main o la funcion main, es donde inicia la ejecucion.
        Estudiante estudiante1 = new Estudiante(); // Aqui creamos el primer objeto de tipo Estudiante
        
        estudiante1.nombre = "Matias"; //Asignamos el valor de "Matias" al atributo nombre del objeto estudiante1
        estudiante1.edad = 16; //Asignamos el valor de 16 al atributo edad del objeto estudiante1
        estudiante1.carrera = "La Asuncion"; //Asignamos el valor de "La Asuncion" al atributo edad del objeto estudiante1
    
        Estudiante estudiante2 = new Estudiante(); // Aqui creamos el segundo objeto de tipo Estudiante al cual denominamos como estudiante2
        estudiante2.nombre = "Nicolas";
        estudiante2.edad = 17;
        estudiante2.carrera = "Computacion";

        System.out.println("==== ESTUDIANTE 1 ===="); //Imprimimos un titulo para el primer estudiante
        System.out.println("Nombre: " + estudiante1.nombre); //Mostramos el nombre del primer estudiante
        System.out.println("Edad: " + estudiante1.edad); //Mostramos la edad del primer estudiante
        System.out.println("Carrera: " + estudiante1.carrera); //Mostramos la carrera del primer estudiante

        System.out.println(); //Con esto, imprimimos una LINEA EN BLANCO (SALTO DE LINEA)

        System.out.println("==== ESTUDIANTE 2 ===="); //Imprimimos un titulo para el segundo estudiante
        System.out.println("Nombre: " + estudiante2.nombre); //Mostramos el nombre del segundo estudiante
        System.out.println("Edad: " + estudiante2.edad); //Mostramos la edad del segundo estudiante
        System.out.println("Carrera: " + estudiante2.carrera); //Mostramos la carrera del segundo estudiante

    }//Aqui terminamos con el metodo main
}
