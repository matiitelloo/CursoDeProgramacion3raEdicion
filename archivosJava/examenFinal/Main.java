/*
EXAMEN FINAL - JAVA POO
Sistema de gestion de personajes

Archivo: Main.java
Descripcion:
    Clase principal. Contiene el menu, el registro de personajes,
    el listado, la busqueda por id y el manejo basico de errores.
*/

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Coleccion declarada como ArrayList<Personaje>.
        // Aqui guardamos objetos Guerrero y Mago gracias a la herencia.
        ArrayList<Personaje> personajes = new ArrayList<>();

        boolean salir = false;

        while (!salir) {
            System.out.println();
            System.out.println("========== MENU ==========");
            System.out.println("1. Registrar personaje");
            System.out.println("2. Mostrar personajes");
            System.out.println("3. Buscar personaje por id");
            System.out.println("4. Salir");
            System.out.print("Seleccione una opcion: ");

            // Manejo basico de errores: si el usuario escribe texto donde
            // se espera un numero, se informa y el programa continua.
            try {
                int opcion = Integer.parseInt(sc.nextLine().trim());

                switch (opcion) {
                    case 1:
                        registrarPersonaje(sc, personajes);
                        break;
                    case 2:
                        mostrarPersonajes(personajes);
                        break;
                    case 3:
                        buscarPersonajePorId(sc, personajes);
                        break;
                    case 4:
                        salir = true;
                        System.out.println("Saliendo del programa. Hasta luego.");
                        break;
                    default:
                        System.out.println("Opcion invalida. Debe elegir un numero del 1 al 4.");
                }
            } catch (NumberFormatException e) {
                System.out.println("Error: debe ingresar un numero valido.");
            }
        }

        sc.close();
    }

    // Opcion 1: registrar un personaje con validaciones
    private static void registrarPersonaje(Scanner sc, ArrayList<Personaje> personajes) {
        System.out.println("--- Registrar personaje ---");

        System.out.print("Tipo (1 = Guerrero, 2 = Mago): ");
        int tipo = Integer.parseInt(sc.nextLine().trim());

        if (tipo != 1 && tipo != 2) {
            System.out.println("Error: tipo invalido. No se registro el personaje.");
            return;
        }

        System.out.print("Id: ");
        int id = Integer.parseInt(sc.nextLine().trim());

        System.out.print("Nombre: ");
        String nombre = sc.nextLine().trim();

        System.out.print("Nivel (1 a 100): ");
        int nivel = Integer.parseInt(sc.nextLine().trim());

        // Validaciones: si algun dato no cumple, no se registra el objeto
        if (id <= 0) {
            System.out.println("Error: el id debe ser mayor que 0. No se registro el personaje.");
            return;
        }
        if (nombre.isEmpty()) {
            System.out.println("Error: el nombre no puede estar vacio. No se registro el personaje.");
            return;
        }
        if (nivel < 1 || nivel > 100) {
            System.out.println("Error: el nivel debe estar entre 1 y 100. No se registro el personaje.");
            return;
        }

        // El objeto se crea como Guerrero o Mago pero se guarda como Personaje
        if (tipo == 1) {
            personajes.add(new Guerrero(id, nombre, nivel));
        } else {
            personajes.add(new Mago(id, nombre, nivel));
        }

        System.out.println("Personaje registrado correctamente.");
    }

    // Opcion 2: recorrer la coleccion y mostrar cada personaje
    private static void mostrarPersonajes(ArrayList<Personaje> personajes) {
        if (personajes.isEmpty()) {
            System.out.println("La lista esta vacia. Todavia no hay personajes registrados.");
            return;
        }

        System.out.println("--- Lista de personajes ---");
        for (Personaje p : personajes) {
            p.mostrarInfo();
            // Polimorfismo: se ejecuta el realizarAccion() de Guerrero o de Mago
            System.out.println("Accion: " + p.realizarAccion());
            System.out.println("--------------------------------");
        }
    }

    // Opcion 3: busqueda secuencial que se detiene en la primera coincidencia
    private static void buscarPersonajePorId(Scanner sc, ArrayList<Personaje> personajes) {
        if (personajes.isEmpty()) {
            System.out.println("La lista esta vacia. No hay personajes para buscar.");
            return;
        }

        System.out.print("Ingrese el id a buscar: ");
        int idBuscado = Integer.parseInt(sc.nextLine().trim());

        boolean encontrado = false;

        for (Personaje p : personajes) {
            if (p.getId() == idBuscado) {
                System.out.println("--- Personaje encontrado ---");
                p.mostrarInfo();
                System.out.println("Accion: " + p.realizarAccion());
                encontrado = true;
                break; // se detiene en la primera coincidencia
            }
        }

        if (!encontrado) {
            System.out.println("Personaje no encontrado");
        }
    }
}
