#ifndef L2STRUCTMENDOZA_H_INCLUDED
#define L2STRUCTMENDOZA_H_INCLUDED
#include <iostream>
#include <fstream>
#include "L1ArchivoMendoza.h"

using namespace std;

void imprimirDatosPersonas();
void CrearArchivosMendoza(int numEstudiantes);
void LecturaArchivosMendoza(int numEstudiantes);
void menuMendoza();
int numEstudiantes;
struct Persona{
    char nombre[20], apellido[20];
    int edad;
    float peso;
    string diereccion;
}   persona1={"Justin", "Mendoza", 19, 1.6, "Nuevo Isrrael"},persona2={"Andres", "duenas", 18, 1.4, "El carmen"},persona3,persona4;//para un tda siempre va un ';'
struct Estudiante{
    string materia, idMateria;
    int horasMateria;
    float promedio;
    struct Persona infoPersona;
}personas[100];
void imprimirDatosPersonas(){
    cout << "PERSONAS DINAMICAS" << endl;
    cin.ignore();
    cout << "Nombre de la persona 3: " << endl;
    cin.getline(persona3.nombre,20,'\n');
    cout << "Apellido de la persona 3: " << endl;
    cin.getline(persona3.apellido,20,'\n');
    cout << "Edad de la persona 3: " << endl;
    cin >> persona3.edad;
    cout << "Peso de la persona 3: " << endl;
    cin >> persona3.peso;
    cin.ignore();
    cout << "Direccion de la persona 3: " << endl;
    getline(cin,persona3.diereccion);
    cout << "\nNombre de la persona 4: " << endl;
    cin.getline(persona4.nombre,20,'\n');
    cout << "Apellido de la persona 4: " << endl;
    cin.getline(persona4.apellido,20,'\n');
    cout << "Edad de la persona 4: " << endl;
    cin >> persona4.edad;
    cout << "Peso de la persona 4: " << endl;
    cin >> persona4.peso;
    cin.ignore();
    cout << "Direccion de la persona 4: " << endl;
    getline(cin,persona4.diereccion);
    cout << "\nLa persona 1" << endl;
    cout << "Nombres: " << persona1.nombre << " " << persona1.apellido << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Peso: " << persona1.peso << endl;
    cout << "Diereccion: " << persona1.diereccion << endl;
    cout << "\nLa persona 2" << endl;
    cout << "Nombres: " << persona2.nombre << " " << persona2.apellido << endl;
    cout << "Edad: " << persona2.edad << endl;
    cout << "Peso: " << persona2.peso << endl;
    cout << "Diereccion: " << persona2.diereccion << endl;
    cout << "\nLa persona 3" << endl;
    cout << "Nombres: " << persona3.nombre << " " << persona3.apellido << endl;
    cout << "Edad: " << persona3.edad << endl;
    cout << "Peso: " << persona3.peso << endl;
    cout << "Diereccion: " << persona3.diereccion << endl;
    cout << "\nLa persona 4" << endl;
    cout << "Nombres: " << persona4.nombre << " " << persona4.apellido << endl;
    cout << "Edad: " << persona4.edad << endl;
    cout << "Peso: " << persona4.peso << endl;
    cout << "Diereccion: " << persona4.diereccion << endl;
    cout << "\nEstructura Anidada" << endl;
    cout << "INGRESAR EL NUMERO DE ESTUDIANTES: [1-4]" << endl;
    cin >> numEstudiantes;
    while(numEstudiantes<0 || numEstudiantes>4){
        cout << "VUELVE A INGRESAR EL NUMERO DE ESTUDIANTES: [1-4]" << endl;
        cin >> numEstudiantes;
    }
    for(int i=0; i<numEstudiantes; i++){
        fflush(stdin);
        cout << "Nombre de la persona: " << i+1 << endl;
        cin.getline(personas[i].infoPersona.nombre,20,'\n');
        cout << "Apellido de la persona: " << i+1 << endl;
        cin.getline(personas[i].infoPersona.apellido,20,'\n');
        cout << "Edad de la persona: " << i+1 << endl;
        cin >> personas[i].infoPersona.edad;
        cout << "Peso de la persona: " << i+1 << endl;
        cin >> personas[i].infoPersona.peso;
        cin.ignore();
        cout << "Direccion de la persona: " << i+1 << endl;
        getline(cin,personas[i].infoPersona.diereccion);
        cout << "Materia: " << i+1 << endl;
        getline(cin,personas[i].materia);
        cout << "id de la materia: " << i+1 << endl;
        getline(cin,personas[i].idMateria);
        cout << "Horas de la materia: " << i+1 << endl;
        cin >> personas[i].horasMateria;
        cout << "Promedio de la materia: " << i+1 << endl;
        cin >> personas[i].promedio;
    }
    for(int i=0; i<numEstudiantes; i++){
        cout << "\nEl Estudiente" << i+1 << endl;
        cout << "Nombres: " << personas[i].infoPersona.nombre << " " << personas[i].infoPersona.apellido << endl;
        cout << "Edad: " << personas[i].infoPersona.edad << endl;
        cout << "Peso: " << personas[i].infoPersona.peso << endl;
        cout << "Diereccion: " << personas[i].infoPersona.diereccion << endl;
        cout << "Materia: " << personas[i].materia <<endl;
        cout << "ID Materia: " << personas[i].idMateria <<endl;
        cout << "Horas Materia: " << personas[i].horasMateria <<endl;
        cout << "Promedio Materia: " << personas[i].promedio <<endl;
    }
    CrearArchivosMendoza(numEstudiantes);

}

void menuMendoza(){
    int opMenu;
    cout << "[1] INGRESAR DATOS AL TDA - CREAR EL ARCHIVO.TXT" << endl;
    cout << "[2] LEER EL ARCHIVO.TXT" << endl;
    cout << "[3] SALIR" << endl;
    cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
    cin >> opMenu;
    switch(opMenu){
        case 1:
            imprimirDatosPersonas();
            menuMendoza();
            break;
        case 2:
            LecturaArchivosMendoza(numEstudiantes);
            menuMendoza();
            break;
        case 3:
            cout << "SALISTE CON EXITO.." << endl;
            break;
        default:
            cout << "OPCION INCORRECTA VUELVE A INTENTARLO.." << endl;
            menuMendoza();
    }
}
#endif // L2STRUCTMENDOZA_H_INCLUDED
