/*
Nombre del estudiante: Matias Tello S.
Fecha: 29/07/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda
*/

#include <iostream>
#include <string>

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
    cout << "Opcion invalida. Intente de nuevo: "<< endl;
    mostrarMenu();
    cin >> opcion;

    }

    switch(opcion) {
            case 1:
                cantidad = registrarEstudiantes(nombres, notas);
                hayDatos = true;
                break;
            case 2:
                if (hayDatos == false) {
                    cout << "Error: Todavia no existen datos registrados.";
                } else {
                    mostrarReporte(nombres, notas, cantidad);
                }
                break;
            case 3:
                if (hayDatos == false) {
                    cout << "Error: Todavia no existen datos registrados.";
                } else {
                    buscarEstudiante(nombres, notas, cantidad);
                }
                break;
            case 4:
                cout << "\nSaliendo del sistema...";
                break;
        }
} while (opcion != 4);

return 0;

}

int registrarEstudiantes(string nombres[], float notas[]) {
    int n;
    cout << "Ingrese la cantidad de estudiantes para registrar (1-20): ";
    cin >> n;

    while (n < 1 || n > 20) {
        cout << "Cantidad invalida. Ingrese un valor entre 1 y 20: ";
        cin >> n;
    }

    for (int i = 0; i < n; i++) {
        
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Primer nombre: ";
        cin >> nombres[i];

        cout << "Nota final (0-20): ";
        cin >> notas[i];

        while (notas[i] < 0 || notas[i] > 20) {
            cout << "Nota invalida. Vuelva a ingresar la nota (0-20): ";
            cin >> notas[i];
        }
    }
    
    cout << "Datos registrados exitosamente.";
    return n;
}

void mostrarReporte(string nombres[], float notas[], int cantidad) {

    float sumaNotas = 0;
    float notaMayor = -1;
    float notaMenor = 21;
    string nombreMayor, nombreMenor;
    int aprobados = 0, reprobados = 0;

    cout << "=== REPORTE GENERAL ===" << endl;

    for (int i = 0; i < cantidad; i++) {
        string estado;
        if (notas[i] >= 14) {
            estado = "APROBADO";
            aprobados++;
        } else {
            estado = "REPROBADO";
            reprobados++;
        }

        cout << i + 1 << ". " << nombres[i] << " - Nota: " << notas[i] << " - Estado: " << estado << endl;

        sumaNotas += notas[i];

        if (notas[i] > notaMayor) {
            notaMayor = notas[i];
            nombreMayor = nombres[i];
        }
        if (notas[i] < notaMenor) {
            notaMenor = notas[i];
            nombreMenor = nombres[i];
        }
    }

    cout << "Promedio general: " << (sumaNotas / cantidad) << endl;
    cout << "Estudiante con nota mayor: " << nombreMayor << " (" << notaMayor << ")" << endl;
    cout << "Estudiante con nota menor: " << nombreMenor << " (" << notaMenor << ")" << endl;
    cout << "Total Aprobados: " << aprobados << endl;
    cout << "Total Reprobados: " << reprobados << endl;
}

void buscarEstudiante(string nombres[], float notas[], int cantidad) {
    string nombreBuscado;
    cout << "Ingrese el nombre exacto del estudiante a buscar: ";
    cin >> nombreBuscado;

    bool encontrado = false;

    for (int i = 0; i < cantidad; i++) {
        if (nombres[i] == nombreBuscado) {
            string estado = (notas[i] >= 14) ? "APROBADO" : "REPROBADO";
            cout << "Estudiante Encontrado:";
            cout << "Nombre: " << nombres[i] << " | Nota: " << notas[i] << " | Estado: " << estado << endl;
            encontrado = true;
            break;
        }
    }

    if (encontrado == false) {
        cout << "No se encontro a ningun estudiante con el nombre '" << nombreBuscado << "'.";
    }
}