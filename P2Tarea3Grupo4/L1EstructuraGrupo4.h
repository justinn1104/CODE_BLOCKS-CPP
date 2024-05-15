#ifndef L1ESTRUCTURAGRUPO4_H_INCLUDED
#define L1ESTRUCTURAGRUPO4_H_INCLUDED

#include <iostream>
#include "L2Registro_InicioSesion.h"
#include "L4Emision_Cedula.h"


using namespace std;

void EmcabezadoGrupo4();
void MenuRegistroCivilOnlineHGrupo4();
void Login_IniciaRegistroGrupo4();

int opGrupo4;
void EmcabezadoGrupo4(){
    string portadaGrupo5[2][2][2]={"UNI: UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS","Asignatura: F. Programacion","Curso: 16366","GRUPO: Grupo 4","INTEGRANTES: Bruce Rodriguez","\t     Fernanda Santos","\t     Jhon Liscano","Fecha: 1/2/24"};
    cout << "\n--------------------------------------------------------------------" << endl;
    for(int i=0; i<2 ; i++){
        for(int j=0; j<2 ; j++){
            for(int k=0 ; k<2 ; k++){
                cout << "\t" << portadaGrupo5[i][j][k] << endl;
            }
        }
    }
    cout << "--------------------------------------------------------------------\n" << endl;
}
void Login_IniciaRegistroGrupo4(){
    string menuLogin[3][2]={"\tREGISTRO CIVIL","\ten linea\n","\t[1] INICIAR SESION","\t[2] REGISTRARSE","\t[3] SALIR\n","SELECCIONA UNA OPCION:"};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout << menuLogin[i][j] << endl;
        }
    }
    cin >> opGrupo4;
    switch(opGrupo4){
        case 1:
            //opcion del inicio de sesion
            IniciarSesionGrupo4();
            break;
        case 2:
            //opcion para el registro de usuarios
            Registro_NuevoUsuarioGrupo4();
            break;
        case 3:
            cout << "SALISTE CON EXISTO DEL REGISTRO CIVIL EN LINEA.." << endl;
            break;
        default:
            cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO\n" << endl;
            Login_IniciaRegistroGrupo4();
    }
}
void MenuRegistroCivilOnlineHGrupo4(){

    string menuRegistroGrupo4[3][2]={"\nPAGO EN LINEA CEDULA\n","\t[1] Emision cedula personal","\t[2] Emision cedula familiares","\t[3] Cerrar sesion\n","SELECCIONA UNA OPCION:"};
    cout << menuRegistroGrupo4[0][0] << endl;
    cout << menuRegistroGrupo4[0][1] << endl;
    cout << menuRegistroGrupo4[1][0] << endl;
    cout << menuRegistroGrupo4[1][1] << endl;
    cout << menuRegistroGrupo4[2][0] << endl;
    cin >> opGrupo4;
    switch(opGrupo4){
        case 1:
            EmisionCedulaPersonal(nombres_Sin_o_Grupo4, apellidosGrupo4, cedulaGrupo4, indice1Grupo4);
            break;
        case 2:
            EmisionCedulaFamiliar();
            break;
        case 3:
            cout << "\nSE HA FINALIZADO LA SESION..REDIRECCIONADO AL LOGIN.\n" << endl;
            Login_IniciaRegistroGrupo4();
            break;
        default:
            cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO\n" << endl;
            MenuRegistroCivilOnlineHGrupo4();
    }
}


#endif // L1ESTRUCTURAGRUPO4_H_INCLUDED
