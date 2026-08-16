public class App {
    public static void main(String[] args){
        Mascota mascota1 = new Mascota("Nacho", "Perro", 3);
        Mascota mascota2 = new Mascota("Nacha", "Gato", 2);

        System.out.println("========== INFORMACION DE LAS MASCOTAS ==========");
        mascota1.mostrarInfo();
        mascota2.mostrarInfo();
    }
}
