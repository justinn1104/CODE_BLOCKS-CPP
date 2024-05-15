#ifndef ESTRUCTURAGRUPO5_H_INCLUDED
#define ESTRUCTURAGRUPO5_H_INCLUDED
#include <iostream>
#include "OrdenamientosBusquedasGrupo5.h"
#include "TiposArreglosGrupo5.h"

using namespace std;

void Emcabezado();
void MenuPrincipal();
void MenuOrdenamientos();
void MenuBusquedas();

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
    cout << "****************************************************************************\n" << endl;
    UniDimensional_Burbuja(EmcabezadoCampos, Tam);
    ImprimirArrayEmcabezado(EmcabezadoCampos, Tam);
	cout << "\n****************************************************************************\n" << endl;
	cout << "\n               ==================================" << endl;
        cout << "               =      Arrays - Algoritmos       =" << endl;
        cout << "               =    Ordenamiento y Busqueda     =" << endl;
        cout << "               ==================================\n" << endl;
	MenuPrincipal();
}
void MenuPrincipal(){
    int opMenuArrays;
    fflush(stdout);
    do{
        cout << "\n               ==================================" << endl;
        cout << "               =           Menu Arrays          =" << endl;
        cout << "               ==================================\n" << endl;
        cout << "                      [1] Array unidimensional" << endl;
        cout << "                      [2] Array bidimensional" << endl;
        cout << "                      [3] Array multidimensional" << endl;
        cout << "                      [4] ORDENAMIENTOS" << endl;
        cout << "                      [5] BUSQUEDAS" << endl;
        cout << "                      [6] SAIIR" << endl;
        cout << "               SELECCIONA UNA OPCION DEL MENU: " << endl;
        cin >> opMenuArrays;
        switch(opMenuArrays){
            case 1:
                UnidimensionalTorres();
                break;
            case 2:
                BidimensionalTroya();
                break;
            case 3:
                MultidimensionalMendoza();
                break;
            case 4:
                MenuOrdenamientos();
                break;
            case 5:
                MenuBusquedas();
                break;
            case 6:
                cout << "SALISTE CON EXITO..MENU DE ARRAYS.." << endl;
                break;
            default:
                cout << "OPCION SELECIONADA ERRONEA...VUELVE A SELECIONAR.." << endl;
        }
    }while(opMenuArrays!=6);
}
void MenuOrdenamientos(){
    int opMenuOrd;
    cout << "\n               ==========================================" << endl;
    cout << "               =         Menu - Algoritmos de           =" << endl;
    cout << "               =           Ordenamientos                =" << endl;
    cout << "               ==========================================\n" << endl;
    cout << "                      [1] M. BURBUJA" << endl;
    cout << "                      [2] M. INSERCION" << endl;
    cout << "                      [3] M. SELECCION" << endl;
    cout << "                      [4] SAIIR" << endl;
    cout << "SALECCIONA UNA OPCION:" << endl;
    cin >> opMenuOrd;
    switch(opMenuOrd){
        case 1:
            cout << "\n\tMETODO BURBUJA" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoUni!=0){
                UniDimensional_Burbuja(Paises, 3);
                ImprimirArrayUni(Paises, 3);
            }else{
                cout << "No has ingresado datos en este arreglo Unidimensional\n" << endl;
            }
            cout << "\n\tMETODO BURBUJA" << endl;
            cout << "\nARREGLO BIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoBidi!=0){
                Bidimensional_Burbuja(nomApe, 2, 2);
                Bidimensional_Burbuja(id_User, 2, 2);
                ImprimirArrayBidi(nomApe, id_User, 2, 2);
            }else{
                cout << "No has ingresado datos en este arreglo Bidimensional\n" << endl;
            }
            cout << "\n\tMETODO BURBUJA" << endl;
            cout << "\nARREGLO MULTIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoMulti!=0){
                Multidimensional_Burbuja(Peliculas, 2, 2, 2);
                ImprimirArrayMulti(Peliculas, Fechas, Precios, 2, 2, 2);
            }else{
                cout << "No has ingresado datos en este arreglo Multidimensional\n" << endl;
            }
            MenuOrdenamientos();
            break;
        case 2:
            cout << "\tMETODO INSERCION" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoUni!=0){
                UniDimensional_Insercion(Paises, 3);
                ImprimirArrayUni(Paises, 3);
            }else{
                cout << "No has ingresado datos en este arreglo Unidimensional\n" << endl;
            }
            cout << "\n\tMETODO INSERCION" << endl;
            cout << "\nARREGLO BIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoBidi!=0){
                Bidimensional_Insercion(nomApe, 2, 2);
                Bidimensional_Insercion(id_User, 2, 2);
                ImprimirArrayBidi(nomApe, id_User, 2, 2);
            }else{
                cout << "No has ingresado datos en este arreglo Bidimensional\n" << endl;
            }
            cout << "\n\tMETODO INSERCION" << endl;
            cout << "\nARREGLO MULTIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoMulti!=0){
                Multidimensional_Insercion(Peliculas, 2, 2, 2);
                ImprimirArrayMulti(Peliculas, Fechas, Precios, 2, 2, 2);
            }else{
                cout << "No has ingresado datos en este arreglo Multidimensional\n" << endl;
            }
            MenuOrdenamientos();
            break;
        case 3:
            cout << "\n\tMETODO SELECCION" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoUni!=0){
                UniDimensional_Seleccion(Paises, 3);
                ImprimirArrayUni(Paises, 3);
            }else{
                cout << "No has ingresado datos en este arreglo Unidimensional\n" << endl;
            }
            cout << "\n\tMETODO SELECCION" << endl;
            cout << "\nARREGLO BIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoBidi!=0){
                Bidimensional_Seleccion(nomApe, 2, 2);
                Bidimensional_Seleccion(id_User, 2, 2);
                ImprimirArrayBidi(nomApe, id_User, 2, 2);
            }else{
                cout << "No has ingresado datos en este arreglo Bidimensional\n" << endl;
            }
            cout << "\n\tMETODO SELECCION" << endl;
            cout << "\nARREGLO MULTIDIMENSIONAL ORDENADO\n" << endl;
            if(TamanoMulti!=0){
                Multidimensional_Seleccion(Peliculas, 2, 2, 2);
                ImprimirArrayMulti(Peliculas, Fechas, Precios, 2, 2, 2);
            }else{
                cout << "No has ingresado datos en este arreglo Multidimensional\n" << endl;
            }
            MenuOrdenamientos();
            break;
        case 4:
            cout << "SALISTE CON EXITO..MENU DE A. ORDENAMIENTO.." << endl;
            break;
        default:
            cout << "OPCION SELECIONADA ERRONEA...VUELVE A SELECIONAR.." << endl;
            MenuOrdenamientos();
    }
}
void MenuBusquedas(){
    int opMenuBusq;
    string BuscarPalabra;
    cout << "\n               ==========================================" << endl;
    cout << "               =         Menu - Algoritmos - de           =" << endl;
    cout << "               =               Busqeudas                  =" << endl;
    cout << "               ==========================================\n" << endl;
    cout << "                      [1] B. BINARIA" << endl;
    cout << "                      [2] B. SECUANCIAL" << endl;
    cout << "                      [3] SALIR" << endl;
    cout << "               SELECCIONA UNA OPCION DEL MENU: " << endl;
    cin >> opMenuBusq;
    switch(opMenuBusq){
        case 1:
            cin.ignore();
            cout << "\n\tBUSQUEDA BINARIA" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL\n" << endl;
            if(TamanoUni!=0){
                UniDimensional_Burbuja(Paises, 3);
                ImprimirArrayUni(Paises, 3);
                cout << "\nIngresa el nombre del pais que deseas buscar:" << endl;
                getline(cin,BuscarPalabra);
                UniDimensional_B_Binaria(Paises, 3, BuscarPalabra);
            }else{
                cout << "No has ingresado datos en este arreglo Unidimensional\n" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL\n" << endl;
            if(TamanoBidi!=0){
                Bidimensional_Insercion(nomApe, 2, 2);
                Bidimensional_Insercion(id_User, 2, 2);
                ImprimirArrayBidi(nomApe, id_User, 2, 2);
                cout << "\nIngresa el nombre de usuario que deseas buscar:" << endl;
                getline(cin,BuscarPalabra);
                Bidimensional_B_Binaria(nomApe, 2, 2, BuscarPalabra);
            }else{
                cout << "No has ingresado datos en este arreglo Bidimensional\n" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL\n" << endl;
            if(TamanoMulti!=0){
                Multidimensional_Seleccion(Peliculas, 2, 2, 2);
                ImprimirArrayMulti(Peliculas, Fechas, Precios, 2, 2, 2);
                cout << "\nIngresa el nombre de la pelicula que deseas buscar:" << endl;
                getline(cin,BuscarPalabra);
                cout << "aqui" << endl;
                Multidimensional_B_Binaria(Peliculas,2,2,2,BuscarPalabra);
            }else{
                cout << "No has ingresado datos en este arreglo Multidimensional\n" << endl;
            }
            MenuBusquedas();
            break;
        case 2:
            cin.ignore();
            cout << "\n\tBUSQUEDA SECUANCIAL" << endl;
            cout << "\nARREGLO UNIDIMENSIONAL\n" << endl;
            if(TamanoUni!=0){
                UniDimensional_Burbuja(Paises, 3);
                ImprimirArrayUni(Paises, 3);
                cout << "\nIngresa el nombre del pais que deseas buscar:" << endl;
                getline(cin,BuscarPalabra);
                UniDimendional_B_Secuencial(Paises, 3, BuscarPalabra);
            }else{
                cout << "No has ingresado datos en este arreglo Unidimensional\n" << endl;
            }
            cout << "\nARREGLO BIDIMENSIONAL\n" << endl;
            if(TamanoBidi!=0){
                Bidimensional_Insercion(nomApe, 2, 2);
                Bidimensional_Insercion(id_User, 2, 2);
                ImprimirArrayBidi(nomApe, id_User, 2, 2);
                cout << "\nIngresa el nombre de usuario que deseas buscar:" << endl;
                getline(cin,BuscarPalabra);
                Bidimendional_B_Secuencial(nomApe, 2, 2, BuscarPalabra);
            }else{
                cout << "No has ingresado datos en este arreglo Bidimensional\n" << endl;
            }
            cout << "\nARREGLO MULTIDIMENSIONAL\n" << endl;
            if(TamanoMulti!=0){
                Multidimensional_Seleccion(Peliculas, 2, 2, 2);
                ImprimirArrayMulti(Peliculas, Fechas, Precios, 2, 2, 2);
                cout << "\nIngresa el nombre de la pelicula que deseas buscar:" << endl;
                getline(cin,BuscarPalabra);
                Multidimendional_B_Secuencial(Peliculas, 2, 2, 2, BuscarPalabra);

            }else{
                cout << "No has ingresado datos en este arreglo Multidimensional\n" << endl;
            }
            MenuBusquedas();
            break;
        case 3:
            cout << "SALISTE CON EXITO..MENU DE A. BUSQUEDAS.." << endl;
            break;
        default:
            cout << "OPCION SELECIONADA ERRONEA...VUELVE A SELECIONAR.." << endl;
            MenuBusquedas();
    }
}
#endif // ESTRUCTURAGRUPO5_H_INCLUDED
