#ifndef L4ARCHIVOSMENDOZA_H_INCLUDED
#define L4ARCHIVOSMENDOZA_H_INCLUDED
#include <iostream>
#include <fstream>
#include "L2StructsMendoza.h"
#include "L3ProcesosMendoza.h"

using namespace std;

void CrearArchivoClientesMendoza(int tamanoMendoza);
void LecturaArchivosMendoza();
void CrearArchivoRetirosMendoza(int usu_e, double retiro);
void CrearArchivoDepositoMendoza(int usu_e, double deposito);
void CrearArchivoTransferenciasMendoza(int usu_e, string numCuentaRe,double transferencia);
int i=0;
void CrearArchivosMendoza(int tamanoMendoza){
    cout << "\n==========================" << endl;
    cout << "|| CREAR UN ARCHIVO.TXT ||" << endl;
    cout << "==========================\n" << endl;
    ofstream ArchivoRegistroClientes;
    ArchivoRegistroClientes.open("RegistroClientes.txt",ios::app);
    if(ArchivoRegistroClientes.is_open()){
        for(int i=0; i<tamanoMendoza; i++){
            string nombresMendoza;
            nombresMendoza.append(clienteIngresados[i].infCliente.nomMendoza1).append(" ").append(clienteIngresados[i].infCliente.nomMendoza2).append(" ").append(clienteIngresados[i].infCliente.apeMendoza1).append(" ").append(clienteIngresados[i].infCliente.apeMendoza2);
            ArchivoRegistroClientes << "\n=========================================================================" << endl;
            ArchivoRegistroClientes << "\t\nUSUARIO #" << i+1 << endl;
            ArchivoRegistroClientes << "Nombres: " << nombresMendoza << endl;
            ArchivoRegistroClientes << "C.I: " << clienteIngresados[i].ceduMendoza << endl;
            ArchivoRegistroClientes << "Fecha Nacimiento: " << clienteIngresados[i].fechaNaMendoza << endl;
            ArchivoRegistroClientes << "Numero de Cuenta: " << clienteIngresados[i].numCuentaMendoza <<endl;
            ArchivoRegistroClientes << "Usuario: " << clienteIngresados[i].userClienteMendoza <<endl;
            ArchivoRegistroClientes << "Contraseña: " << clienteIngresados[i].pwsClienteMendoza <<endl;
            ArchivoRegistroClientes << "=========================================================================\n" << endl;
        }
        ArchivoRegistroClientes.close();
        cout << "\nLOS DATOS SE HAN GUARDADO EN EL ARCHIVO 'RegistroClientes.txt' correctamente." << endl;
    }else{
        cerr << "\nERROR AL ABRIR EL ARCHIVO" << endl;
    }
}
void CrearArchivoDepositoMendoza(int usu_e, double deposito){
    string ArchivoMendoza;
    i+=1;
    ArchivoMendoza.append(clienteIngresados[usu_e].numCuentaMendoza).append(".txt");
    cout << "\n==========================" << endl;
    cout << "|| CREAR UN ARCHIVO.TXT ||" << endl;
    cout << "==========================\n" << endl;
    ofstream ArchivoRegistroDeposito;
    ArchivoRegistroDeposito.open(ArchivoMendoza,ios::app);
    if(ArchivoRegistroDeposito.is_open()){
        string nombresMendoza;
        nombresMendoza.append(clienteIngresados[usu_e].infCliente.nomMendoza1).append(" ").append(clienteIngresados[usu_e].infCliente.nomMendoza2).append(" ").append(clienteIngresados[usu_e].infCliente.apeMendoza1).append(" ").append(clienteIngresados[usu_e].infCliente.apeMendoza2);
        ArchivoRegistroDeposito << "\n=========================================================================" << endl;
        ArchivoRegistroDeposito << "\t\nDEPOSITO #" << i << endl;
        ArchivoRegistroDeposito << "Nombres: " << nombresMendoza << endl;
        ArchivoRegistroDeposito << "Numero de Cuenta: " << clienteIngresados[usu_e].numCuentaMendoza <<endl;
        ArchivoRegistroDeposito << "Monto Retirado: " << deposito <<endl;
        ArchivoRegistroDeposito << "=========================================================================\n" << endl;
        ArchivoRegistroDeposito.close();
        cout << "\nLOS DATOS SE HAN GUARDADO EN EL ARCHIVO '" << ArchivoMendoza << "' correctamente." << endl;
        i++;
    }else{
        cerr << "\nERROR AL ABRIR EL ARCHIVO" << endl;
    }
}
void CrearArchivoRetirosMendoza(int usu_e, double retiro){
    string ArchivoMendoza;int i=0;
    ArchivoMendoza.append(clienteIngresados[usu_e].numCuentaMendoza).append(".txt");
    cout << "\n==========================" << endl;
    cout << "|| CREAR UN ARCHIVO.TXT ||" << endl;
    cout << "==========================\n" << endl;
    ofstream ArchivoRegistroRetiros;
    ArchivoRegistroRetiros.open(ArchivoMendoza,ios::app);
    if(ArchivoRegistroRetiros.is_open()){
        string nombresMendoza;
        nombresMendoza.append(clienteIngresados[usu_e].infCliente.nomMendoza1).append(" ").append(clienteIngresados[usu_e].infCliente.nomMendoza2).append(" ").append(clienteIngresados[usu_e].infCliente.apeMendoza1).append(" ").append(clienteIngresados[usu_e].infCliente.apeMendoza2);
        ArchivoRegistroRetiros << "\n=========================================================================" << endl;
        ArchivoRegistroRetiros << "\t\nRETIRO #" << i+1 << endl;
        ArchivoRegistroRetiros << "Nombres: " << nombresMendoza << endl;
        ArchivoRegistroRetiros << "Numero de Cuenta: " << clienteIngresados[usu_e].numCuentaMendoza <<endl;
        ArchivoRegistroRetiros << "Monto Retirado: " << retiro <<endl;
        ArchivoRegistroRetiros << "=========================================================================\n" << endl;
        ArchivoRegistroRetiros.close();
        cout << "\nLOS DATOS SE HAN GUARDADO EN EL ARCHIVO '" << ArchivoMendoza << "' correctamente." << endl;
    }else{
        cerr << "\nERROR AL ABRIR EL ARCHIVO" << endl;
    }
    i++;
}
void CrearArchivoTransferenciasMendoza(int usu_e, string numCuentaRe,double transferencia){
    string ArchivoMendoza;int i=0;
    ArchivoMendoza.append(clienteIngresados[usu_e].numCuentaMendoza).append(".txt");
    cout << "\n==========================" << endl;
    cout << "|| CREAR UN ARCHIVO.TXT ||" << endl;
    cout << "==========================\n" << endl;
    ofstream ArchivoRegistroTransferencia;
    ArchivoRegistroTransferencia.open(ArchivoMendoza,ios::app);
    if(ArchivoRegistroTransferencia.is_open()){
        string nombresMendoza;
        nombresMendoza.append(clienteIngresados[usu_e].infCliente.nomMendoza1).append(" ").append(clienteIngresados[usu_e].infCliente.nomMendoza2).append(" ").append(clienteIngresados[usu_e].infCliente.apeMendoza1).append(" ").append(clienteIngresados[usu_e].infCliente.apeMendoza2);
        ArchivoRegistroTransferencia << "\n=========================================================================" << endl;
        ArchivoRegistroTransferencia << "\t\nTRANSFERENCIA #" << i+1 << endl;
        ArchivoRegistroTransferencia << "Nombres: " << nombresMendoza << endl;
        ArchivoRegistroTransferencia << "Numero de Cuenta de origen: " << clienteIngresados[usu_e].numCuentaMendoza <<endl;
        ArchivoRegistroTransferencia << "Numero de Cuenta del destinatario: " << numCuentaRe <<endl;
        ArchivoRegistroTransferencia << "Monto Transferido: " << transferencia <<endl;
        ArchivoRegistroTransferencia << "=========================================================================\n" << endl;
        ArchivoRegistroTransferencia.close();
        cout << "\nLOS DATOS SE HAN GUARDADO EN EL ARCHIVO '" << ArchivoMendoza << "' correctamente." << endl;
    }else{
        cerr << "\nERROR AL ABRIR EL ARCHIVO" << endl;
    }
    i++;
}
void LecturaArchivosMendoza(){
    ifstream archivoRegistroEstudiantesMendoza;
    string textoArchivoMendoza, archivoLecturaMendoza, siNoMendoza;
    bool band=false;
    cout << "\n==========================" << endl;
    cout << "|| LEER UN ARCHIVO.TXT ||" << endl;
    cout << "==========================\n" << endl;
    do{
        cout << "INGRESA EL NOMBRE DEL ARCHIVO QUE DESEA ABRIR (SIN EL .TXT): " << endl;
        cin >> archivoLecturaMendoza;
        archivoLecturaMendoza.append(".txt");
        archivoRegistroEstudiantesMendoza.open(archivoLecturaMendoza, ios::in);
        if(archivoRegistroEstudiantesMendoza.fail()){
            cout << "\nERROR, NO SE PUEDE ABRIR EL ARCHIVO SOLO LECTURA.. NO EXISTE.." << endl;
        }else{
            cout << "\nARCHIVO ABIERTO EN EL MODO LECTURA.." << endl;
            while(getline(archivoRegistroEstudiantesMendoza, textoArchivoMendoza)){
                cout << textoArchivoMendoza << endl;
            }
        }
        archivoRegistroEstudiantesMendoza.close();
        cout << "\n¿DESEAR VOLVER A INGRESAR EL NOMBRE EL ARCHIVO? [Si o No]" << endl;
        cin >> siNoMendoza;
        for(int i=0; siNoMendoza[i]; i++){
            siNoMendoza[i] = tolower(siNoMendoza[i]);
        }
        while(siNoMendoza!="si" && siNoMendoza!="no"){
            cout << "\nVUELVA A INGRESAR [Si o No]" << endl;
            cin >> siNoMendoza;
            for(int i=0; siNoMendoza[i]; i++){
                siNoMendoza[i] = tolower(siNoMendoza[i]);
            }
        }
        if(siNoMendoza=="si"){
            band = false;
        }else{
            band = true;
        }
    }while(band!=true);
}
void LecturaArchivosMovimientoMendoza(int usu_e){
    ifstream archivoRegistroEstudiantesMendoza;
    string textoArchivoMendoza, archivoLecturaMendoza, siNoMendoza;
    cout << "\n==========================" << endl;
    cout << "|| LEER UN ARCHIVO.TXT ||" << endl;
    cout << "==========================\n" << endl;
    archivoLecturaMendoza.append(clienteIngresados[usu_e].numCuentaMendoza).append(".txt");
    archivoRegistroEstudiantesMendoza.open(archivoLecturaMendoza, ios::in);
    if(archivoRegistroEstudiantesMendoza.fail()){
        cout << "\nERROR, NO SE PUEDE ABRIR EL ARCHIVO SOLO LECTURA.." << endl;
    }else{
        cout << "\nARCHIVO ABIERTO EN EL MODO LECTURA.." << endl;
        cout << "\nMOVIMIENTOS DE LA CUENTA #" << clienteIngresados[usu_e].numCuentaMendoza << endl;
        while(getline(archivoRegistroEstudiantesMendoza, textoArchivoMendoza)){
            cout << textoArchivoMendoza << endl;
        }
    }
    archivoRegistroEstudiantesMendoza.close();
}


#endif // L4ARCHIVOSMENDOZA_H_INCLUDED
