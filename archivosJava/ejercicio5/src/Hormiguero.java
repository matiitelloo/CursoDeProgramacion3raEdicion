/*
Archivo: Hormiguero.java
Descripcion: 
    Clase gestora que administra la lista de hormigas.
    Aqui aplicamos coleccion, busqueda y logica basica.
*/

import java.util.ArrayList;

public class Hormiguero {
    // Lista dinamica para almacenar hormigas
    private ArrayList<Hormiga> listaHormigas;

    // Constructor
    public Hormiguero() {
        listaHormigas = new ArrayList<>();
    }

    // Metodo para agregar una larva
    public void agregarLarva(int id) {
        listaHormigas.add(new Larva(id));
        System.out.println("Larva agregada correctamente.");
    }

    // Metodo para agregar un soldado
    public void agregarSoldado(int id) {
        listaHormigas.add(new Soldado(id));
        System.out.println("Soldado agregada correctamente.");
    }

    // Metodo para mostrar todas las hormigas
    public void mostrarHormigas() {
        if (listaHormigas.isEmpty()) {
            System.out.println("No hay hormigas registradas.");
            return;
        }

        for (Hormiga hormiga : listaHormigas) {
            hormiga.mostrarInfo();
            hormiga.mostrarAccion();
            System.out.println("-----------------------------");
        }
    }

    // Metodo para buscar una hormiga por id
    public Hormiga buscarPorId(int id) {
        for (Hormiga hormiga : listaHormigas) {
            if (hormiga.getId() == id) {
                return hormiga;
            }
        }
        return null;
    }

    // Metodo par alimentar una hormiga
    public void alimentarHormiga(int id) {
        Hormiga hormiga = buscarPorId(id);

        if (hormiga == null) {
            System.out.println("No existe una hormiga con ese ID");
            return;
        }

        if (hormiga.getEstado().equals("MUERTA")) {
            System.out.println("La hormiga que se trata de alimentar esta muerta");
            return;
        }

        System.out.println("Hormiga encontrada");
        System.out.println();
        System.out.println("La hormiga ha sido alimentada correctamente");

    }

    // Metodo para cambiar el estado de una hormiga a muerta
    public void eliminarHormiga(int id) {
        Hormiga hormiga = buscarPorId(id);
        if (hormiga == null) {
            System.out.println("NO existe una hormiga con ese ID");
            return;
        }

        hormiga.setEstado("MUERTA");
        System.out.println("La hormiga ahora esta en estado de MUERTA");

    }

}
