public class App {
    public static void main(String[] args){
        Telefono telefono = new Telefono("Iphone", "13 Pro Max", 700.00);

        System.out.println("===== DATOS INICIALES =====");
        telefono.mostrarInfo();

        System.out.println("===== CAMBIO VALIDO (precio 749.99) =====");
        telefono.setModelo("14");
        telefono.setPrecio(749.99);
        telefono.mostrarInfo();

        System.out.println("===== CAMBIO INVALIDO (precio -50) =====");
        telefono.setPrecio(-50);
        telefono.mostrarInfo();

        System.out.println("Precio actual: " + telefono.getPrecio());
    }
}
