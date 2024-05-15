#ifndef L1ESTRUCTURASMENDOZA_H_INCLUDED
#define L1ESTRUCTURASMENDOZA_H_INCLUDED
#include "L2OrdenamientosBusquedas.h"
#include <iostream>
using namespace std;
void EncabezadoMendoza();
void MenuArreglosMendoza();
void EncabezadoMendoza(){
    string encabezado[1][2][3]={"UNIVERSIDAD ESPE-SD","NOMBRE: MENDOZA JUSTIN","ASIGNATURA: F. PROGRAMACION","DOCENTE: ING. VERONICA MARTINEZ","TEMA: LAB2","FECHA: 7/2/24",};
    cout << "============================================================" << endl;

    for(int i=0; i<1 ; i++){
        for(int j=0; j<2 ; j++){
            for(int k=0; k<3 ; k++){
                cout << encabezado[i][j][k] << endl;
            }
        }
    }
    cout << "============================================================" << endl;
    MenuArreglosMendoza();
}
void MenuArreglosMendoza(){
    string menuArreglosMendoza[7][1]={"\n============================================================","     [1] Nombres Apellidos  ----ARREGLO STRING -BURBUJA - BINARIA","     [2] Edades             ----ARREGLO INT - INSERCCIÓN -SECUENCIAL","     [3] Peso               -----ARREGLO FLOAT -SELECCION -BINARIA","     [4] Salir...","============================================================\n","SELECCIONA UNA OPCION..:"};
    int opMenuMendoza;
    for(int i=0; i<7 ; i++){
        for(int j=0; j<1 ; j++){
            cout << menuArreglosMendoza[i][j] << endl;
        }
    }
    cin>>opMenuMendoza;
    switch(opMenuMendoza){
        case 1:
            //1. void Nombres Apellidos  ----ARREGLO STRING -BURBUJA - BINARIA
            NombresApellidosMendoza();
            MenuArreglosMendoza();
            break;
        case 2:
            //2. void edades                      ----ARREGLO INT - INSERCCIÓN -SECUENCIAL
            EdadesMendoza();
            MenuArreglosMendoza();
            break;
        case 3:
            //3. void peso                         -----ARREGLO FLOAT -SELECCION -BINARIA
            PesoMendoza();
            MenuArreglosMendoza();
            break;
        case 4:
            cout << "\n\tSALISTE CON EXITO..VUELVE PRONTO.\n" << endl;
            break;
        default:
            cout << "\n\tOPCION INCORRECTA..VUELVE A INTENTARLO.\n" << endl;
            MenuArreglosMendoza();
    }
}

#endif // L1ESTRUCTURASMENDOZA_H_INCLUDED
