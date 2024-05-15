#ifndef L4EMISION_CEDULA_H_INCLUDED
#define L4EMISION_CEDULA_H_INCLUDED

#include <iostream>
#include "L3Ordenamientos_Busquedas.h"
#include "L2Registro_InicioSesion.h"
#include "L1EstructuraGrupo4.h"

using namespace std;

void EmisionCedulaPersonal(string nombres_Sin_o_Grupo4[], string apellidosGrupo4[], string cedulaGrupo4[], int indiceUsuarioGrupo4);
void Fecha_TurnoRegistro_Grupo4();
void EmisionCedulaFamiliar();

string agenciaRegistroCivilGrupo4[9]={"Azuay", "Bolivar", "Canar","El carmen", "La Concordia", "Santo domingo","Pichincha", "Imbabura", "Carchi"}, Num_TarjetaGrupo4;
int indiceUsuarioGrupo4, anioGrupo4, diaGrupo4, mesGrupo4, mm, yy, cvv, contador=0;
void EmisionCedulaPersonal(string nombres_Sin_o_Grupo4[], string apellidosGrupo4[], string cedulaGrupo4[],  int indiceUsuarioGrupo4){
    string seleccionAgenciaGrupo4;
    int pos;
    bool band=false;
    cout << "AGENCIAS PROVINCIALES ORDENADAS POR METODO SELECCION" << endl;
    O_Seleccion_AgenciasGrupo4(agenciaRegistroCivilGrupo4, 9);
    for(int i=0;i<9;i++){
        cout << "[" << i+1 << "]" << agenciaRegistroCivilGrupo4[i] << endl;
    }
    do{
        cin.ignore();
        cout << "SELECCIONA UNA ADENCIA: [NOMBRE DE LA PROVICIA]" << endl;
        getline(cin,seleccionAgenciaGrupo4);
        pos=B_Secuencial_AgenciaProv_Grupo4(agenciaRegistroCivilGrupo4, 9, seleccionAgenciaGrupo4);
        if(pos!=-3){
            Fecha_TurnoRegistro_Grupo4();
            cout << "\n\tPAGO POR TARJERA DE DEBITO\n" << endl;
            cout << "INGRESA EL NUMERO DE LA TERJETA:" << endl;
            cin >> Num_TarjetaGrupo4;
            cout << "INGRESA El MES DE VALIDEZ DE LA TERJETA: ([ ]/xx) [1 al 12]" << endl;
            cin >> mm;
            while(mm<=0 || mm>12){
                cout << "MES INGRESADO INVALIDO..VULELVE A INTENTARLO.." << endl;
                cout << "INGRESA El MES DE VALIDEZ DE LA TERJETA: ([ ]/xx) [1 al 12]" << endl;
                cin >> mm;
            }
            cout << "INGRESA EL AÑO DE VALIDEZ DE LA TERJETA: (xx/[]) [24 al 30]" << endl;
            cin >> yy;
            while(yy<=23 || yy>30){
                cout << "AÑO INGRESADO INVALIDO..VULELVE A INTENTARLO.." << endl;
                cout << "INGRESA EL AÑO DE VALIDEZ DE LA TERJETA: (xx/[]) [24 al 30]" << endl;
                cin >> yy;
            }
            cout << "INGRESA EL CODIGO DE SEGURIDAD DE LA TERJETA: (CVV)" << endl;
            cin >> cvv;
            contador=contador+1;
            cout << "\n\tPAGO REALIZADO CON EXITO\n" << endl;
            cout << "\nTURNO #000-0" << contador << endl;
            cout << "Nombres: " << nombres_Sin_o_Grupo4[indiceUsuarioGrupo4] << " " << apellidosGrupo4[indiceUsuarioGrupo4] << endl;
            cout << "C.I: " << cedulaGrupo4[indiceUsuarioGrupo4] << endl;
            cout << "Agencia: " << agenciaRegistroCivilGrupo4[pos] << endl;
            cout << "Estado: Aprobado" << endl;
            cout << "Fecha: " << diaGrupo4 << "/" << mesGrupo4 << "/" << anioGrupo4 << endl;
            band=true;
        }else{
            cout << "AGENCIA SELECCIONADA..NO DISPONIBLE..SELECCIONA UNA DEL MENU.." << endl;
            band=false;
        }
    }while(band!=true);
}

