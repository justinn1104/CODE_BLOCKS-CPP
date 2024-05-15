#ifndef L1ESTRUCTURAMENDOZA_H_INCLUDED
#define L1ESTRUCTURAMENDOZA_H_INCLUDED
#include <iostream>
#include "L2ArchivosMendoza.h"
#include "L3PilasListasMendoza.h"
#include "L4StructsMendoza.h"
using namespace std;
int opGrupo1;
void imprimirPortadaMendoza();
void MenuGrupo1();
void MenuPilaMendoza();
void MenuColasCedeno();
void MenuListaMendoza();
void imprimirPortadaMendoza(){
    cout << "**********************************************" << endl;
    cout << "\n\t\t**LAB 2**\n" << endl;
    cout << Encabezado.UNI_Mendoza << endl;
    cout << Encabezado.nomApeMendoza << endl;
    cout << Encabezado.asignaturaMendoza << endl;
    cout << Encabezado.docenteMendoza << endl;
    cout << Encabezado.NRC_Mendoza << endl;
    cout << Encabezado.fechaMendoza << endl;
    cout << "\n**********************************************" << endl;
    MenuGrupo1();
}
void MenuGrupo1(){
    cout << "\n===========Menu==========="<<endl;
    cout << "\t[1] INGRESAR DATOS AL TDA - CREAR EL ARCHIVO.TXT"<<endl;
    cout << "\t[2] LEER EL ARCHIVO.TXT"<<endl;
    cout << "\t[3] Pilas"<<endl;
    cout << "\t[4] Listas"<<endl;
    cout << "\t[5] Salir"<<endl;
    cout << "==========================\n" << endl;
    cin >> opGrupo1;
    switch (opGrupo1){
    case 1:
        imprimirDatosPersonas();
        MenuGrupo1();
        break;
    case 2:
        LecturaArchivosMendoza(numEstudiantes);
        MenuGrupo1();
        break;
    case 3:
        MenuPilaMendoza();
        MenuGrupo1();
        break;
    case 4:
        MenuListaMendoza();
        MenuGrupo1();
        break;
    case 5:
        cout<< "Saliendo...."<<endl;
        break;
    default:
        cout<< "Error, ingrese segun el menu"<< endl;
        MenuGrupo1();
    }
}
void MenuPilaMendoza(){
    cout << "\n--- MENU PILA ---\n" << endl;
    cout << "1. Insertar Pila" << endl;
    cout << "2. Mostrar Pila" << endl;
    cout << "3. Eliminar Pila" << endl;
    cout << "4. Regresar.." << endl;
    cout << "Ingrese su opcion:\n" << endl;
    cin >> opGrupo1;
    switch (opGrupo1) {
        case 1:
            InsertarElementoPilaMendoza();
            MenuPilaMendoza();
            break;
        case 2:
            MostrarElementoPilaMendoza();
            MenuPilaMendoza();
            break;
        case 3:
            EliminarElementoPilaMendoza();
            MenuPilaMendoza();
            break;
        case 4:
            cout << "Regresaste al menu principal...\n";
            MenuGrupo1();
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo.\n";
            MenuPilaMendoza();
    }
}
void MenuListaMendoza(){
    cout << "\n--- MENU LISTA ---\n" << endl;
    cout << "1. Insertar un caracter a la lista" << endl;
    cout << "2. Mostrar todos los elementos de la lista" << endl;
    cout << "3. Buscar un elemento de la lista" << endl;
    cout << "4. Eliminar todos los elementos de la lista" << endl;
    cout << "5. Eliminar un elemento los elementos de la lista" << endl;
    cout << "6. Regresar.." << endl;
    cout << "Ingrese su opcion:\n" << endl;
    cin >> opGrupo1;
    switch (opGrupo1) {
        case 1:
            InsertarFechaListaMendoza();
            MenuListaMendoza();
            break;
        case 2:
            MostrarFechasListaMendoza();
            MenuListaMendoza();
            break;
        case 3:
            BuscarFechaListaMendoza();
            MenuListaMendoza();
            break;
        case 4:
            EliminarFechasListaMendoza();
            MenuListaMendoza();
            break;
        case 5:
            EliminarFechaListaMendoza();
            MenuListaMendoza();
            break;
        case 6:
            cout << "Regresaste al menu principal...\n";
            MenuGrupo1();
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo...\n";
            MenuListaMendoza();
    }
}
#endif // L1ESTRUCTURAMENDOZA_H_INCLUDED
