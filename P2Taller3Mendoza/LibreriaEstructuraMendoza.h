#ifndef LIBRERIAESTRUCTURAMENDOZA_H_INCLUDED
#define LIBRERIAESTRUCTURAMENDOZA_H_INCLUDED
#include "LibreriaArreglosMendoza.h"


#include <iostream>

using namespace std;

void EncabezadoMendoza();
void MenuMendoza();
void MenuOrdenamientosMendoza();
void MenuBusquedasMendoza();
//string A_OrdenadoUniEstatico[10], A_OrdenadoUniDinamico[10], A_OrdenadoBidiEstatico[2][2] , A_OrdenadoBidiDinamico[10][10], A_OrdenadoMultiEstatico[2][2][2], A_OrdenadoMultiDinamico[3][3][3];
string UniDimendional_Burbuja(string arrays1[], int fila);
string Bidimendional_Burbuja(string arrays2[][10], int fila, int columna);
string Multidimendional_Burbuja(string arrays3[][3][3], int fila, int columna, int profundidad);

string UniDimendional_Insercion(string arrays1[], int fila);
string Bidimendional_Insercion(string arrays2[][10], int fila, int columna);
string Multidimendional_Insercion(string arrays3[][3][3], int fila, int columna, int profundidad);

string UniDimendional_Seleccion(string arrays1[], int fila);
string Bidimendional_Seleccion(string arrays2[][10], int fila, int columna);
string Multidimendional_Seleccion(string arrays3[][3][3], int fila, int columna, int profundidad);


void ImprimirArrayUni(string arrays1[], int fila);
void ImprimirArrayBidi(string arrays2[][10], int fila, int columna);
void ImprimirArrayMulti(string arrays3[][3][3], int fila, int columna, int profundidad);

