#ifndef L2FUNCIONESMENDOZA_H_INCLUDED
#define L2FUNCIONESMENDOZA_H_INCLUDED
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;


void Longitud_StringMendoza();
void Longitud_CharMendoza();
void Concatenar_StringMendoza();
void Concatenar_CharMendoza();

void Longitud_StringMendoza(){
    setlocale(LC_ALL,"");
    string nom1Mendoza, nom2Mendoza, apelllidosMendoza;
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cin.ignore();
    cout << "INGRESA LOS APELLIDOS:" << endl;
    getline(cin,apelllidosMendoza);
    cout << "UTILIZA FUNCIO .SIZE()" << endl;
    cout << "El tamaño del nombre 1 es:" << nom1Mendoza.size() << endl;
    cout << "El tamaño del nombre 2 es:" << nom2Mendoza.size() << endl;
    cout << "El tamaño de los apellidos 1 es:" << apelllidosMendoza.size() << endl;
    cout << "UTILIZA FUNCIO .LENGTH()" << endl;
    cout << "El tamaño del nombre 1 es:" << nom1Mendoza.length() << endl;
    cout << "El tamaño del nombre 2 es:" << nom2Mendoza.length() << endl;
    cout << "El tamaño de los apellidos 1 es:" << apelllidosMendoza.length() << endl;
}
void Longitud_CharMendoza(){
    setlocale(LC_ALL,"");
    char nom1Mendoza[100], nom2Mendoza[100], apelllidosMendoza[100];
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cin.ignore();
    cout << "INGRESA LOS APELLIDOS:" << endl;
    cin.getline(apelllidosMendoza,100);
    cout << "El tamaño del nombre 1 es:" << strlen(nom1Mendoza) << endl;
    cout << "El tamaño del nombre 2 es:" << strlen(nom2Mendoza) << endl;
    cout << "El tamaño de los apellidos 1 es:" << strlen(apelllidosMendoza) << endl;
}
void Concatenar_StringMendoza(){
    setlocale(LC_ALL,"");
    string nom1Mendoza, nom2Mendoza, apelllidosMendoza;
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cin.ignore();
    cout << "INGRESA LOS APELLIDOS:" << endl;
    getline(cin,apelllidosMendoza);

}
void Concatenar_CharMendoza(){
    setlocale(LC_ALL,"");
    char nom1Mendoza[100], nom2Mendoza[100], apelllidosMendoza[100], nomCompletoMendoza[100], nomApeMendoza[100];
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cin.ignore();
    cout << "INGRESA LOS APELLIDOS:" << endl;
    cin.getline(apelllidosMendoza,100);
    cout << "El NOMBRE1 Y NOMBRE 2 CONTENADO:" << strcat(strcat(nom1Mendoza," "),nom2Mendoza) << endl;

    cout << "El NOMBRE1 Y NOMBRE 2 CONTENADO:" << endl;

}

#endif // L2FUNCIONESMENDOZA_H_INCLUDED
