/*
EXAMEN FINAL - JAVA POO
Autor: Matias Tello S.
Fecha: 7 de agosto de 2026
*/

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        ArrayList<Personaje> personajes = new ArrayList<>();

        boolean salir = false;

        while (!salir){
            System.out.println();
            System.out.println("========== MENU ==========");
            System.out.println("1. Registrar personaje");
            System.out.println("2. Mostrar personajes");
            System.out.println("3. Buscar personaje por id");
            System.out.println("4. Salir");
            System.out.println("Seleccione una opcion: ");

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
                        buscarPersonajeporId(sc, personajes);
                        break;
                    case 4:
                        salir = true;
                        System.out.println("Saliendo del programa. Hasta pronto!");
                        break;
                    default:
                        System.out.println("Opcion invalida. Debe elegir una opcion del 1 al 4.");
                }
            } catch (NumberFormatException e) {
                System.out.println("ERROR. Debe ingresar un numero valido.");
            }
        }

        sc.close();
    }

    private static void registrarPersonaje(Scanner sc, ArrayList<Personaje> personajes){
        System.out.println("----- Registrar personaje -----");

        System.out.println("Tipo (1 = Guerrero, 2 = Mago): ");
        int tipo = Integer.parseInt(sc.nextLine().trim());

        if (tipo != 1 && tipo !=2){
            System.out.println("ERROR. Tipo invalido.");
            return;
        }

        System.out.println("Id: ");
        int id = Integer.parseInt(sc.nextLine().trim());

        System.out.println("Nombre: ");
        String nombre = sc.nextLine().trim();

        System.out.println("Nivel (1 al 100): ");
        int nivel = Integer.parseInt(sc.nextLine().trim());

        if (id <= 0){
            System.out.println("ERROR. El id debe ser mayor que 0.");
            return;
        }
        if (nombre.isEmpty()){
            System.out.println("ERROR. El nombre no puede estar vacio.");
            return;
        }
        if (nivel < 1 || nivel > 100) {
            System.out.println("ERROR. El nivel debe estar entre 1 y 100.");
            return;
        }

        if (tipo == 1){
            personajes.add(new Guerrero(id, nombre, nivel));
        }else{
            personajes.add(new Mago(id, nombre, nivel));
        }
        System.out.println("Personaje registrado correctamente!");
        
    }

    private static void mostrarPersonajes(ArrayList<Personaje> personajes) {
        if (personajes.isEmpty()){
            System.out.println("La lista esta vacia. Todavia no hay personajes registrados.");
            return;
        }

        System.out.println("----- Lista de personajes ------");
        for (Personaje p : personajes){
            p.mostrarInfo();

            System.out.println("Accion: " + p.realizarAccion());
            System.out.println("--------------------------------");
        }
    }

    private static void buscarPersonajeporId(Scanner sc, ArrayList<Personaje> personajes){
        if (personajes.isEmpty()){
            System.out.println("La lista esta vacia. No hay personajes para buscar.");
            return;
        }

        System.out.println("Ingrese el ID a buscar: ");
        int idBuscado = Integer.parseInt(sc.nextLine().trim());

        boolean encontrado = false;

        for (Personaje p: personajes){
            if (p.getId() == idBuscado){
                System.out.println("----- Personaje encontrado! -----");
                p.mostrarInfo();
                System.out.println("Accion: " + p.realizarAccion() + ".");
                encontrado = true;
                break;
            }
        }

        if (!encontrado){
            System.out.println("Personaje no encontrado");
        }
    }
}
