#ifndef L2REGISTRO_INICIOSESION_H_INCLUDED
#define L2REGISTRO_INICIOSESION_H_INCLUDED

#include <iostream>
#include "L1EstructuraGrupo4.h"
#include "L3Ordenamientos_Busquedas.h"
#include "L4Emision_Cedula.h"

using namespace std;
void MenuRegistroCivilOnlineHGrupo4();
string Registro_NuevoUsuarioGrupo4();
string IniciarSesionGrupo4();
void Login_IniciaRegistroGrupo4();


string nombresGrupo4[10]={"admin"}, nombres_Sin_o_Grupo4[10], apellidosGrupo4[10]{"asdad"}, cedulaGrupo4[10]{"123"}, pswGrupo4[10]{"123"};
int tamanoEstaticoGrupo4=1, tamanoDinamicoGrupo4=0, tamanoGrupo4=tamanoEstaticoGrupo4+tamanoDinamicoGrupo4,tamanoIngresadoGrupo4=tamanoGrupo4, indice1Grupo4, indice2Grupo4;
string opSiNoGrupo4;
string Registro_NuevoUsuarioGrupo4(){
    tamanoDinamicoGrupo4=1;
    tamanoGrupo4=tamanoEstaticoGrupo4+tamanoDinamicoGrupo4;
    cin.ignore();
    for(int i=tamanoEstaticoGrupo4;i<tamanoGrupo4;i++){
        cout << "\nINGRESA LOS DATOS PARA EL REGISTO DEL USUARIO #" << i+1 <<"\n" << endl;
        cout << "(1) NOMBRE:" << endl;
        getline(cin,nombresGrupo4[i]);
        cout << "(2) APELLIDO:" << endl;
        getline(cin,apellidosGrupo4[i]);
        cout << "(3) CEDULA DE IDENTIDAD:" << endl;
        getline(cin,cedulaGrupo4[i]);
        while(cedulaGrupo4[i]==cedulaGrupo4[i-1] || cedulaGrupo4[i]=="123"){
            cout << "C.I INGRESADA YA EXISTE.. INTENTA CON OTRA.." << endl;
            cout << "CEDULA DE IDENTIDAD:" << endl;
            getline(cin,cedulaGrupo4[i]);
        }
        cout << "\nSELECCION DE UNA CLAVE\n" << endl;
        cout << "(4) CLAVE:" << endl;
        getline(cin,pswGrupo4[i]);
        while(pswGrupo4[i]==pswGrupo4[i-1] || pswGrupo4[i]=="admin"){
            cout << "CLAVE INGRESADA EN USO.. INTENTA CON OTRA.." << endl;
            cout << "CLAVE:" << endl;
            getline(cin,pswGrupo4[i]);
        }
    }
    for(int i=0; i<tamanoGrupo4;i++){
        nombres_Sin_o_Grupo4[i]=nombresGrupo4[i];
    }
    tamanoEstaticoGrupo4=tamanoEstaticoGrupo4+tamanoDinamicoGrupo4;
    tamanoIngresadoGrupo4=tamanoEstaticoGrupo4;
    O_Insercion_NombresGrupo4(nombresGrupo4, tamanoIngresadoGrupo4);//mando a ordenar el arreglo de los nombres
    cout << "\n\tCLIENTES REGISTRADOS - ORDENAMINETO POR EL METODO INSERCION" << endl;
    cout << "     NOMBRES               APELLIDOS           CEDULA (C.I)      CLAVE\n" << endl;
    for(int i=0; i<tamanoIngresadoGrupo4 ; i++){
        string aux=nombresGrupo4[i];
        indice1Grupo4=B_Binaria_NombresGrupo4(nombres_Sin_o_Grupo4, tamanoIngresadoGrupo4, aux);

        cout << "["<<i+1<<"]  "<< nombresGrupo4[i] << "    \t" << apellidosGrupo4[indice1Grupo4] << "    \t" << cedulaGrupo4[indice1Grupo4] << "    \t" <<  pswGrupo4[indice1Grupo4] << endl;
    }
    cout << "\n¿DESEA INICIAR SESION? [SI O NO]" << endl;
    cin >> opSiNoGrupo4;
    while(opSiNoGrupo4!="NO" && opSiNoGrupo4!="No" && opSiNoGrupo4!="no" && opSiNoGrupo4!="SI"  && opSiNoGrupo4!="Si" && opSiNoGrupo4!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO" << endl;
        cout << "\n¿DESEA INICIAR SESION? [SI O NO]" << endl;
        cin >> opSiNoGrupo4;
    }
    if(opSiNoGrupo4=="SI" || opSiNoGrupo4=="Si" || opSiNoGrupo4=="si"){
        IniciarSesionGrupo4();
    }else{
        cout << "\t\nREGRESASTE AL LOGIN" << endl;
        Login_IniciaRegistroGrupo4();
    }
    return opSiNoGrupo4;
}
string IniciarSesionGrupo4(){
    string ciGrupo4, claveGrupo4;
    for(int i=0; i<tamanoIngresadoGrupo4;i++){
        nombres_Sin_o_Grupo4[i]=nombresGrupo4[i];
    }
    cout << "\t\nINICAR SESION\n" << endl;
    cout << "INGRESA TU C.I:" << endl;
    cin >> ciGrupo4;
    cout << "INGRSA TU CLAVE:" << endl;
    cin >> claveGrupo4;
    indice1Grupo4=B_Secuencial_CI_Psw_Grupo4(cedulaGrupo4, tamanoIngresadoGrupo4, ciGrupo4);//verifica que la cedula este registrado
    indice2Grupo4=B_Secuencial_CI_Psw_Grupo4(pswGrupo4, tamanoIngresadoGrupo4, claveGrupo4);//verifica que la psw este registrado

    cout << "C.I:" << ciGrupo4 <<  " " << endl;
    cout << "PSW:" << claveGrupo4 << " " << endl;

    if(indice1Grupo4==-3 || indice2Grupo4==-3){
        cout << "\nEL USUARIO INGRESADO NO ESTA REGISTRADO\n" << endl;
        cout << "¿DESEA REGISTRAR UN NUEVO USUSARIO? [SI O NO]" << endl;
        cin >> opSiNoGrupo4;
        while(opSiNoGrupo4!="NO" && opSiNoGrupo4!="No" && opSiNoGrupo4!="no" && opSiNoGrupo4!="SI"  && opSiNoGrupo4!="Si" && opSiNoGrupo4!="si" ){
            cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO" << endl;
            cout << "\n¿DESEA INICIAR SESION? [SI O NO]" << endl;
            cin >> opSiNoGrupo4;
        }
        if(opSiNoGrupo4=="SI" || opSiNoGrupo4=="Si" || opSiNoGrupo4=="si"){
            Registro_NuevoUsuarioGrupo4();
        }else{
            cout << "\t\nREGRESASTE AL LOGIN\n" << endl;
            Login_IniciaRegistroGrupo4();
        }
    }else{
        int indiceUserGrupo4=indice1Grupo4;
        cout << "      \n\tBIENBENIDO"<< endl;
        cout << "   " << nombres_Sin_o_Grupo4[indice1Grupo4] << "  " << apellidosGrupo4[indice1Grupo4] << endl;
        indiceUsuarioGrupo4=indice1Grupo4;
        MenuRegistroCivilOnlineHGrupo4();

    }
    return claveGrupo4;
}

#endif // L2REGISTRO_INICIOSESION_H_INCLUDED
