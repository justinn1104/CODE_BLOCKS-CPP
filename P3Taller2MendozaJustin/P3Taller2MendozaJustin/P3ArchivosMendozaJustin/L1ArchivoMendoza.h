#ifndef L1ARCHIVOMENDOZA_H_INCLUDED
#define L1ARCHIVOMENDOZA_H_INCLUDED
#include "L2StructMendoza.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void CrearArchivosMendoza(int numEstudiantes);
void LecturaArchivosMendoza(int numEstudiantes);

void CrearArchivosMendoza(int numEstudiantes){
    cout << "==========================" << endl;
    cout << "|| CREAR UN ARCHIVO.TXT ||" << endl;
    cout << "==========================" << endl;
    ofstream ArchivoRegistroEstudiantes;
    ArchivoRegistroEstudiantes.open("RegistroEstudiantes.txt",ios::app);
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


void LecturaArchivosMendoza(int numEstudiantes){
    ifstream archivoRegistroEstudiantesMendoza;
    string textoArchivoMendoza, archivoLecturaMendoza, siNoMendoza;
    bool band=false,valida=false;
    cout << "==========================" << endl;
    cout << "|| LEER UN ARCHIVO.TXT ||" << endl;
    cout << "==========================" << endl;
    do{
        cout << "INGRESA EL NOMBRE DEL ARCHIVO QUE DESEA ABRIR (SIN EL .TXT): " << endl;
        cin >> archivoLecturaMendoza;
        archivoLecturaMendoza.append(".txt");
        archivoRegistroEstudiantesMendoza.open(archivoLecturaMendoza, ios::in);
        if(archivoRegistroEstudiantesMendoza.fail()){
            cout << "ERROR, NO SE PUEDE ABRIR EL ARCHIVO SOLO LECTURA.." << endl;
        }else{
            cout << "ARCHIVO ABIERTO EN EL MODO LECTURA.." << endl;
            while(getline(archivoRegistroEstudiantesMendoza, textoArchivoMendoza)){
                cout << textoArchivoMendoza << endl;
            }
        }
        archivoRegistroEstudiantesMendoza.close();
        cout << "¿DESEAR VOLVER A INGRESAR EL NOMBRE EL ARCHIVO? [Si o No]" << endl;
        cin >> siNoMendoza;
        for(int i=0; siNoMendoza[i]; i++){
            siNoMendoza[i] = tolower(siNoMendoza[i]);
        }
        cout << siNoMendoza << endl;
        while(siNoMendoza!="si" && siNoMendoza!="no"){
            cout << "VUELVA A INGRESAR [Si o No]" << endl;
            cin >> siNoMendoza;
            for(int i=0; siNoMendoza[i]; i++){
                siNoMendoza[i] = tolower(siNoMendoza[i]);
            }
        }
        if(siNoMendoza=="si"){
            band = false;
        }else{
            band = true;
        }
    }while(band!=true);
}

#endif // L1ARCHIVOMENDOZA_H_INCLUDED
