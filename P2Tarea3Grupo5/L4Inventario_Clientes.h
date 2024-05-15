#ifndef L4INVENTARIO_CLIENTES_H_INCLUDED
#define L4INVENTARIO_CLIENTES_H_INCLUDED
//LLAMADA DE LIBRERIAS INTERNAS
#include <iostream>
//LLAMADA DE LIBRERIAS EXTERNAS
#include "L1EstructuraGrupo5.h"
#include "L2Ordenamientos_BusquedasGrupo5.h"
//ESPACIO DE TRABAJO DE ENTRADA Y SALIDA DE DATOS
using namespace std;
//DECALRACION DE FUNCIONES U PROCEDIMIENTOS
string Opcion2ClientesGrupo5();
string Opcion1InventarioGrupo5();
string ClientesDinamicosGrupo5();
string InventarioDinamicosGrupo5();
void ImprimirInventarioGrupo5(string inventarioGrupo5[], int nProductosGrupo5);
void ImprimirClientesCeduGrupo5(string clientesGrupo5[], string clientesSin_O_Grupo5[], string ceduClienteGrupo5[], int nClientesGrupo5);
void ListaClientesGrupo5();
void ListaInventarioGrupo5();
void BuscarInventarioGrupo5();
void BuscarClienteGrupo5();
//VARIABLES, CONSTANTES U ARREGLOS - GLOBALES
string clientesGrupo5[20]={"Justin Mendoza","Gisel Troya","Liseth Torres","Wendy Duenas","Luis Mendoza"}, inventarioGrupo5[30]={"Jamon","Salchicha","Huevo","Cerelac","Harina","Papel higienico","Jabon","Atun","Maiz dulce","Aceitunas"}, clientesSin_O_Grupo5[20], ceduClienteGrupo5[20]={"2350233512","0900078091","1245789856","1111111112","7895632124"}, dirClienteGrupo5[20]={"El Carmen","Santo Domingo","Santo Domingo","Santo Domingo","Santo Domingo"}, telfClienteGrupo5[20]={"0969997478","0987456320","0998745478","0956965587","0936895895"}, emailClienteGrupo5[20]={"jm0656126@gamil.com","safafaf@gamil.com","rfrgt4@gamil.com","qeqedctgb5@gamil.com","pkonnorv@gamil.com"};
double precioinventarioGrupo5[30]={2.6,6,8.44,15,12,3.6,5.2,2.66,2,2,4.1,3.6,4.66,4,1,5,1.99,0.99,3.25,9.6,1,2.99,0.50,2.25,10,2,7.88,2.65,1.25,0.68};
int cantiProducInventarioGrupo5[30], nClientesEstaticosGrupo5=5, nClientesDinamicosGrupo5=0, nProductosEstaticosGrupo5=10, nProductosDinamicosGrupo5=0, nClientesGrupo5=nClientesEstaticosGrupo5+nClientesDinamicosGrupo5, nProductosGrupo5=nProductosEstaticosGrupo5+nProductosDinamicosGrupo5, nClientesIngresadosGrupo5=nClientesEstaticosGrupo5, nProductosIngresadosGrupo5=nProductosEstaticosGrupo5;
//INICIALIZACION DE FUNCIONES U PROCEDIMIENTOS
string Opcion2ClientesGrupo5(){
    int opClientesGrupo5;
    cout << "\n=========================================" << endl;
    cout << "[1] INGRESAR CLIENTES NUEVOS   (ALIMENTAR ARREGLO UNI DE FORMA DINAMICA CON USO DE FOR)" << endl;
    cout << "[2] BUSCAR CLIENTE EN LA LISTA ORDENADA   (IMPRIME ARREGLO CON O. SELECCION, REALIZA LA BUSQEUDA CON BINARIA)" << endl;
    cout << "[3] REGRESAR.." << endl;
    cout << "=========================================\n" << endl;
    cout << "SELECCIONA UNA OPCION:" << endl;
    cin >> opClientesGrupo5;
    switch(opClientesGrupo5){
        case 1:
            ClientesDinamicosGrupo5();//LLAMADA DE FUNCION PARA ALIMENTAR EL ARRGLO DE FORMA DINAMICA
            Opcion2ClientesGrupo5();//LLAMADA DE SI MISMO APLICA RECURSIVIDAD
            break;
        case 2:
            ListaClientesGrupo5();//LLAMADA DE SUNCIO LA CUAL ORDENA CON SELECCION EL ARREGLO Y IMPRIME PARA REALIZAR LA BUSQUEDA BINARIA
            Opcion2ClientesGrupo5();//LLAMADA DE SI MISMO APLICA RECURSIVIDAD
            break;
        case 3:
            cout << "\n=========================================" << endl;
            cout << "REGRESASTE AL MENU PRINCIPAL.." << endl;
            cout << "=========================================\n" << endl;
            break;
        default:
            cout << "\n=========================================" << endl;
            cout << "OPCION ERRONEA..VUELVE A INTENTARLO.." << endl;
            cout << "=========================================\n" << endl;
            Opcion2ClientesGrupo5();
    }
    return "a";
}
string Opcion1InventarioGrupo5(){
    int opInventarioGrupo5;
    cout << "(SUB MENU DEL INVENTARIO..SE PALICA RECURSIVIDAD PARA QUE SEA REPETITIVO)" << endl;
    cout << "\n=========================================" << endl;
    cout << "[1] INGRESAR PRODUCTOS NUEVOS     (ALIMENTAR ARREGLO UNI DE FORMA DINAMICA CON USO DE FOR)" << endl;
    cout << "[2] BUSCAR PRODUCTO EN LA LISTA ORDENADA    (IMPRIME ARREGLO CON O. BURBUJA, REALIZA LA BUSQEUDA CON SECUENCIAL)" << endl;
    cout << "[3] REGRESAR..    (REGRESA AL MENUR PRUNCIPAL)" << endl;
    cout << "=========================================\n" << endl;
    cout << "SELECCIONA UNA OPCION:" << endl;
    cin >> opInventarioGrupo5;
    switch(opInventarioGrupo5){
        case 1:
            InventarioDinamicosGrupo5();//LLAMADA DE FUNCION PARA ALIMENTAR EL ARRGLO DE FORMA DINAMICA
            Opcion1InventarioGrupo5();//LLAMADA DE SI MISMO APLICA RECURSIVIDAD
            break;
        case 2:
            ListaInventarioGrupo5();//LLAMADA DE SUNCIO LA CUAL ORDENA CON BURBUJA EL ARREGLO Y IMPRIME PARA REALIZAR LA BUSQUEDA SECUENCIAL
            Opcion1InventarioGrupo5();//LLAMADA DE SI MISMO APLICA RECURSIVIDAD
            break;
        case 3:
            cout << "\n=========================================" << endl;
            cout << "REGRESASTE AL MENU PRINCIPAL.." << endl;
            cout << "=========================================\n" << endl;
            break;
        default:
            cout << "\n=========================================" << endl;
            cout << "OPCION ERRONEA..VUELVE A INTENTARLO.." << endl;
            cout << "=========================================\n" << endl;
            Opcion1InventarioGrupo5();//LLAMADA DE SI MISMO APLICA RECURSIVIDAD
    }
    return "a";
}
string ClientesDinamicosGrupo5(){
    cout << "Ingresa el numero de clientes que deseas ingresar: [1 AL 15]" << endl;
    cin >> nClientesDinamicosGrupo5;
    while(nClientesDinamicosGrupo5<=0 || nClientesDinamicosGrupo5>15){
        cout << "Cantidad ingresada erronea..vuelva a ingresar" << endl;
        cout << "Ingresa el numero de clientes que deseas ingresar: [1 AL 15]" << endl;
        cin >> nClientesDinamicosGrupo5;
    }
    nClientesGrupo5 = nClientesEstaticosGrupo5 + nClientesDinamicosGrupo5;
    nClientesEstaticosGrupo5 = nClientesEstaticosGrupo5 + nClientesDinamicosGrupo5;
    cin.ignore();
    for(int i=nClientesIngresadosGrupo5; i<nClientesGrupo5; i++){
        cout << "Ingresa el nombre y apellido del cliente #" << i+1 << endl;
        getline(cin,clientesGrupo5[i]);
        cout << "Ingresa el C.I del cliente #" << i+1 << endl;
        getline(cin,ceduClienteGrupo5[i]);
        while(ceduClienteGrupo5[i]==ceduClienteGrupo5[i-1] || ceduClienteGrupo5[i]=="2350233512" || ceduClienteGrupo5[i]=="1111111112" || ceduClienteGrupo5[i]=="0900078091" || ceduClienteGrupo5[i]=="1245789856" || ceduClienteGrupo5[i]=="7895632124"){
            cout << "C.I ingresado ya esta en uso.. ingresa otro" << endl;
            cout << "Ingresa el C.I del cliente #" << i+1 << endl;
            getline(cin,ceduClienteGrupo5[i]);
        }
        cout << "Ingresa la direccion del cliente #" << i+1 << endl;
        getline(cin,dirClienteGrupo5[i]);
        cout << "Ingresa el Telf del cliente #" << i+1 << endl;
        getline(cin,telfClienteGrupo5[i]);
        while(telfClienteGrupo5[i]==telfClienteGrupo5[i-1] || telfClienteGrupo5[i]=="2350233512" || telfClienteGrupo5[i]=="0987456320" || telfClienteGrupo5[i]=="0998745478" || telfClienteGrupo5[i]=="0956965587" || telfClienteGrupo5[i]=="0936895895"){
            cout << "El Tlef ingresado ya esta en uso.. ingresa otro" << endl;
            cout << "Ingresa el Telf del cliente #" << i+1 << endl;
            getline(cin,telfClienteGrupo5[i]);
        }
        cout << "Ingresa el e-mail del cliente #" << i+1 << endl;
        getline(cin,emailClienteGrupo5[i]);
    }
    for(int i=0; i<nClientesGrupo5 ;i++){
        clientesSin_O_Grupo5[i]=clientesGrupo5[i];
    }
    nClientesIngresadosGrupo5=nClientesEstaticosGrupo5;
    return "a";
}
string InventarioDinamicosGrupo5(){
    nProductosDinamicosGrupo5=0;
    cout << "Ingresa el numero de Produactos que deseas ingresar: [1 AL 20]" << endl;
    cin >> nProductosDinamicosGrupo5;
    while(nProductosDinamicosGrupo5<=0 || nProductosDinamicosGrupo5>20){
        cout << "Cantidad ingresada erronea..vuelva a ingresar" << endl;
        cout << "Ingresa el numero de Produactos que deseas ingresar: [1 AL 20]" << endl;
        cin >> nProductosDinamicosGrupo5;
    }
    nProductosGrupo5 = nProductosEstaticosGrupo5 + nProductosDinamicosGrupo5;
    nProductosEstaticosGrupo5 = nProductosEstaticosGrupo5 + nProductosDinamicosGrupo5;
    cin.ignore();
    for(int i=nProductosIngresadosGrupo5; i<nProductosGrupo5; i++){
        cout << "Ingresa el nombre del producto #" << i+1 << endl;
        getline(cin,inventarioGrupo5[i]);
    }
    nProductosIngresadosGrupo5=nProductosEstaticosGrupo5;
    return "a";
}
void ImprimirInventarioGrupo5(string inventarioGrupo5[], int nProductosGrupo5){
    for(int i=0; i<nProductosGrupo5 ; i++){
        cout << "["<<i+1<<"]  "<< inventarioGrupo5[i] << endl;
    }
}
void ImprimirClientesCeduGrupo5(string clientesGrupo5[], string clientesSin_O_Grupo5[], string ceduClienteGrupo5[], int nClientesGrupo5){
    cout << "     CLIENTE               CEDULA           DIRECCION      TELEFONO            E-MAIL\n" << endl;
    for(int i=0; i<nClientesGrupo5 ; i++){
        string aux=clientesGrupo5[i];
        int indice=B_SecuencialClienteGrupo5(clientesSin_O_Grupo5, nClientesGrupo5, aux);
        cout << "["<<i+1<<"]  "<< clientesGrupo5[i] << "  \t" << ceduClienteGrupo5[indice] << "  \t" << dirClienteGrupo5[indice] << "  \t" << telfClienteGrupo5[indice] << "  \t" << emailClienteGrupo5[indice] << endl;
    }
}
void ListaClientesGrupo5(){
    for(int i=0; i<nClientesGrupo5 ;i++){
        clientesSin_O_Grupo5[i]=clientesGrupo5[i];
    }
    O_SeleccionGrupo5(clientesGrupo5, nClientesIngresadosGrupo5);
    cout << "\nLISTA DE CLIENTES ORDENADOS - METODO SELECCION\n" << endl;
    ImprimirClientesCeduGrupo5(clientesGrupo5, clientesSin_O_Grupo5, ceduClienteGrupo5, nClientesIngresadosGrupo5);
    cout << "\nBUSCAR CLIENTES - METODO B. BINARIA\n" << endl;
    BuscarClienteGrupo5();
}
void ListaInventarioGrupo5(){
    O_BurbujaGrupo5(inventarioGrupo5, nProductosIngresadosGrupo5);
    cout << "\nLISTA DE CLIENTES ORDENADOS - METODO BURBUJA\n" << endl;
    ImprimirInventarioGrupo5(inventarioGrupo5, nProductosIngresadosGrupo5);
    cout << "\nBUSCAR CLIENTES - METODO B. SECUENCIAL\n" << endl;
    BuscarInventarioGrupo5();
}
void BuscarInventarioGrupo5(){
    cout << "BUSQUEDA POR EL METODO SECUENCIAL" << endl;
    string buscarInventarioGrupo5, opSiNoGrupo5;
    cin.ignore();
    cout<<"\nINGRESE EL PRODUCTO QUE DESEA BUSCAR:"<<endl;
    getline(cin,buscarInventarioGrupo5);
    B_SecuencialGrupo5(inventarioGrupo5, nProductosIngresadosGrupo5, buscarInventarioGrupo5);
    cout << "\n¿DESEA VOLVER A BUSVAR OTRO CLINETE? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A BUSVAR OTRO CLINETE? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        cout << "\nBUSCAR CLIENTES - METODO B. BINARIA\n" << endl;
        BuscarInventarioGrupo5();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
void BuscarClienteGrupo5(){
    cout << "BUSQUEDA POR EL METODO BINARIA" << endl;
    string buscarClienteGrupo5, opSiNoGrupo5;
    cin.ignore();
    cout<<"\nINGRESE EL CLIENTE QUE DESEA BUSCAR: [NOMBRE]"<<endl;
    getline(cin,buscarClienteGrupo5);
    B_BinariaGrupo5(clientesGrupo5, nClientesIngresadosGrupo5, buscarClienteGrupo5);
    cout << "\n¿DESEA VOLVER A BUSVAR OTRO CLINETE? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A BUSVAR OTRO CLINETE? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        cout << "\nBUSCAR CLIENTES - METODO B. BINARIA\n" << endl;
        BuscarClienteGrupo5();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
#endif // L4INVENTARIO_CLIENTES_H_INCLUDED
