#ifndef L1ARCHIVOMENDOZA_H_INCLUDED
#define L1ARCHIVOMENDOZA_H_INCLUDED
#include "L2StructMendoza.h"
#include <iostream>
#include <fstream>


using namespace std;

void ArchivosMendoza(int numEstudiantes);

void ArchivosMendoza(int numEstudiantes){
    int mendoza1=2024;
    float mendoza2=12.3;
    string mendoza3="Mendoza Justin";
    ofstream ArchivoRegistroEstudiantes("RegistroEstudiantes.txt");
    if(ArchivoRegistroEstudiantes.is_open()){
        ArchivoRegistroEstudiantes << "\n\tSTRUCT SIMPLE" << endl;
        ArchivoRegistroEstudiantes << "\n2 ESTUDIANTES ESTATICOS" << endl;
        ArchivoRegistroEstudiantes << "\nLa persona 1" << endl;
        ArchivoRegistroEstudiantes << "Nombres: " << persona1.nombre << " " << persona1.apellido << endl;
        ArchivoRegistroEstudiantes << "Edad: " << persona1.edad << endl;
        ArchivoRegistroEstudiantes << "Peso: " << persona1.peso << endl;
        ArchivoRegistroEstudiantes << "Diereccion: " << persona1.diereccion << endl;
        ArchivoRegistroEstudiantes << "\nLa persona 2" << endl;
        ArchivoRegistroEstudiantes << "Nombres: " << persona2.nombre << " " << persona2.apellido << endl;
        ArchivoRegistroEstudiantes << "Edad: " << persona2.edad << endl;
        ArchivoRegistroEstudiantes << "Peso: " << persona2.peso << endl;
        ArchivoRegistroEstudiantes << "Diereccion: " << persona2.diereccion << endl;
        ArchivoRegistroEstudiantes << "\n2 ESTUDIANTES DINAMICOS" << endl;
        ArchivoRegistroEstudiantes << "\nLa persona 3" << endl;
        ArchivoRegistroEstudiantes << "Nombres: " << persona3.nombre << " " << persona3.apellido << endl;
        ArchivoRegistroEstudiantes << "Edad: " << persona3.edad << endl;
        ArchivoRegistroEstudiantes << "Peso: " << persona3.peso << endl;
        ArchivoRegistroEstudiantes << "Diereccion: " << persona3.diereccion << endl;
        ArchivoRegistroEstudiantes << "\nLa persona 4" << endl;
        ArchivoRegistroEstudiantes << "Nombres: " << persona4.nombre << " " << persona4.apellido << endl;
        ArchivoRegistroEstudiantes << "Edad: " << persona4.edad << endl;
        ArchivoRegistroEstudiantes << "Peso: " << persona4.peso << endl;
        ArchivoRegistroEstudiantes << "Diereccion: " << persona4.diereccion << endl;
        ArchivoRegistroEstudiantes << "\n\tSTRUCT ANIDADO" << endl;
        for(int i=0; i<numEstudiantes; i++){
            ArchivoRegistroEstudiantes << "\nEl Estudiente" << i+1 << endl;
            ArchivoRegistroEstudiantes << "Nombres: " << personas[i].infoPersona.nombre << " " << personas[i].infoPersona.apellido << endl;
            ArchivoRegistroEstudiantes << "Edad: " << personas[i].infoPersona.edad << endl;
            ArchivoRegistroEstudiantes << "Peso: " << personas[i].infoPersona.peso << endl;
            ArchivoRegistroEstudiantes << "Diereccion: " << personas[i].infoPersona.diereccion << endl;
            ArchivoRegistroEstudiantes << "Materia: " << personas[i].materia <<endl;
            ArchivoRegistroEstudiantes << "ID Materia: " << personas[i].idMateria <<endl;
            ArchivoRegistroEstudiantes << "Horas Materia: " << personas[i].horasMateria <<endl;
            ArchivoRegistroEstudiantes << "Promedio Materia: " << personas[i].promedio <<endl;
        }
        ArchivoRegistroEstudiantes.close();
        cout << "LOS DATOS SE HAN GUARDADO EN EL ARCHIVO 'RegistroEstudiantes.txt' correctamente." << endl;
    }else{
        cerr << "ERROR AL ABRIR EL ARCHIVO" << endl;
    }
}

#endif // L1ARCHIVOMENDOZA_H_INCLUDED
