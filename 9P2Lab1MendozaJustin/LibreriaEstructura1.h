#ifndef LIBRERIAESTRUCTURA1_H_INCLUDED
#define LIBRERIAESTRUCTURA1_H_INCLUDED
#include <iostream>
#include <cmath>
#include "LibreriaEstructura2.h"

using namespace std;

void EncabezadoMendoza();
void MenuMendoza();

void EncabezadoMendoza(){
    //VARIABLES----> DE LA PORTADA
    string UNI, Nombre, Apellido, Asignatura, Curso, fecha;
    //DATOS ESTATICOS----> DE LA PORTADA
    Nombre = "Justin"; Apellido = "Mendoza"; Curso = "16366"; Asignatura = "F. Programacion";
	UNI = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS"; fecha = "12/01/2024";
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> PORTADA
	cout << "****************************************************************************\n" << endl;
	cout << "            ==============================================" << endl;
	cout << "            = " << UNI << "                   =" << endl;
    cout << "            ==============================================" << endl;
    cout << "                ======================================" << endl;
    cout << "                =  Nombre : " << Nombre << "                   =" << endl;
	cout << "                =  Apellido : " << Apellido << "                =" << endl;
	cout << "                =  Asignatura : " << Asignatura << "      =" << endl;
	cout << "                =  Curso : " << Curso << "                     =" << endl;
	cout << "                =  Fecha : " << fecha << "                 =" << endl;
	cout << "                ======================================\n" << endl;
	cout << "****************************************************************************\n" << endl;
	cout << "                           ====================" << endl;
	cout << "                           =  LABORATORIO #1  =" << endl;
	cout << "                           ====================\n" << endl;//--->FINAL DE PORTADA
}

void MenuMendoza(){
    int opcMenuMendoza, n_Mendoza;
    n_Mendoza=0;
    cout << "******************************** MENU **************************************\n" << endl;
    cout << "                ======================================" << endl;
    cout << "                =  [1] EJERCICIO #9  - CAP3          =" << endl;
    cout << "                =  [2] EJERCICIO #7  - CAP4          =" << endl;
    cout << "                =  [3] EJERCICIO #3  - CAP5          =" << endl;
    cout << "                =  [4] EJERCICIO #8  - CAP6          =" << endl;
    cout << "                =  [5] SALIR                         =" << endl;
    cout << "                ======================================\n" << endl;
    cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
    cin >> opcMenuMendoza;
    switch(opcMenuMendoza){
        case 1://EJERCICIO DEL CAP3
            cout << "Diseña un algoritmo para deternminar los numeros primos" << endl;
            cout << "iguales o menores que N (Leido por teclado). Un número primo" << endl;
            cout << "sólo puede ser divisible por el mismo y por la unida\n" << endl;
            cout << "INGRESA UN NUMERO ENTERO DENTRO DEL RANGO [ 1 - 100 ]" << endl;
            cin >> n_Mendoza;
            while(n_Mendoza<=0 ||  n_Mendoza >100){
                cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [ 1 - 100 ] " << endl;
                cout << "INGRESA UN NUMERO ENTERO DENTRO DEL RANGO [ 1 - 100 ]" << endl;
                cin >> n_Mendoza;
            }
            Cap3_9Mendoza(n_Mendoza);
            MenuMendoza();
            break;
        case 2://EJERCICIO DEL CAP4
            Cap4_7Mendoza();
            MenuMendoza();
            break;
        case 3://EJERCICIO DEL CAP5
            Cap5_3Mendoza();
            MenuMendoza();
            break;
        case 4://EJERCICIO DEL CAP6
            Cap6_8Mendoza();
            MenuMendoza();
            break;
        case 5://OPCION DE SALIDA DEL PROCESO
            cout << "SALISTE...DEL PROGRAMA..GRACIA." << endl;
            break;
        default:
            cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [1 - 5]" << endl;
            MenuMendoza();
            break;
    }
}



#endif // LIBRERIAESTRUCTURA1_H_INCLUDED
