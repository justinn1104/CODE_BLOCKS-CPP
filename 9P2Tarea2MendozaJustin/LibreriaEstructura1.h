// Esta libreria contiene la portada y  menu del programa y algoritmos Ordenamiento y busqueda.
#ifndef LIBRERIAESTRUCTURA1_H_INCLUDED
#define LIBRERIAESTRUCTURA1_H_INCLUDED
#include <iostream>
#include "LibreriaEstructura2.h"
#include "LibreriaEstructura3.h"
#include "LibreriaEstructura4.h"

using namespace std;
void Emcabezado();
void Menu();
void OrdenamientoBurbujaEmcabezado(string Burbuja[], int n);

string Burbuja[100];
int n;

void Emcabezado(){
    int Tam;
    Tam = 7;
    string EmcabezadoCampos[Tam];
    EmcabezadoCampos[0]="Curso : 16366";
    EmcabezadoCampos[1]="Intregrantes : Troya Emily, Torres Lisseth, Mendoza Justin";
    EmcabezadoCampos[2]="Asignatura : F. Programacion";
    EmcabezadoCampos[3]="Grupo : Grupo 3";
    EmcabezadoCampos[4]="Unidad : UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS";
    EmcabezadoCampos[5]="Fecha : 16/01/24";
    EmcabezadoCampos[6]="Tema : Tarea 2 Grupal";
    OrdenamientoBurbujaEmcabezado(EmcabezadoCampos,Tam);
    cout << "****************************************************************************\n" << endl;
	for(int i=0; i<Tam; ++i){
        cout << "                " << EmcabezadoCampos[i] << endl;
	}
	cout << "\n****************************************************************************\n" << endl;
	Menu();
}
void Menu(){
    int opMenu;
    cout << "                         ============================" << endl;
	cout << "                         =           MENU           =" << endl;
	cout << "                         = EJERCICIOS - CAPITULO #7 =" << endl;
	cout << "                         ============================\n" << endl;
	cout << "                 [1] Ejercicio 7.1       [8] Ejercicio 7.8 " << endl;
	cout << "                 [2] Ejercicio 7.2       [9] Ejercicio 7.9 " << endl;
	cout << "                 [3] Ejercicio 7.3       [10] Ejercicio 7.10 " << endl;
	cout << "                 [4] Ejercicio 7.4       [11] Ejercicio 7.11 " << endl;
	cout << "                 [5] Ejercicio 7.5       [12] Ejercicio 7.12 " << endl;
	cout << "                 [6] Ejercicio 7.6       [13] Ejercicio 7.13 " << endl;
	cout << "                 [7] Ejercicio 7.7       [14] Ejercicio 7.14 " << endl;
	cout << "                                 [15] SALIR " << endl;
	cout << "SELECIONA UNA OPCION DEL MENU: " << endl;
	cin >> opMenu;
	switch(opMenu){
        case 1:
            mediaDeTresNumeros();
            Menu();
            break;
        case 2:
            FactorialEjercico2();
            Menu();
            break;
        case 3:
            mcdCuatroNumeros();
            Menu();
            break;
        case 4:
            encontrarMayor();
            Menu();
            break;
        case 5:
            calcularPotencia();
            Menu();
            break;
        case 6:
            Cap7_6Mendoza();
            Menu();
            break;
        case 7:
            Cap7_7Mendoza();
            Menu();
            break;
        case 8:
            Cap7_8Mendoza();
            Menu();
            break;
        case 9:
            Cap7_9Mendoza();
            Menu();
            break;
        case 10:
            Cap7_10Mendoza();
            Menu();
            break;
        case 11:
            Ejercicio11();
            Menu();
            break;
        case 12:
            Ejercicio12();
            Menu();
            break;
        case 13:
            Ejercicio13();
            Menu();
            break;
        case 14:
            Ejercicio14();
            Menu();
            break;
        case 15:
            cout << "SALISTE CON EXITO..VUELVE PRONTO.." << endl;
            break;
        default:
            cout << "OPCION SELECCIONADA ES ERROONEA.. SELECCIONA UNA CORRRECTA.." << endl;
            Menu();
            break;
	}
}
void OrdenamientoBurbujaEmcabezado(string Burbuja[], int n){
    int i , j;
    string aux;
    for(i= 0; i<n; ++i){
        for(j=0; j<n; ++j){
            if(Burbuja[j] > Burbuja[j+1]){
                aux = Burbuja[j];
				Burbuja[j] = Burbuja[j+1];
				Burbuja[j+1] = aux;
            }
        }
    }
}
#endif // LIBRERIAESTRUCTURA1_H_INCLUDED