void EncabezadoMendoza(){
    string encabezadoMendoza[5];
    encabezadoMendoza[0]="Unidad: Universidad ESPE-SD";
    encabezadoMendoza[1]="Nombre: Justin Mendoza";
    encabezadoMendoza[2]="Asignatura: F. Programacion";
    encabezadoMendoza[3]="Tema: Taller 2 Arrays";
    encabezadoMendoza[4]="Docente: Ing. Veronica Martinez";
    cout << "========================================" << endl;
    for(int i=0; i<5 ; i++){
        cout << encabezadoMendoza[i] << endl;
    }
    cout << "========================================\n" << endl;
    MenuMendoza();
}
void MenuMendoza(){
    int opMenuMendoza;
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
            cout << "\nARREGLO UNIDIMENSIONAL ESTATICO\n" << endl;
            ArrayUnidimensionalEstaticoMendoza();
            cout << "\nARREGLO UNIDIMENSIONAL DINAMICO\n" << endl;
            ArrayUnidimensionalDinamicoMendoza();
            MenuMendoza();
            break;
        case 2:
            cout << "\nARREGLO BIDIMENSIONAL ESTATICO\n" << endl;
            ArrayBidimensionalEstaticoMendoza();
            cout << "\nARREGLO BIDIMENSIONAL DINAMICO\n" << endl;
            ArrayBidimensionalDinamicoMendoza();
            MenuMendoza();
            break;
        case 3:
            cout << "\nARREGLO MULTIDIMENSIONAL ESTATICO\n" << endl;
            ArrayMultidimensionalEstaticoMendoza();
            cout << "\nARREGLO MULTIDIMENSIONAL DINAMICO\n" << endl;
            ArrayMultidimensionalDinamicoMendoza();
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
    //string A_OrdenadoUni[100];
    int opMenu_O_Mendoza;
    cout << "      MENU ARRGLOS" << endl;
    cout << "   [1] M. BURBUJA" << endl;
    cout << "   [2] M. INSERCION" << endl;
    cout << "   [3] M. SELECCION" << endl;
    cout << "   [4] SAIIR" << endl;
    cout << "SALECCIONA UNA OPCION:" << endl;
    cin >> opMenu_O_Mendoza;
    switch(opMenu_O_Mendoza){
        case 1:
            cout << "\tMETODO BURBUJA" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(tamanoUniEstatico!=0){
                UniDimendional_Burbuja(datosPersonalesUniEstatico , tamanoUniEstatico);
                ImprimirArrayUni(datosPersonalesUniEstatico, tamanoUniEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO UNIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(tamanoUniDinamico!=0){
                UniDimendional_Burbuja(datosPersonalesUniDinamico , tamanoUniDinamico);
                ImprimirArrayUni(datosPersonalesUniDinamico, tamanoUniDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(filaBidiEstatico!=0 && columnaBidiEstatico!=0){
                Bidimendional_Burbuja(datosPersonalesBibiEstatico, filaBidiEstatico, columnaBidiEstatico);
                ImprimirArrayBidi(datosPersonalesBibiEstatico, filaBidiEstatico, columnaBidiEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(filaBidiDinamico!=0 && columnaBidiDinamico!=0){
                Bidimendional_Burbuja(datosPersonalesBidiDinamico, filaBidiDinamico, columnaBidiDinamico);
                ImprimirArrayBidi(datosPersonalesBidiDinamico, filaBidiDinamico, columnaBidiDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(filaMultiEstatico!=0 && columnaMultiEstatico!=0 && profundidadMultiEstatico!=0){
                Multidimendional_Burbuja(datosPersonalesMultiEstatico, filaMultiEstatico, columnaMultiEstatico, profundidadMultiEstatico);
                ImprimirArrayMulti(datosPersonalesMultiEstatico, filaMultiEstatico, columnaMultiEstatico, profundidadMultiEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(filaMultiDinamico!=0 && columnaMultiDinamico!=0 && profundidadMultiDinamico!=0){
                Multidimendional_Burbuja(datosPersonalesMultiDinamico, filaMultiDinamico, columnaMultiDinamico, profundidadMultiDinamico);
                ImprimirArrayMulti(datosPersonalesMultiDinamico, filaMultiDinamico, columnaMultiDinamico, profundidadMultiDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            MenuOrdenamientosMendoza();
            break;
        case 2:
            cout << "\tMETODO INSERCION" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(tamanoUniEstatico!=0){
                UniDimendional_Insercion(datosPersonalesUniEstatico , tamanoUniEstatico);
                ImprimirArrayUni(datosPersonalesUniEstatico, tamanoUniEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO UNIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(tamanoUniDinamico!=0){
                UniDimendional_Insercion(datosPersonalesUniDinamico , tamanoUniDinamico);
                ImprimirArrayUni(datosPersonalesUniDinamico, tamanoUniDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(filaBidiEstatico!=0 && columnaBidiEstatico!=0){
                Bidimendional_Insercion( datosPersonalesBibiEstatico, filaBidiEstatico, columnaBidiEstatico);
                ImprimirArrayBidi(datosPersonalesBibiEstatico, filaBidiEstatico, columnaBidiEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(filaBidiDinamico!=0 && columnaBidiDinamico!=0){
                Bidimendional_Insercion( datosPersonalesBidiDinamico, filaBidiDinamico, columnaBidiDinamico);
                ImprimirArrayBidi(datosPersonalesBidiDinamico, filaBidiDinamico, columnaBidiDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(filaMultiEstatico!=0 && columnaMultiEstatico!=0 && profundidadMultiEstatico!=0){
                Multidimendional_Insercion(datosPersonalesMultiEstatico, filaMultiEstatico, columnaMultiEstatico, profundidadMultiEstatico);
                ImprimirArrayMulti(datosPersonalesMultiEstatico, filaMultiEstatico, columnaMultiEstatico, profundidadMultiEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(filaMultiDinamico!=0 && columnaMultiDinamico!=0 && profundidadMultiDinamico!=0){
                Multidimendional_Insercion(datosPersonalesMultiDinamico, filaMultiDinamico, columnaMultiDinamico, profundidadMultiDinamico);
                ImprimirArrayMulti(datosPersonalesMultiDinamico, filaMultiDinamico, columnaMultiDinamico, profundidadMultiDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            MenuOrdenamientosMendoza();
            break;
        case 3:
            cout << "\tMETODO SELECCION" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(tamanoUniEstatico!=0){
                UniDimendional_Seleccion(datosPersonalesUniEstatico , tamanoUniEstatico);
                ImprimirArrayUni(datosPersonalesUniEstatico, tamanoUniEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO UNIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(tamanoUniDinamico!=0){
                UniDimendional_Seleccion(datosPersonalesUniDinamico , tamanoUniDinamico);
                ImprimirArrayUni(datosPersonalesUniDinamico, tamanoUniDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(filaBidiEstatico!=0 && columnaBidiEstatico!=0){
                Bidimendional_Seleccion(datosPersonalesBibiEstatico, filaBidiEstatico, columnaBidiEstatico);
                ImprimirArrayBidi(datosPersonalesBibiEstatico, filaBidiEstatico, columnaBidiEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(filaBidiDinamico!=0 && columnaBidiDinamico!=0){
                Bidimendional_Seleccion(datosPersonalesBidiDinamico, filaBidiDinamico, columnaBidiDinamico);
                ImprimirArrayBidi(datosPersonalesBidiDinamico, filaBidiDinamico, columnaBidiDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL ESTATICO ORDENADO\n" << endl;
            if(filaMultiEstatico!=0 && columnaMultiEstatico!=0 && profundidadMultiEstatico!=0){
                Multidimendional_Seleccion(datosPersonalesMultiEstatico, filaMultiEstatico, columnaMultiEstatico, profundidadMultiEstatico);
                ImprimirArrayMulti(datosPersonalesMultiEstatico, filaMultiEstatico, columnaMultiEstatico, profundidadMultiEstatico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL DINAMICO ORDENADO\n" << endl;
            if(filaMultiDinamico!=0 && columnaMultiDinamico!=0 && profundidadMultiDinamico!=0){
                Multidimendional_Seleccion(datosPersonalesMultiDinamico, filaMultiDinamico, columnaMultiDinamico, profundidadMultiDinamico);
                ImprimirArrayMulti(datosPersonalesMultiDinamico, filaMultiDinamico, columnaMultiDinamico, profundidadMultiDinamico);
            }else{
                cout << "No has ingresado datos en este arreglo dinamico" << endl;
            }
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
    int opMenu_B_Mendoza;
    string BuscarPalabra;
    BuscarPalabra="";
    cout << "      MENU ARRGLOS" << endl;
    cout << "   [1] B. BINARIA " << endl;
    cout << "   [2] B. SECUANCIAL" << endl;
    cout << "   [3] SAIIR" << endl;
    cout << "SALECCIONA UNA OPCION:" << endl;
    cin >> opMenu_B_Mendoza;
    switch(opMenu_B_Mendoza){
        case 1:
            cout << "Ingresa el elemento que deseas buscar de los arrays:" << endl;
            cin >> BuscarPalabra;
            UniDimendional_B_Binaria(arrays1, fila, palabra);
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
