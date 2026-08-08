/*
EJERCICIO EN CLASE - Mini sistema de hormiguero simplificado
Autor: Jhonatan Torres
Fecha: 05 de agosto de 2026

Enunciado:  
    Desarrolar un programa en Java que simule un mini sistema de hormiguero en consola.
    El sistema debe cumplir:
        - crear hormigas
        - manejar dos tipos de hormigas: Larva y Soldado
        - almacenar las homrigas en una lista
        - mostrar todas las hormigas registradas
        - alimentar una hormiga por su id
        - mostrar un comportamiento distinto segun el tipo de hormiga
        - validar que el id exista
        - usar try/catch para evitar errores de entrada

El objeto del ejercicio es practicar 
    - herencia 
    - polimorfismo 
    - encapsulamiento
    - colecciones
    - validaciones
    - manejo basico de excepciones

*/

/*
Archivo: App.java
Descripcion: 
    
*/
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Hormiguero hormiguero = new Hormiguero();

        int opcion = 0;

        do{
            try{
                System.out.println("MENU HORMIGUERO");
                System.out.println("1. Agregar larva");
                System.out.println("2. Agregar soldado");
                System.out.println("3. Mostrar hormigas");
                System.out.println("4. Alimentar hormiga");
                System.out.println("5. Eliminar hormiga");
                System.out.println("6. Salir");
                System.out.println("Ingrese una opcion:");

                opcion = sc.nextInt();

                switch(opcion){
                    case 1: 
                        System.out.println("Ingrese ID para la larva: ");
                        int idLarva = sc.nextInt();
                        hormiguero.agregarLarva(idLarva);
                        break;
                    case 2:
                        System.out.println("Ingrese ID para el soldado: ");
                        int idSoldado = sc.nextInt();
                        hormiguero.agregarSoldado(idSoldado);
                        break;

                    case 3: 
                        hormiguero.mostrarHormigas();
                        break;

                    case 4:
                        System.out.println("Ingrese ID para alimentar a la hormiga: ");
                        int idAlimentar = sc.nextInt();
                        hormiguero.alimentarHormiga(idAlimentar);
                        break;

                    case 5: 
                        System.out.println("Ingrese ID de la hormiga para eliminarla: ");
                        int idEliminar = sc.nextInt();
                        hormiguero.eliminarHormiga(idEliminar);
                        break;
                    case 6:
                        System.out.println("Saliendo del programa... ");
                        break;

                    default: 
                        System.out.println("Opcion invalida. Intente nuevamente.");
                }

            }catch (Exception e){
                System.out.println("Error. ingreso invalido. Debe escribir un numero.");
                sc.nextLine(); //Limpiamos la memoria para evitar bucle infito
            }

        }while (opcion != 6);

        sc.close();
    }
}
