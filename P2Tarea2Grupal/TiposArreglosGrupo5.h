#ifndef TIPOSARREGLOSGRUPO5_H_INCLUDED
#define TIPOSARREGLOSGRUPO5_H_INCLUDED
#include <iostream>
#include <string>
#include <cmath>
#include "EstructuraGrupo5.h"

using namespace std;

void UnidimensionalTorres();
void BidimensionalTroya();
void MultidimensionalMendoza();

string Fecha();
string Paises[100], nomApe[10][10], id_User[10][10], Peliculas[5][5][5], Fechas;
float Precios=0;
int TamanoUni=0, TamanoBidi=0, TamanoMulti=0;

void UnidimensionalTorres(){
    int i,contador;
    TamanoUni=3;
    cout << "\nIngrese " << TamanoUni << " Paises que deseas visitar: \n" << endl;
    contador=0;
    for(i=0; i<TamanoUni ; i++){
        contador = contador+1;
        cout << "Introduce nombre del pais #"<< contador << " : " << endl;
        cin >> Paises[i];
    }
    cout << "\nPaises ingresados\n" << endl;
    ImprimirArrayUni(Paises, 3);
}
void BidimensionalTroya(){
    int i, j, contador, n=2, m=2;
    TamanoBidi=n*m;
    contador=0;
    cout << "\nIngresa " << TamanoBidi << " usuarios: \n" << endl;
    cin.ignore();
    for(i = 0; i < n ; i++){
        for(j = 0 ; j < m ; j++){
            contador = contador+1;
            cout << "Usuario #" << contador  << " ["<< i <<"]["<< j <<"]" << endl;
            cout << "Introduce nombre y apellido del usuario "<< contador << " : " << endl;
            getline(cin,nomApe[i][j]);
        }
    }
    cout << "\nIngresa " << TamanoBidi << " ID´s: \n" << endl;
    contador=0;
    for(i = 0; i < n ; i++){
        for(j = 0 ; j < m ; j++){
            contador = contador+1;
            cout << "ID #" << contador  << " ["<< i <<"]["<< j <<"]" << endl;
            cout << "Introduce  el id #"<< contador << " : " << endl;
            cin >> id_User[i][j];
        }
    }
    cout << "\nPaises ingresados\n" << endl;
    ImprimirArrayBidi(nomApe, id_User, n, m);
}
void MultidimensionalMendoza(){
    int i, j, k, contador;
    TamanoMulti=pow(2,3);
    cout << "Ingres el precio base de las funciones de peliculas: [$1 al $20]" << endl;
    cin >> Precios;
    while(Precios<1||Precios>20){
        cout << "ERROR VUELVE A INGRESAR UN PRECIO CORRECTOS DESDE [$1 al $10]" << endl;
        cout << "Ingres el precio base de las funciones de peliculas #:" << contador << " [$1 al $20]" << endl;
        cin >> Precios;
    }
    cout << "Ingresa la fecha para las funciones de las peliculas:" << endl;
    Fechas=Fecha();
    cout << "\nIngresa " << TamanoMulti << " funciones para el cine: \n" << endl;
    contador=0;
    cin.ignore();
    for(i=0; i < 2; i++){
        for(j=0; j < 2; j++){
            for(k=0; k < 2; k++){
                contador=contador+1;
                cout << "\n         Funcion #" << contador  << " ["<< i <<"]["<< j <<"][" << k << "]" << endl;
                cout << "Ingres el nombre de la pelicula #:" << contador << endl;
                getline(cin,Peliculas[i][j][k]);
            }
        }
    }
    ImprimirArrayMulti(Peliculas, Fechas, Precios, 2, 2, 2);
}
string Fecha(){
    int dia, mes, anio;
    string aa, aa2, mm, dd, formaFecha;
    cout << "Ingresa el año: [2024]" << endl;
    cin >> anio;
    while(anio!=2024){
        cout << "AÑO INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa el año: [2024]" << endl;
        cin >> anio;
    }
    cout << "Ingresa un mes: [1 al 12]" << endl;
    cin >> mes;
    while(mes<1 || mes>12){
        cout << "MES INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa un mes: [1 al 12]" << endl;
        cin >> mes;
    }
    cout << "Ingresa un dia: [1 al 31]" << endl;
    cin >> dia;
    while(dia<1 || dia>31){
        cout << "Ingresa un dia: [1 al 31]" << endl;
        cin >> dia;
    }
    aa = to_string(anio);
    mm = to_string(mes);
    dd = to_string(dia);
    formaFecha.append(dd);
    formaFecha.append("/");
    formaFecha.append(mm);
    formaFecha.append("/");
    aa2 = aa.substr(2,3);
    formaFecha.append(aa2);
    return formaFecha;
}
#endif // TIPOSARREGLOSGRUPO5_H_INCLUDED
