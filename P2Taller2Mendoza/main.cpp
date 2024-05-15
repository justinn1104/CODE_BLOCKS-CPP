#include <iostream>

using namespace std;

void EncabezadoMendoza();
void ArrayUnidimensionalEstaticoMendoza();
void ArrayUnidimensionalDinamicoMendoza();

int main(){
    EncabezadoMendoza();
    return 0;
}
void EncabezadoMendoza(){
    string encabezadoMendoza[5];
    encabezadoMendoza[0]="Unidad: Universidad ESPE-SD";
    encabezadoMendoza[1]="Nombre: Justin Mendoza";
    encabezadoMendoza[2]="Asignatura: F. Programacion";
    encabezadoMendoza[3]="Tema: Taller 2 Arrays";
    encabezadoMendoza[4]="Docente: Ing. Veronica Martinez";
    cout << "========================================" << endl;
    for(int i=0; i<5 ; i++){
        cout << encabezadoMendoza[i] << endl;
    }
    cout << "\nARREGLO UNIDIMENSIONAL ESTATICO\n" << endl;
    ArrayUnidimensionalEstaticoMendoza();
    cout << "\nARREGLO UNIDIMENSIONAL DINAMICO\n" << endl;
    ArrayUnidimensionalDinamicoMendoza();
}


void ArrayUnidimensionalEstaticoMendoza(){
    int contador;
    contador=0;
    string datosPersonales[100];
    datosPersonales[0]="Unidad: Universidad ESPE-SD";
    datosPersonales[1]="Nombre: Justin Mendoza";
    datosPersonales[2]="Años: 19";
    datosPersonales[3]="Sexo: Hombre";
    for(int i=0; i<4 ; i++ ){
        contador=contador+1;
        cout << "Dato" << contador << "del arrglo es: " << datosPersonales[i] << endl;
    }
}
void ArrayUnidimensionalDinamicoMendoza(){
    int cantidad, contador;
    string datosPersonales[100];
    cout << "Ingresa la cantidad de datos que desea:" << endl;
    cin >> cantidad;
    contador=0;
    for (int i=0 ; i<cantidad ; i++){
        contador=contador+1;
        cout << "Ingresa el dato #" << contador << " :" << endl;
        cin >> datosPersonales[i];
    }
    contador=0;
    for (int i=0 ; i<cantidad ; i++){
        contador=contador+1;
        cout << "Dato " << contador << " del arrglo es: " << datosPersonales[i] << endl;
    }
}