void EmisionCedulaFamiliar(){
    string seleccionAgenciaGrupo4, nombreGrupo4, apellidoGrupo4, cedula2Grupo4;
    int pos;
    bool band=false;
    cout << "AGENCIAS PROVINCIALES ORDENADAS POR METODO SELECCION" << endl;
    O_Seleccion_AgenciasGrupo4(agenciaRegistroCivilGrupo4, 9);
    for(int i=0;i<9;i++){
        cout << "[" << i+1 << "]" << agenciaRegistroCivilGrupo4[i] << endl;
    }
    do{
        cin.ignore();
        cout << "SELECCIONA UNA ADENCIA: [NOMBRE DE LA PROVICIA]" << endl;
        getline(cin,seleccionAgenciaGrupo4);
        pos=B_Secuencial_AgenciaProv_Grupo4(agenciaRegistroCivilGrupo4, 9, seleccionAgenciaGrupo4);
        if(pos!=-3){
            cout << "\nINGRESA LOS DATOS PARA EL TURNO\n" << endl;
            cout << "(1) NOMBRE:" << endl;
            getline(cin,nombreGrupo4);
            cout << "(2) APELLIDO:" << endl;
            getline(cin,apellidoGrupo4);
            cout << "(3) CEDULA DE IDENTIDAD:" << endl;
            getline(cin,cedula2Grupo4);
            Fecha_TurnoRegistro_Grupo4();
            cout << "\n\tPAGO POR TARJERA DE DEBITO\n" << endl;
            cout << "INGRESA EL NUMERO DE LA TERJETA:" << endl;
            cin >> Num_TarjetaGrupo4;
            cout << "INGRESA El MES DE VALIDEZ DE LA TERJETA: ([ ]/xx) [1 al 12]" << endl;
            cin >> mm;
            while(mm<=0 || mm>12){
                cout << "MES INGRESADO INVALIDO..VULELVE A INTENTARLO.." << endl;
                cout << "INGRESA El MES DE VALIDEZ DE LA TERJETA: ([ ]/xx) [1 al 12]" << endl;
                cin >> mm;
            }
            cout << "INGRESA EL AÑO DE VALIDEZ DE LA TERJETA: (xx/[]) [24 al 30]" << endl;
            cin >> yy;
            while(yy<=23 || yy>30){
                cout << "AÑO INGRESADO INVALIDO..VULELVE A INTENTARLO.." << endl;
                cout << "INGRESA EL AÑO DE VALIDEZ DE LA TERJETA: (xx/[]) [24 al 30]" << endl;
                cin >> yy;
            }
            cout << "INGRESA EL CODIGO DE SEGURIDAD DE LA TERJETA: (CVV)" << endl;
            cin >> cvv;
            contador=contador+1;
            cout << "\n\tPAGO REALIZADO CON EXITO\n" << endl;
            cout << "\nTURNO #000-0" << contador << endl;
            cout << "Nombres: " << nombreGrupo4  << " " << apellidoGrupo4 << endl;
            cout << "C.I: " << cedula2Grupo4 << endl;
            cout << "Agencia: " << agenciaRegistroCivilGrupo4[pos] << endl;
            cout << "Estado: Aprobado" << endl;
            cout << "Fecha: " << diaGrupo4 << "/" << mesGrupo4 << "/" << anioGrupo4 << endl;
            band=true;
        }else{
            cout << "AGENCIA SELECCIONADA..NO DISPONIBLE..SELECCIONA UNA DEL MENU.." << endl;
            band=false;
        }
    }while(band!=true);
}

void Fecha_TurnoRegistro_Grupo4(){
    cout << "\       ==============================" << endl;
    cout << "       =   INGRESA LA FECHA ACTUAL  =" << endl;
    cout << "       ==============================\n" << endl;
    do {
        cout << "INGRESA EL DIA: ([1] - [31])" << endl;
        cin >> diaGrupo4;
        while (diaGrupo4<=0 || diaGrupo4>=32) {
            cout << "DIA ERRONEO" << endl;
            cout << "INGRESA EL DIA: ([1] - [31])" << endl;
            cin >> diaGrupo4;
        }
        cout << "INGRESA EL MES: ([1] - [12])" << endl;
        cin >> mesGrupo4;
        while (mesGrupo4<=0 || mesGrupo4>=13) {
            cout << "MES ERRONEO" << endl;
            cout << "INGRESA EL MES: ([1] - [12])" << endl;
            cin >> mesGrupo4;
        }
        cout << "INGRESA EL AÑO: ([2024])" << endl;
        cin >> anioGrupo4;
        while (anioGrupo4!=2024) {
            cout << "AÑO ERRONEO" << endl;
            cout << "INGRESA EL AÑO: ([2024])" << endl;
            cin >> anioGrupo4;
        }
    } while (anioGrupo4!=2024);
}



#endif // L4EMISION_CEDULA_H_INCLUDED
