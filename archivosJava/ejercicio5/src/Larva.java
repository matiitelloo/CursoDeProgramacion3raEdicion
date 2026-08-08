/*
Archivo: Larva.java
Descripcion: Clase hija que represnta una larva.
*/

public class Larva extends Hormiga {
    public Larva(int id){
        //llamamos al constructor de la clase padare
        super(id, "Larva");
    }

    @Override
    public void mostrarAccion(){
        System.out.println("La larva esta creciendo dentro del hormiguero.");
    }
    
}
