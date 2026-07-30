/*
Nombre del estudiante: Matias Tello S.
Fecha: 29/07/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda
*/

#include <iostream>
using namespace std;

void mostrarMenu() {
    cout << "================== MENU ================== " << endl;
    cout << "1. Registrar estudiantes y notas" << endl;
    cout << "2. Mostrar reporte general" << endl;
    cout << "3. Buscar estudiante por nombre" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}
int registrarEstudiantes(string nombres[], float notas[]);
void mostrarReporte(string nombres[], float notas[], int cantidad);
void buscarEstudiante(string nombres[], float notas[], int cantidad);

int main(){
string nombres[20];
float notas[20];
int cantidad = 0;
bool hayDatos = false;
int opcion;


do{
    mostrarMenu();
    cin >> opcion;


    while (opcion < 1 || opcion > 4){
    cout << "Opcion invalida. Intente de nuevo: ";
    cin >> opcion;
    }
    
} while (opcion != 4);

}