public class CuentaBancaria {
    private String titular; // Atributo privado para guardar el nombre del titular
    private double saldo; // Atrubuto privado apra guardar el saldo disponible

    public CuentaBancaria(String titular, double saldoInicial) {
        this.titular = titular;

        if (saldoInicial >= 0) {
            this.saldo = saldoInicial; // Si es valido, guardamos ese saldo en el atributo
        } else {
            this.saldo = 0; // Colcamos el saldo en cero para evitar valores negativos
        }
    }

    public String getTitular() { // Getter para consultar el nombre del titular
        return titular; // Retirnamos el valor del atributo titular
    }

    public double getSaldo() { // Getter para consltar el saldo
        return saldo;
    }

    public void setTitular(String titular) { // Setter para modificar el nombre del titular con validacion
        if (titular != null && !titular.isEmpty()) { // Verifiacamos que el nuevo titular no sea nulo ni vacio
            this.titular = titular;
        } else {
            System.out.println("Error: el titular no puede estar vacio");
        }
    }

    public void depositar(double monto) { // Metodo para depositar dinero en la cuenta
        if (monto > 0) {
            saldo = saldo + monto;
            System.out.println("Deposito realizado correctamente:");
        } else {
            System.out.println("Error: el monto a depositar debe ser mayor que cero");
        }
    }

    // METODO PARA RETIRAR
    public void retirar(double monto) {
        if (monto > 0 && monto <= saldo) {
            saldo = saldo - monto;

            System.out.println("Retiro realizado correctamente");
        } else {
            System.out.println("Error: no se puede retirar ese monto");
        }
    }
}
