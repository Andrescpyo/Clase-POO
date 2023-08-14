#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int notas[3];
};

int main() {
    Alumno estudiantes[3]; // Arreglo de estructuras para tres estudiantes

    // Datos del primer estudiante
    estudiantes[0].nombre = "Juan";
    estudiantes[0].notas[0] = 45;
    estudiantes[0].notas[1] = 50;
    estudiantes[0].notas[2] = 40;

    // Datos del segundo estudiante
    estudiantes[1].nombre = "Maria";
    estudiantes[1].notas[0] = 60;
    estudiantes[1].notas[1] = 75;
    estudiantes[1].notas[2] = 90;

    // Datos del tercer estudiante
    estudiantes[2].nombre = "Carlos";
    estudiantes[2].notas[0] = 80;
    estudiantes[2].notas[1] = 65;
    estudiantes[2].notas[2] = 70;

    for (int j = 0; j < 3; j++) {
        cout << "Datos del estudiante " << j + 1 << endl;
        cout << "Nombre : " << estudiantes[j].nombre << endl;
        cout << "Notas del estudiante : ";

        for (int i = 0; i < 3; i++) {
            cout << estudiantes[j].notas[i] << "\t";
        }
        cout << "\n" << endl;
    }

    return 0;
}
