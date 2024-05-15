#ifndef L1ESTRUCTURASMENDOZA_H_INCLUDED
#define L1ESTRUCTURASMENDOZA_H_INCLUDED
#include <iostream>
#include "L2StructsMendoza.h"
#include "L3ProcesosMendoza.h"
#include "L4ArchivosMendoza.h"
using namespace std;
void imprimirPortadaMendoza();
void Login_RegistroMendoza();
void Menu_BancoVeciMendoza(int usu_e);
int opMendoza;
void imprimirPortadaMendoza(){
    cout << "**********************************************" << endl;
    cout << "\n\t   **PROYECTO INDIVIDUAL**" << endl;
    cout << "\t      **STRUCT SIMPLE**\n" << endl;
    cout << Encabezado.UNI_Mendoza << endl;
    cout << Encabezado.nomApeMendoza << endl;
    cout << Encabezado.asignaturaMendoza << endl;
    cout << Encabezado.docenteMendoza << endl;
    cout << Encabezado.NRC_Mendoza << endl;
    cout << Encabezado.fechaMendoza << endl;
    cout << "\n**********************************************" << endl;
    Login_RegistroMendoza();
}
void Login_RegistroMendoza(){
    clienteIngresados[0].infCliente.nomMendoza1="Justin";
    clienteIngresados[0].infCliente.nomMendoza2="Andres";
    clienteIngresados[0].infCliente.apeMendoza1="Mendoza";
    clienteIngresados[0].infCliente.apeMendoza2="Duenas";
    clienteIngresados[0].ceduMendoza="2350233512";
    clienteIngresados[0].fechaNaMendoza="11/03/04";
    clienteIngresados[0].pwsClienteMendoza="admin";
    clienteIngresados[0].userClienteMendoza="admin";
    clienteIngresados[0].numCuentaMendoza="1000000000";
    do{
        cout << "\n\tBANCO VECINO DEL BARRIO\n" << endl;
        cout << MenuLogin.opLoginMendoza1 << " - B. Secuencial - Conversion(tolower) - Struct Compuesto" << endl;
        cout << MenuLogin.opLoginMendoza2 << " - Cadenas(getline), Longitudes(.length), Conversion(to_string), Concatenacion(append), SubCadenas(substr), Inversion(reference) - Crear Archivos(ofstream) - Struct Compuesto" << endl;
        cout << MenuLogin.opLoginMendoza3 << " - Lectura de Archivos(.open(), .fail(), .close()) - ifstream - Cadenas(getline(), Concatenacion(.append()))" << endl;
        cout << MenuLogin.opLoginMendoza4 << endl;
        cout << "\nSELECCIONES UNA OPCION CORRECTA: " << endl;
        cin >> opMendoza;
        switch(opMendoza){
            case 1://opcion del inicio de sesion
                IniciarSesionMendoza();
                break;
            case 2://opcion para el registro de usuarios
                RegistroNuevoUser();
                break;
            case 3://opcion para la lectura del archivo
                LecturaArchivosMendoza();
                break;
            case 4://cerrar sesión
                cout << "\nSALISTE CON EXISTO DEL PROGRAMA..\n" << endl;
                break;
            default:
                cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO..\n" << endl;
        }
    }while(opMendoza!=4);

}
void Menu_BancoVeciMendoza(int usu_e){
    cout << "\n\tBANCO VECINO DEL BARRIO\n" << endl;
    cout << "[1] Depositar dinero - Struct Compuesto - Crea Archivo"<<endl;
    cout << "[2] Retirar dinero - Struct Compuesto - Crea Archivo"<<endl;
    cout << "[3] Consultar saldo - Struct Compuesto -Concatenar(append())"<<endl;
    cout << "[4] Transferencia - Struct Compuesto - Busqueda Secuencial"<<endl;
    cout << "[5] Movimientos - Lectura de archivo directo"<<endl;
    cout << "[6] Cerrar sesion - "<<endl;
    cout << "\nEliga un opcion"<<endl;
    cin>>opMendoza;
    switch(opMendoza){
        case 1:
            Deposito(usu_e);
            Menu_BancoVeciMendoza(usu_e);
            break;
        case 2:
            Retiro(usu_e);
            Menu_BancoVeciMendoza(usu_e);
            break;
        case 3:
            SaldoA(usu_e);
            Menu_BancoVeciMendoza(usu_e);
            break;
        case 4:
            Transferencia(usu_e);
            Menu_BancoVeciMendoza(usu_e);
            break;
        case 5:
            LecturaArchivosMovimientoMendoza(usu_e);
            Menu_BancoVeciMendoza(usu_e);
            break;
        case 6:
            cout << "\nCERRASTE SESION CON EXISTO.\n" << endl;
            break;
        default:
            cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO\n" << endl;
            Menu_BancoVeciMendoza(usu_e);
    }
}

#endif // L1ESTRUCTURASMENDOZA_H_INCLUDED
