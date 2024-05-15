#ifndef L1ESTRUCTURAGRUPO5_H_INCLUDED
#define L1ESTRUCTURAGRUPO5_H_INCLUDED
//LLAMADA DE LIBRERIAS INTERNAS
#include <iostream>
//LLAMADA DE LIBRERIAS EXTERNAS
#include "L4Inventario_Clientes.h"
#include "L3Venta_FacturarGrupo5.h"
//ESPACIO DE TRABAJO DE ENTRADA Y SALIDA DE DATOS
using namespace std;
//DECALRACION DE FUNCIONES U PROCEDIMIENTOS
void PortadaGrupo5();
void MenuGrupo5();
void ImprimirMenu(string menuGrupo5[][2], int f, int c);
//VARIABLES, CONSTANTES U ARREGLOS - GLOBALES
//ASIGNACION DE VALORES ESTATICOS EN UN ARRGLO BIDI
string menuGrupo5[4][2]={"\n=========================================","         [1] INVENTARIO    (ARREGLO UNIDIMENSIONAL - ORDENAMINETO BURBUJA  Y BUSQUEDA SECUENCIAL)","         [2] CLIENTES AF    (ARREGLO UNIDIMENSIONAL - ORDENAMINETO SELECCION  Y BUSQUEDA BINARIA)","         [3] VENTAS      (ARREGLOS UNIDIMENSIONALES - ORDENAMINETO INSERCION  Y BUSQUEDA SECUENCIAL)","         [4] SALIR","=========================================","         ","SELECCIONA UNA OPCION:"};
//ASIGNACION DE VALORES ESTATICOS EN VARIABLES
int f=4, c=2;
//INICIALIZACION DE FUNCIONES U PROCEDIMIENTOS
void PortadaGrupo5(){
    //ASIGNACION DE VALORES ESTATICOS EN UN ARRGLO MULTI 3D
    //ARREGLO TRIDIMENSIONAL ESTATICO PARA LA PORTADO
    string portadaGrupo5[2][2][2]={"UNIDAD: UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS","Asignatura: F. Programacion","Curso: 16366","GRUPO: Grupo 5","INTEGRANTE1: Troya Emily","INTEGRANTE2: Torres Lisseth","INTEGRANTE3: Mendoza Justin","Fecha: 1/2/24"};
    cout << "(ARREGLO TRIDIMENSIONAL ESTATICO PARA LA PORTADO)" << endl;
    cout << "\n===================================================================" << endl;
    //SALIDA DE DATOS DE UN ARREGLO MULTI 3D
    for(int i=0; i<2 ; i++){
        for(int j=0; j<2 ; j++){
            for(int k=0 ; k<2 ; k++){
                cout << "\t" << portadaGrupo5[i][j][k] << endl;//salida de datos dinamicos
            }
        }
    }
    cout << "===================================================================\n" << endl;
}
void MenuGrupo5(){
    int opMenuGrupo5;
    cout << "                 ===========================" << endl;
	cout << "                 =      BIENVENIDOS        =" << endl;
	cout << "                 =           A             =" << endl;
	cout << "                 =       SUPERMAXI         =" << endl;
	cout << "                 ===========================\n" << endl;
	cout << "(ARREGLO BIDIMENSIONAL ESTATICO PARA EL MENU)" << endl;
    ImprimirMenu(menuGrupo5, f, c);//se imprime el menu que se almacena en un arreglo bidi
    cin >> opMenuGrupo5;
    switch(opMenuGrupo5){
        case 1:
            //(ARREGLO UNIDIMENSIONAL - ORDENAMINETO BURBUJA  Y BUSQUEDA SECUENCIAL)
            Opcion1InventarioGrupo5();//Opcion para rellenar el arrglo uni de los productos
            MenuGrupo5();//llamo la funcion menu a si misma cumple la recursividad
            break;
        case 2:
            //(ARREGLO UNIDIMENSIONAL - ORDENAMINETO SELECCION  Y BUSQUEDA BINARIA)
            Opcion2ClientesGrupo5();//Opcion para rellenar el arrglo uni de los productos
            MenuGrupo5();//llamo la funcion menu a si misma cumple la recursividad
            break;
        case 3:
            //(ARREGLOS UNIDIMENSIONALES - ORDENAMINETO INSERCION  Y BUSQUEDA SECUENCIAL)
            VentaGrupo5();//esta funcion genera la venta factura y genra el comprobante
            MenuGrupo5();//llamo la funcion menu a si misma cumple la recursividad
            break;
        case 4:
            cout << "Saliste con exito..vualva pronto.." << endl;
            break;
        default:
            cout << "Opcion erronea..vuelve a intentarlo.." << endl;
            MenuGrupo5();//llamo la funcion menu a si misma cumple la recursividad
    }
}
//Funcion para imprimir menu de forma dinamica
void ImprimirMenu(string menuGrupo5[][2], int f, int c){
    for(int i=0;i<f ; i++){
        for(int j=0;j<c;j++){
            cout << menuGrupo5[i][j] << endl;
        }
    }
}
#endif // L1ESTRUCTURAGRUPO5_H_INCLUDED
