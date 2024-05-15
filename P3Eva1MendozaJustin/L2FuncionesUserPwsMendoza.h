#ifndef L2FUNCIONESUSERPWSMENDOZA_H_INCLUDED
#define L2FUNCIONESUSERPWSMENDOZA_H_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include <algorithm>
#include <cctype>


using namespace std;

void ResgistroClienteMendoza();
string GenerarUserMendoza(string nom1Mendoza, string nom2Mendoza, string ape1Mendoza, int mmMendoza);
string GenerarCorreoMendoza(string usuarioMendoza, string dominioMendoza);
string GenerarIdMendoza(string UNIVERSIDAD, string carreraMendoza, int anioMendoza);
string dominioMendoza="@espe.edu.ec";
string nom1Mendoza, nom2Mendoza;
string ape1Mendoza, ape2Mendoza, usuarioMendoza,correoMendoza, idMendoza, carreraMendoza, nivelMendoza, materiaMendoza;
int ddMendoza, mmMendoza, anioMendoza;
string UNIVERSIDAD="UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE-SD";

void ResgistroClienteMendoza(){
    setlocale(LC_ALL,"");
    string nombresMendoza, fechaNacimiento;
    cout << "INGRESA EL PRIMER NOMBRE:" << endl;
    cin >> nom1Mendoza;
    cout << "INGRESA EL SEGUNDO NOMBRE:" << endl;
    cin >> nom2Mendoza;
    cout << "INGRESA EL PRIMER APELLIDO:" << endl;
    cin >> ape1Mendoza;
    cout << "INGRESA EL SEGUNDO APELLIDO:" << endl;
    cin >> ape2Mendoza;
    cout << "INGRESA EL DIA DE NACIMIENTO: [1 AL 31]" << endl;
    cin >> ddMendoza;
    while(ddMendoza<1||ddMendoza>31){
        cout << "VUELVA A INGRESAR EL DIA DE NACIMIENTO: [1 AL 31]" << endl;
        cin >> ddMendoza;
    }
    cout << "INGRESA EL MES DE NACIMIENTO: [1 AL 12]" << endl;
    cin >> mmMendoza;
    while(mmMendoza<1||mmMendoza>12){
        cout << "VUELVA A INGRESAR EL MES DE NACIMIENTO: [1 AL 12]" << endl;
        cin >> mmMendoza;
    }
    cout << "INGRESA EL AÑO DE NACIMIENTO: [1975 AL 2006]" << endl;
    cin >> anioMendoza;
    while(anioMendoza<1975||anioMendoza>2006){
        if(anioMendoza>2006){
            cout << "DEBE SER MAYOR DE EDAD" << endl;
        }
        cout << "VUELVA A INGRESAR EL AÑO DE NACIMIENTO: [1975 AL 2006]" << endl;
        cin >> anioMendoza;
    }

    cout << "INGRESA LA CARRERA: " << endl;
    cin >> carreraMendoza;
    cout << "INGRESA EL NIVEL: " << endl;
    cin >> nivelMendoza;
    cin.ignore();
    cout << "INGRESA LA MATERIA: " << endl;
    getline(cin,materiaMendoza);
    nombresMendoza.append(nom1Mendoza);
    nombresMendoza.append(" ");
    nombresMendoza.append(nom2Mendoza);
    nombresMendoza.append(" ");
    nombresMendoza.append(ape1Mendoza);
    nombresMendoza.append(" ");
    nombresMendoza.append(ape2Mendoza);
    cout << "DATOS DE USUARIO" << endl;
    cout << "NOMBRES: " << nombresMendoza << endl;
    cout << "FECHA: "  << ddMendoza << "/" << mmMendoza << "/" << anioMendoza << endl;
    cout << "CARRERA: "  << carreraMendoza << endl;
    cout << "NIVEL: "  << nivelMendoza << endl;
    cout << "MATERIA: "  << materiaMendoza << endl;
    usuarioMendoza = GenerarUserMendoza(nom1Mendoza, nom2Mendoza, ape1Mendoza, mmMendoza);
    correoMendoza = GenerarCorreoMendoza(usuarioMendoza, dominioMendoza);
    idMendoza = GenerarIdMendoza(UNIVERSIDAD, carreraMendoza, anioMendoza);



}
string GenerarUserMendoza(string nom1Mendoza, string nom2Mendoza, string ape1Mendoza, int mmMendoza){
    string usuario, ape1User, ape2User, mmUser, mesMendoza;
    string nom1User=nom1Mendoza;
    string nom2User=nom2Mendoza;
    nom1User= nom1Mendoza.substr(0,1);
    nom2User= nom2Mendoza.substr(0,1);
    usuario.append(nom1User);
    usuario.append(nom2User);
    usuario.append(ape1Mendoza);
    if(mmMendoza<10){
        usuario.append("0");
    }
    mesMendoza = to_string(mmMendoza);//transforma de int a string
    mmUser = mesMendoza.substr(0,2);
    usuario.append(mmUser);
    for(int i=0 ; usuario[i] ; i++){
        usuario[i] = tolower(usuario[i]);
    }
    cout << "USER: "  << usuario << endl;
    return usuario;
}
string GenerarCorreoMendoza(string usuarioMendoza, string dominioMendoza){
    string correo;
    correo.append(usuarioMendoza);
    correo.append(dominioMendoza);
    for(int i=0 ; correo[i] ; i++){
        correo[i] = tolower(correo[i]);
    }
    cout << "E-MAIL: "  << correo << endl;
    return correo;
}
string GenerarIdMendoza(string UNIVERSIDAD, string carreraMendoza, int anioMendoza){
    string ID, strAnio;
    strAnio=to_string(anioMendoza);
    string aMendoza = UNIVERSIDAD.substr(35,4);
    ID.append(aMendoza);
    ID.append("-");
    ID.append(carreraMendoza);
    ID.append("-");
    ID.append(strAnio);
    for(int i=0 ; ID[i] ; i++){
        ID[i] = toupper(ID[i]);
    }
    cout << "ID: " << ID << endl;
    return ID;
}


#endif // L2FUNCIONESUSERPWSMENDOZA_H_INCLUDED
