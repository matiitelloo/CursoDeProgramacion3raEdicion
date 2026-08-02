/*
MINI-PROYECTO INTEGRADOR C++
Autor: Matías Tello S.
Fecha: 2 de Agosto de 2026

Proyecto: Sistema de Gestión de Películas
Enunciado: Sistema en consola para administrar hasta 20 películas registrando su nombre, 
calificación y duración en minutos. Incluye búsqueda secuencial, reporte general y un 
componente creativo de recomendación basado en la calificación.

E/P/S

Entrada:
    - Opciones del menú (1 a 6)
    - Nombre de la película (string)
    - Calificación (double, de 0 a 10)
    - Duración en minutos (int, mayor a 0)
    - Nombre de la película a buscar

Proceso:
    - Almacenamiento en arreglos unidimensionales paralelos (máximo 20 registros).
    - Validaciones de entrada (rangos numéricos, capacidad máxima, existencia de datos).
    - Búsqueda secuencial por el nombre identificador.
    - Reporte general: suma acumulada de duraciones y determinación de la película más larga.
    - Componente creativo: clasificación lógica según la calificación 
      (Recomendada >= 8, Poco recomendada 5 a 7.9, No recomendada < 5).

Salida:
    - Mensajes de confirmación y alertas de validación.
    - Listado completo de películas almacenadas.
    - Resultado de búsqueda secuencial o mensaje de no encontrada.
    - Reporte general (tiempo total de reproducción y película más larga).
    - Clasificación de recomendaciones de películas.
*/

#include <iostream>
#include <string>

using namespace std;

void mostrarMenu() {
    cout << "=====================================================================" << endl;
    cout << "================== SISTEMA DE GESTION DE PELICULAS ================== " << endl;
    cout << "=====================================================================" << endl;
    cout << "1. Registrar una pelicula y su calificacion" << endl;
    cout << "2. Mostrar todas las peliculas" << endl;
    cout << "3. Buscar pelicula por nombre" << endl;
    cout << "4. Reporte General" << endl;
    cout << "5. Recomendacion en base a la calificacion" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opcion (1-6): ";
}

void registrarPelicula(string nombres[], float calificaciones[], int duraciones[], int &cantidad);
void mostrarPeliculas(string nombres[], float calificaciones[], int duraciones[], int cantidad);
void buscarPelicula(string nombres[], float calificaciones[], int duraciones[], int cantidad);
void reporte(string nombres[], int duraciones[], int cantidad);
void recomendar(string nombres[], float calificaciones[], int cantidad);

int main(){
    string nombres[20];
    float calificaciones[20];
    int duraciones[20];
    int cantidad = 0;
    bool hayDatos = false;
    int opcion = 0;

    do{
    mostrarMenu();
    cin >> opcion;

    while (opcion < 1 || opcion > 6){
        cout << "Opcion invalida. Intente de nuevo: "<< endl;
        mostrarMenu();
        cin >> opcion;
    }

    switch(opcion) {
            case 1:
                registrarPelicula(nombres, calificaciones, duraciones, cantidad);
                if (cantidad > 0) {
                    hayDatos = true;
                }
                break;
            case 2:
                if (hayDatos == false) {
                    cout << "Error: Todavia no existen peliculas registradas."<< endl;
                } else {
                    mostrarPeliculas(nombres, calificaciones, duraciones, cantidad);
                }
                break;
            case 3:
                if (hayDatos == false) {
                    cout << "Error: Todavia no existen peliculas registradas."<< endl;
                } else {
                    buscarPelicula(nombres, calificaciones, duraciones, cantidad);
                }
                break;
            case 4:
                if (hayDatos == false) {
                    cout << "Error: Todavia no existen peliculas registradas para el reporte."<< endl;
                } else {
                    reporte(nombres, duraciones, cantidad);
                }
                break;
            case 5:
                if (hayDatos == false) {
                    cout << "Error: Todavia no existen peliculas registradas para evaluar."<< endl;
                } else {
                    recomendar(nombres, calificaciones, cantidad);
                }
                break;
            case 6:
                cout << "Saliendo del sistema..."<< endl;
                break;
            default:
                cout << "Opcion invalida"<< endl;
        }
    } while (opcion != 6);

    return 0;
}

void registrarPelicula(string nombres[], float calificaciones[], int duraciones[], int &cantidad) {
    if (cantidad >= 20) {
        cout << "El sistema ha alcanzado su capacidad maxima (20 peliculas)." << endl;
        return;
    }

    cin.ignore();
    cout << "==== REGISTRO DE PELICULA ====" << endl;
    cout << "Ingrese el nombre de la pelicula: ";
    getline(cin, nombres[cantidad]);

    cout << "Ingrese la calificacion (0-10): ";
    cin >> calificaciones[cantidad];
    while (calificaciones[cantidad] < 0  || calificaciones[cantidad] > 10) {
        cout << "ERROR. La calificacion debe estar entre 0 y 10: ";
        cin >> calificaciones[cantidad];
    }

    cout << "Ingrese la duracion (minutos): ";
    cin >> duraciones[cantidad];
    while (duraciones[cantidad] <= 0) {
        cout << "ERROR. La duracion debe ser mayor a 0 minutos: ";
        cin >> duraciones[cantidad];
    }

    cantidad ++;
    cout << "Pelicula registrada con exito." << endl;
}

void mostrarPeliculas(string nombres[], float calificaciones[], int duraciones[], int cantidad){
    cout << "==== LISTA DE PELICULAS REGISTRADAS ===="<< endl;
    for (int i = 0; i < cantidad; i++){
        cout << i + 1 << "." << nombres[i];
        cout << " | Calificacion: " << calificaciones[i] << "/10";
        cout << " | Duracion: " << duraciones[i] << " min" << endl;
    }
}

void buscarPelicula(string nombres[], float calificaciones[], int duraciones[], int cantidad){
    cin.ignore();
    string busqueda;
    cout << "==== BUSCAR PELICULA ====";
    cout << "Ingrese el nombre exacto de la pelicula: ";
    getline(cin, busqueda);

    bool encontrada = false;

    for (int i = 0; i < cantidad; i++){
    if (nombres[i] == busqueda){
        cout << "PELICULA ENCONTRADA!" << endl;
        cout << "Nombre: " << nombres[i] << endl;
        cout << "Calificacion: " << calificaciones[i] << "/10" << endl;
        cout << "Duracion: " << duraciones[i] << " min" << endl;
        encontrada = true;
        break; 
        }
    }

    if(!encontrada){
        cout << "Error: la pelicula "<< "\033[1m" << busqueda << "\033[0m" << " no se encuentra en el registro." << endl;
    }
}

void reporte(string nombres[], int duraciones[], int cantidad){
    int sumaDuracion = 0;
    int posMasLarga = 0;

    for (int i = 0; i < cantidad; i++){
        sumaDuracion += duraciones[i];
        if (duraciones[i] > duraciones[posMasLarga]) {
            posMasLarga = i;
    }
    
    cout << "==== REPORTE GENERAL ====" << endl;
    cout << "Cantidad de peliculas: " << cantidad << endl;
    cout << "Tiempo total de reproduccion: " << sumaDuracion << " minutos" << endl;
    cout << "Pelicula mas larga: " << nombres[posMasLarga] 
         << " (" << duraciones[posMasLarga] << " min)" << endl;
}