public class Telefono {

    private String marca;
    private String modelo;
    private double precio;

    public Telefono(String marca, String modelo, double precio){
        this.marca = marca;
        this.modelo = modelo;
        setPrecio(precio);
    }
    
    public String getMarca(){
        return marca;
    }

    public String getModelo(){
        return modelo;
    }

    public double getPrecio(){
        return precio;
    }

    public void setMarca(String marca){
        this.marca = marca;
    }

    public void setModelo(String modelo){
        this.modelo = modelo;
    }
    
    public void setPrecio(double precio){
        if (precio < 0) {
            System.out.println("ERROR. El precio no puede ser negativo. Valor rechazado: " + precio);
            return;
        }
        this.precio = precio;
    }

    public void mostrarInfo(){
        System.out.println("Marca  : " + marca);
        System.out.println("Modelo  : " + modelo);
        System.out.println("Precio  : $" + String.format("%.2f", precio));
        System.out.println("=========================================================");
    }
}
