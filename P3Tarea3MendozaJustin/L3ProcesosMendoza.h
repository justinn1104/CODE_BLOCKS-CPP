#ifndef L3PROCESOSMENDOZA_H_INCLUDED
#define L3PROCESOSMENDOZA_H_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include <algorithm>
#include <cctype>
#include "L1EstructurasMendoza.h"
#include "L4ArchivosMendoza.h"
using namespace std;
void RegistroNuevoUser();
string FechaMendoza();
string GenerarUserMendoza(string nom1Mendoza, string nom2Mendoza, string ape1Mendoza, int mmMendoza);
string GenerarPwsMendoza(string ape1Mendoza, string ddMendoza, string mmMendoza, string aaMendoza);
int tamanoEstaticoMendoza=1, tamanoDinamicoMendoza=0, tamanoMendoza=tamanoEstaticoMendoza+tamanoDinamicoMendoza,tamanoIngresadoMendoza=tamanoMendoza;
int B_SecuencialUserMendoza(DatosClientes clienteIngresados[], int tamanoGrupo4, string BuscarGrupo4);
int B_SecuencialPswMendoza(DatosClientes clienteIngresados[], int tamanoGrupo4, string BuscarGrupo4);
void Login_RegistroMendoza();
void Menu_BancoVeciMendoza(int usu_e);
void Deposito(int usu_e);
void Retiro(int usu_e);
void SaldoA(int usu_e);
void Transferencia(int usu_e);
int B_Secuencial_Cuenta(DatosClientes clienteIngresados[], int tamanoGrupo4, string BuscarGrupo4);
string ddMendoza, mmMendoza, aaMendoza, opSiNoMendoza;
int mmMendoza2, indice1Mendoza, indice2Mendoza;
void RegistroNuevoUser(){
    tamanoDinamicoMendoza=1;
    tamanoMendoza=tamanoEstaticoMendoza+tamanoDinamicoMendoza;
    cin.ignore();
    for(int i=tamanoEstaticoMendoza;i<tamanoMendoza;i++){
        cout << "INGRESA EL PRIMER NOMBRE:" << endl;
        getline(cin,clienteIngresados[i].infCliente.nomMendoza1);
        cout << "INGRESA EL SEGUNDO NOMBRE:" << endl;
        getline(cin,clienteIngresados[i].infCliente.nomMendoza2);
        cout << "INGRESA EL PRIMER APELLIDO:" << endl;
        getline(cin,clienteIngresados[i].infCliente.apeMendoza1);
        cout << "INGRESA EL SEGUNDO APELLIDO:" << endl;
        getline(cin,clienteIngresados[i].infCliente.apeMendoza2);
        cout << "INGRESA EL NUMERO DE C.I: [10 DIGITOS]" << endl;
        getline(cin,clienteIngresados[i].ceduMendoza);
        while(clienteIngresados[i].ceduMendoza.length()!=10){
            cout << "VUELVA A INGRESAR EL NUMERO DE C.I: [10 DIGITOS]" << endl;
            getline(cin,clienteIngresados[i].ceduMendoza);
        }
        cout << "INGRESA LA FECHA DE NACIMIENTO" << endl;
        clienteIngresados[i].fechaNaMendoza=FechaMendoza();
        clienteIngresados[i].userClienteMendoza=GenerarUserMendoza(clienteIngresados[i].infCliente.nomMendoza1, clienteIngresados[i].infCliente.nomMendoza2, clienteIngresados[i].infCliente.apeMendoza1, mmMendoza2),
        clienteIngresados[i].pwsClienteMendoza=GenerarPwsMendoza(clienteIngresados[i].infCliente.apeMendoza1, ddMendoza, mmMendoza, aaMendoza);
        string indiceNumCuenta = to_string(i);
        clienteIngresados[i].numCuentaMendoza.append("100000000").append(indiceNumCuenta);
        cout << "\n========================================================" << endl;
        cout << "USER: "  << clienteIngresados[i].userClienteMendoza << endl;
        cout << "CONTRASENA: "  << clienteIngresados[i].pwsClienteMendoza << endl;
        cout << "NUMERO CUENTA: "  << clienteIngresados[i].numCuentaMendoza << endl;
        cout << "========================================================\n" << endl;
    }
    CrearArchivosMendoza(tamanoMendoza);
    tamanoEstaticoMendoza=tamanoEstaticoMendoza+tamanoDinamicoMendoza;
    tamanoIngresadoMendoza=tamanoEstaticoMendoza;

}
string FechaMendoza(){
    int dia, mes, anio;
    string aa, aa2, mm, dd, formaFecha;
    cout << "Ingresa el año: [1950 - 2006]" << endl;
    cin >> anio;
    while(anio<1950 || anio>2006){
        cout << "AÑO INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa el año: [1950 - 2006]" << endl;
        cin >> anio;
    }
    cout << "Ingresa un mes: [1 al 12]" << endl;
    cin >> mes;
    while(mes<1 || mes>12){
        cout << "MES INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa un mes: [1 al 12]" << endl;
        cin >> mes;
    }
    cout << "Ingresa un dia: [1 al 31]" << endl;
    cin >> dia;
    while(dia<1 || dia>31){
        cout << "Ingresa un dia: [1 al 31]" << endl;
        cin >> dia;
    }
    mmMendoza2=mes;
    aa = to_string(anio);
    mm = to_string(mes);
    dd = to_string(dia);
    ddMendoza=dd;
    formaFecha.append(dd);
    formaFecha.append("/");
    formaFecha.append(mm);
    formaFecha.append("/");
    aa2 = aa.substr(2,3);
    aaMendoza=aa2;
    formaFecha.append(aa2);
    return formaFecha;
}
string GenerarUserMendoza(string nom1Mendoza, string nom2Mendoza, string ape1Mendoza, int mmMendoza2){
    string usuario, ape1User, ape2User, mmUser, mesMendoza;
    string nom1User=nom1Mendoza;
    string nom2User=nom2Mendoza;
    nom1User= nom1Mendoza.substr(0,1);
    nom2User= nom2Mendoza.substr(0,1);
    usuario.append(nom1User);
    usuario.append(nom2User);
    usuario.append(ape1Mendoza);
    if(mmMendoza2<10){
        usuario.append("0");
    }
    mesMendoza = to_string(mmMendoza2);//transforma de int a string
    mmUser = mesMendoza.substr(0,2);
    mmMendoza=mmUser;
    usuario.append(mmUser);
    for(int i=0 ; usuario[i] ; i++){
        usuario[i] = tolower(usuario[i]);
    }
    return usuario;
}
string GenerarPwsMendoza(string ape1Mendoza, string ddMendoza, string mmMendoza, string aaMendoza){
    string contrasena, contrasenaInvr;
    if(mmMendoza.length()<2){
        contrasena.append(ape1Mendoza).append(ddMendoza).append("0").append(mmMendoza).append(aaMendoza);
    }else{
        contrasena.append(ape1Mendoza).append(ddMendoza).append(mmMendoza).append(aaMendoza);
    }
    for(int i=0; contrasena[i]; i++){
        contrasena[i]=tolower(contrasena[i]);
    }
    reverse(contrasena.begin(), contrasena.end());
    return contrasena;
}
string IniciarSesionMendoza(){
    string ciMendoza, contraMendoza;
    cout << "Pws def:admin - User def:admin" << endl;
    cout << "\t\nINICAR SESION\n" << endl;
    cout << "INGRESA TU USUARIO:" << endl;
    cin >> ciMendoza;
    cout << "INGRSA TU CONTRASEÑA:" << endl;
    cin >> contraMendoza;
    indice1Mendoza=B_SecuencialUserMendoza(clienteIngresados, tamanoIngresadoMendoza, ciMendoza);//verifica que la cedula este registrado
    indice2Mendoza=B_SecuencialPswMendoza(clienteIngresados, tamanoIngresadoMendoza, contraMendoza);//verifica que la psw este registrado
    if(indice1Mendoza==-3 || indice2Mendoza==-3){
        cout << "\nEL USUARIO INGRESADO NO ESTA REGISTRADO\n" << endl;
        cout << "¿DESEA REGISTRAR UN NUEVO USUSARIO? [SI O NO]" << endl;
        cin >> opSiNoMendoza;
        for(int i=0; opSiNoMendoza[i]; i++){
            opSiNoMendoza[i]=tolower(opSiNoMendoza[i]);
        }
        while(opSiNoMendoza!="no" && opSiNoMendoza!="si"){
            cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO" << endl;
            cout << "\n¿DESEA INICIAR SESION? [SI O NO]" << endl;
            cin >> opSiNoMendoza;
        }
        if(opSiNoMendoza=="si"){
            RegistroNuevoUser();
        }else{
            cout << "\t\nREGRESASTE AL LOGIN\n" << endl;
            Login_RegistroMendoza();
        }
    }else{
        cout << "\n\t\tBIENBENIDO " << clienteIngresados[indice1Mendoza].infCliente.nomMendoza1 << endl;
        Menu_BancoVeciMendoza(indice1Mendoza);

    }
    return "V";
}
int B_SecuencialUserMendoza(DatosClientes clienteIngresados[], int tamanoMendoza, string BuscarMendoza){
    int i, indice;
    bool band=false;
    i=0;
    while ((band==false) && (i<tamanoMendoza)){
        if (clienteIngresados[i].userClienteMendoza==BuscarMendoza){
            band=true;
        }
        i++;
    }
    if (band==false){
        indice=-3;
    }else{
        indice=i-1;
    }
    return indice;
}
int B_SecuencialPswMendoza(DatosClientes clienteIngresados[], int tamanoMendoza, string BuscarMendoza){
    int i, indice;
    bool band=false;
    i=0;
    while ((band==false) && (i<tamanoMendoza)){
        if (clienteIngresados[i].pwsClienteMendoza==BuscarMendoza){
            band=true;
        }
        i++;
    }
    if (band==false){
        indice=-3;
    }else{
        indice=i-1;
    }
    return indice;
}
void Deposito(int usu_e){
    int opc2;
    double dinero;
    cout << "\n============================================================" << endl;
    cout << "\tDEPOSITO"<<endl;
    cout << "============================================================\n" << endl;
    cout<<"\nINGRESA LA CANTIDAD QUE DESEA DEPOSITAR: [$5.00 - $500.00]"<<endl;
    cin>>dinero;
    while(dinero<5 || dinero>500){
        cout<<"\nVUELVA A INGRESAR LA CANTIDAD QUE DESEA DEPOSITAR: [$5.00 - $500.00]"<<endl;
        cin>>dinero;
    }
    clienteIngresados[usu_e].saldoTotal+=dinero;
    cout << "\nDEPOSITO RELAIZADO CORRECTAMENTE.." << endl;
    cout << "\nSALDO ACTUAL: $"<<clienteIngresados[usu_e].saldoTotal << endl;
    CrearArchivoDepositoMendoza(usu_e, dinero);
    cout << "\n============================================================" << endl;
    cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
    cout << "[2] VOLVER A DEPOSITAR"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!=1&&opc2!=2){
        cout << "\n============================================================" << endl;
        cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
        cout << "[2] VOLVER A DEPOSITAR"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
    }
    if(opc2==1){
        Menu_BancoVeciMendoza(usu_e);
    }else{
        Deposito(usu_e);
    }
}
void Retiro(int usu_e){
    int opc2;
    double dinero;
    if(clienteIngresados[usu_e].saldoTotal==0){
        cout << "EL SALDO DEL USUARIO NO ES SUFICIENTE.. REALIZA UN DEPOSITO PRIMERO" << endl;
        cout << "\n============================================================" << endl;
        cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
        cout << "[2] DEPOSITAR"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
        while(opc2!=1&&opc2!=2){
            cout << "\n============================================================" << endl;
            cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
            cout << "[2] DEPOSITAR"<<endl;
            cout << "============================================================\n" << endl;
            cin>>opc2;
        }
        if(opc2==1){
            Menu_BancoVeciMendoza(usu_e);
        }else{
            Deposito(usu_e);
        }
    }
    cout << "\n============================================================" << endl;
    cout << "\tRETIRO"<<endl;
    cout << "============================================================\n" << endl;
    cout<<"\nINGRESE EL MONTO A RETIRAR: [$5 - $500]"<<endl;
    cin>>dinero;
    while(dinero<5 || dinero>500 || dinero>clienteIngresados[usu_e].saldoTotal){
        if(dinero>clienteIngresados[usu_e].saldoTotal){
            cout << "\nTU SALDO ES INSUFICIENTE PARA REALIZAR EL RETIRO." << endl;
            cout << "\nSALDO DISPONIBLE: \t$" << clienteIngresados[usu_e].saldoTotal << endl;
            cout << "\nVUELVA A INGRESAR EL MONTO A RETIRAR: [$5 - $500]" << endl;
            cin >> dinero;
        }else{
            cout << "\nSALDO DISPONIBLE: \t$" << clienteIngresados[usu_e].saldoTotal << endl;
            cout << "\VUELVA A INGRESAR EL MONTO A RETIRAR: [$5 - $500]" << endl;
            cin >> dinero;
        }
    }
    clienteIngresados[usu_e].saldoTotal-=dinero;
    cout<<"\nSu Retiro se realizo correctamente."<<endl;
    cout<<"\nTu saldo actual es: $"<<clienteIngresados[usu_e].saldoTotal << endl;
    CrearArchivoRetirosMendoza(usu_e, dinero);
    cout << "\n============================================================" << endl;
    cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
    cout << "[2] VOLVER A RETIRAR"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!=1&&opc2!=2){
        cout << "\n============================================================" << endl;
        cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
        cout << "[2] VOLVER A RETIRAR"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
    }
    if(opc2==1){
        Menu_BancoVeciMendoza(usu_e);
    }else{
        Retiro(usu_e);
    }
}
void SaldoA(int usu_e){
    int opc2;
    string nombresUser;
    nombresUser.append(clienteIngresados[usu_e].infCliente.nomMendoza1).append(" ").append(clienteIngresados[usu_e].infCliente.apeMendoza1);
    cout<<"\nUsuario: "<< nombresUser <<endl;
    cout<<"Cedula: "<< clienteIngresados[usu_e].ceduMendoza<<endl;
    cout<<"Numero de Cuenta: "<< clienteIngresados[usu_e].numCuentaMendoza<<endl;
    cout<<"Saldo actual: $" << clienteIngresados[usu_e].saldoTotal <<endl;
    cout << "\n============================================================" << endl;
    cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
    cout << "[2] VOLVER AL LOGIN"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!=1&&opc2!=2){
        cout << "\n============================================================" << endl;
        cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
        cout << "[2] VOLVER AL CONSULTAR SALDO"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
    }
    if(opc2==1){
        Menu_BancoVeciMendoza(usu_e);
    }else{
        SaldoA(usu_e);
    }
}
void Transferencia(int usu_e){
    int opc2;
    string numCueMendozaRefe;
    double monto;
    if(clienteIngresados[usu_e].saldoTotal==0){
        cout << "EL SALDO DEL USUARIO NO ES SUFICIENTE.. REALIZA UN DEPOSITO PRIMERO" << endl;
        cout << "\n============================================================" << endl;
        cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
        cout << "[2] DEPOSITAR"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
        while(opc2!=1&&opc2!=2){
            cout << "\n============================================================" << endl;
            cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
            cout << "[2] DEPOSITAR"<<endl;
            cout << "============================================================\n" << endl;
            cin>>opc2;
        }
        if(opc2==1){
            Menu_BancoVeciMendoza(usu_e);
        }else{
            Deposito(usu_e);
        }
    }
    cout << "\n============================================================" << endl;
    cout << "\tTRANSFERENCIA"<<endl;
    cout << "============================================================\n" << endl;
    cout << "INGRESE EL NUMERO DE CUENTA DEL BENEFICIARIO: [10 digitos]"<<endl;
    cin >> numCueMendozaRefe;
    while(numCueMendozaRefe.length()!=10||clienteIngresados[usu_e].numCuentaMendoza==numCueMendozaRefe){
        if(clienteIngresados[usu_e].numCuentaMendoza==numCueMendozaRefe){
            cout << "NO SE PUEDE TRANSFERIR A TU CUENTA USA UNA DIFERENTE " << endl;
            cout << "VUELVA A INGRESAR EL NUMERO DE CUENTA DEL BENEFICIARIO: [10 digitos]" << endl;
            cin >> numCueMendozaRefe;
        }else{
            cout << "VUELVA A INGRESAR EL NUMERO DE CUENTA DEL BENEFICIARIO: [10 digitos]" << endl;
            cin >> numCueMendozaRefe;
        }
    }
    int indiceBeneMendoza=B_Secuencial_Cuenta(clienteIngresados, tamanoMendoza, numCueMendozaRefe);
    if(indiceBeneMendoza==-3){
        cout << "\nEL NUMERO DE CUENTA NO EXISTE." << endl;
        cout << "\n============================================================" << endl;
        cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
        cout << "[2] VOLVER A TRANSFERIR"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
        while(opc2!=1&&opc2!=2){
            cout << "\n============================================================" << endl;
            cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
            cout << "[2] VOLVER A TRANSFERIR"<<endl;
            cout << "============================================================\n" << endl;
            cin>>opc2;
        }
        if(opc2==1){
            Menu_BancoVeciMendoza(usu_e);
        }else{
            Transferencia(usu_e);
        }
    }
    double saldo_emisor=clienteIngresados[usu_e].saldoTotal;
    double saldo_receptor=clienteIngresados[indiceBeneMendoza].saldoTotal;
    cout << "INGRESE EL MONTO A TRANSFERIR: [$0.01 - $1500.00]" << endl;
    cin >> monto;
    while(monto<=0 || monto>1500 || monto>saldo_emisor){
        if(monto>saldo_emisor){
            cout << "\nTU SALDO ES INSUFICIENTE PARA REALIZAR LA TRANSFERENCIA." << endl;
            cout << "\nSALDO DISPONIBLE: \t$" << clienteIngresados[usu_e].saldoTotal << endl;
            cout << "\nVUELVA A INGRESAR EL MONTO A TRANSFERIR: [$0.01 - $1500.00]" << endl;
            cin >> monto;
        }else{
            cout << "\nSALDO DISPONIBLE: \t$" << clienteIngresados[usu_e].saldoTotal << endl;
            cout << "\nVUELVA A INGRESAR EL MONTO A TRANSFERIR: [$0.01 - $1500.00]" << endl;
            cin >> monto;
        }
    }
    saldo_emisor-=monto;
    saldo_receptor+=monto;
    clienteIngresados[usu_e].saldoTotal=saldo_emisor;
    clienteIngresados[indiceBeneMendoza].saldoTotal=saldo_receptor;
    cout<<"\nTransferencia realizada correctamente."<<endl;
    cout<<"\nCuenta Beneficiaria: "<< numCueMendozaRefe <<endl;
    cout<<"\nCuenta Emisora: "<< clienteIngresados[usu_e].numCuentaMendoza << endl;
    cout<<"Tu Saldo actual es: $" << clienteIngresados[usu_e].saldoTotal << endl;
    CrearArchivoTransferenciasMendoza(usu_e, numCueMendozaRefe, monto);
    cout << "\n============================================================" << endl;
    cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
    cout << "[2] VOLVER AL LOGIN"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!=1&&opc2!=2){
        cout << "\n============================================================" << endl;
        cout << "[1] VOLVER AL MENU DEL USUARIO"<<endl;
        cout << "[2] VOLVER AL LOGIN"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
    }
    if(opc2==1){
        Menu_BancoVeciMendoza(usu_e);
    }else{
        Login_RegistroMendoza();
    }
}
int B_Secuencial_Cuenta(DatosClientes clienteIngresados[], int tamanoMendoza, string BuscarMendoza){
    int i, indice;
    bool band=false;
    i=0;
    while ((band==false) && (i<tamanoMendoza)){
        if (clienteIngresados[i].numCuentaMendoza==BuscarMendoza){
            band=true;
        }
        i++;
    }
    if (band==false){
        indice=-3;
    }else{
        indice=i-1;
    }
    return indice;
}


#endif // L3PROCESOSMENDOZA_H_INCLUDED
