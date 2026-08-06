public class Producto {

    String nombre; // Atributo para guardar el nombre del producto
    double precio; // Atributo para guardar el precio del producto
    int stock; // Atributo para guardar la cantidad disponible del producto

    // Constructor para crar el objeto con valores inciales
    public Producto(String nombre, double precio, int stock) {
        this.nombre = nombre; // Guardamos en el atributo nombre el valor recibir por el constructor
        this.precio = precio; // Guardamos en el atributo precio el valor recibir por el constructor
        this.stock = stock;// Guardamos en el atributo stock el valor recibir por el constructor
    } // Aqui termina el constructor

    // Metodo que muestra la informacion del producto en consola
    public void mostrarInfo() {
        System.out.println("Nombre: " + nombre); // Mostramos el nombre del producto
        System.out.println("Precio: " + precio); // Mostramos el precio del producto
        System.out.println("Stock: " + stock); // Mostramos el stock del producto
    } // Aqui termina el metodo mostrarInfo

    // Metodo que calcule el valor total del inventario del producto
    public double calcularValorInventario() {
        return precio * stock; // Retornamos el resultado de multiplicar precio por stock
    } // Aqui termina el metodo calcularValorInventario
} // Aqui termina la clase Producto
