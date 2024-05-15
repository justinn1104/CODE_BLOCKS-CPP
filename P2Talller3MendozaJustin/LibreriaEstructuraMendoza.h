#ifndef LIBRERIAESTRUCTURAMENDOZA_H_INCLUDED
#define LIBRERIAESTRUCTURAMENDOZA_H_INCLUDED
#include "LibreriaArregloMendoza.h"
#include <iostream>

using namespace std;


void MenuMendoza();
void MenuOrdenamientosMendoza();
void MenuBusquedasMendoza();

int opMenuMendoza;

void MenuMendoza(){
    cout << "      MENU ARRGLOS" << endl;
    cout << "   [1] UNIDIMENSIONAL" << endl;
    cout << "   [2] BIDIMENSIONAL" << endl;
    cout << "   [3] MULTIDIMENSIONALES" << endl;
    cout << "   [4] ORDENAMIENTOS" << endl;
    cout << "   [5] BUSQUEDAS" << endl;
    cout << "   [6] SAIIR" << endl;
    cout << "SALECCIONA UNA OPCION:" << endl;
    cin >> opMenuMendoza;
    switch(opMenuMendoza){
        case 1:
            MenuMendoza();
            break;
        case 2:
            MenuMendoza();
            break;
        case 3:
            MenuMendoza();
            break;
        case 4:
            MenuOrdenamientosMendoza();
            MenuMendoza();
            break;
        case 5:
            MenuBusquedasMendoza();
            MenuMendoza();
            break;
        case 6:

            break;
        default:
            MenuMendoza();
            break;
    }

}

void MenuOrdenamientosMendoza(){
    cout << "      MENU ARRGLOS" << endl;
    cout << "   [1] M. BURBUJA" << endl;
    cout << "   [2] M. INSERCION" << endl;
    cout << "   [3] M. SELECCION" << endl;
    cout << "   [4] SAIIR" << endl;
    cout << "SALECCIONA UNA OPCION:" << endl;
    cin >> opMenuMendoza;
    switch(opMenuMendoza){
        case 1:
            MenuOrdenamientosMendoza();
            break;
        case 2:
            MenuOrdenamientosMendoza();
            break;
        case 3:
            MenuOrdenamientosMendoza();
            break;
        case 4:
            break;
        default:
            MenuOrdenamientosMendoza();
            break;
    }
}

void MenuBusquedasMendoza(){
    cout << "      MENU ARRGLOS" << endl;
    cout << "   [1] B. BINARIA " << endl;
    cout << "   [2] B. SECUANCIAL" << endl;
    cout << "   [3] SAIIR" << endl;
    cout << "SALECCIONA UNA OPCION:" << endl;
    cin >> opMenuMendoza;
    switch(opMenuMendoza){
        case 1:
            MenuBusquedasMendoza();
            break;
        case 2:
            MenuBusquedasMendoza();
            break;
        case 3:
            break;
        default:
            MenuBusquedasMendoza();
            break;
    }
}

#endif // LIBRERIAESTRUCTURAMENDOZA_H_INCLUDED
