#ifndef L2ORDENAMIENTOS_BUSQUEDASGRUPO5_H_INCLUDED
#define L2ORDENAMIENTOS_BUSQUEDASGRUPO5_H_INCLUDED
//LLAMADA DE LIBRERIAS INTERNAS
#include <iostream>
//LLAMADA DE LIBRERIAS EXTERNAS
#include "L4Inventario_Clientes.h"
//ESPACIO DE TRABAJO DE ENTRADA Y SALIDA DE DATOS
using namespace std;
//DECALRACION DE FUNCIONES U PROCEDIMIENTOS
string O_SeleccionGrupo5(string clientesGrupo5[], int tamanoGrupo5);//Con la funcion de ordenamiento selecion se aplica al arrglo de clientes
string O_InsercionGrupo5(string clientesVentasGrupo5[], int tamanoGrupo5);//Con la funcion de ordenamiento insercion se aplica al arrglo de clientes al genrar un venta
string O_BurbujaGrupo5(string inventarioGrupo5[], int tamanoGrupo5);//Con la funcion de ordenamiento burbuja se aplica al arrglo del inventario
int B_BinariaGrupo5(string clientesGrupo5[], int tamanoGrupo5, string BuscarGrupo5);//Con la funcion de busqueda binaria se aplica para buscar el nombre del cliente si esta registrado
int B_BinariaVentasGrupo5(string iproductosGrupo5[], int tamanoGrupo5, string BuscarGrupo5);//Con la funcion de busqueda binaria se aplica para buscar la cdula del cliente para lso datos de la venta
int B_SecuencialGrupo5(string inventarioGrupo5[], int tamanoGrupo5, string BuscarGrupo5);//Con la funcion de ordenamiento selecion se aplica al arrglo de clientes
int B_SecuencialClienteGrupo5(string ceduClienteGrupo5[], int tamanoGrupo5, string BuscarGrupo5);//Con la funcion de ordenamiento selecion se aplica al arrglo de clientes
//VARIABLES, CONSTANTES U ARREGLOS - GLOBALES
string BuscarGrupo5;
//INICIALIZACION DE FUNCIONES U PROCEDIMIENTOS
string O_SeleccionGrupo5(string clientesGrupo5[], int tamanoGrupo5){
    int mini=0;
    string aux;
    for(int i=0 ; i< tamanoGrupo5 ; i++){
        mini=i;
        for(int j=i+1; j<tamanoGrupo5 ; j++){
            if(clientesGrupo5[j]<clientesGrupo5[mini]){
                mini = j;
            }
        }
        aux = clientesGrupo5[i];
        clientesGrupo5[i] = clientesGrupo5[mini];
        clientesGrupo5[mini] = aux;
    }
    return aux;
}
string O_InsercionGrupo5(string clientesVentasGrupo5[], int tamanoGrupo5){
    for(int i=0; i<tamanoGrupo5; i++){
        int pos=i;
        string aux=clientesVentasGrupo5[i];
        while((pos>0)&&(clientesVentasGrupo5[pos-1]>aux)){
            clientesVentasGrupo5[pos]=clientesVentasGrupo5[pos-1];
            pos--;
        }
        clientesVentasGrupo5[pos]=aux;
    }
    return "a";
}
string O_BurbujaGrupo5(string inventarioGrupo5[], int tamanoGrupo5){
    string aux;
    for(int i=0 ; i<tamanoGrupo5 ; i++){
        for(int j=0 ; j<tamanoGrupo5-1 ; j++){
            if(inventarioGrupo5[j]>inventarioGrupo5[j+1]){
                aux=inventarioGrupo5[j];
                inventarioGrupo5[j]=inventarioGrupo5[j+1];
                inventarioGrupo5[j+1]=aux;
            }
        }
    }
    return aux;
}
int B_BinariaGrupo5(string clientesGrupo5[], int tamanoGrupo5, string BuscarGrupo5){
    int inf=0, supe=tamanoGrupo5, mit=0;
    bool band=false;
    while(inf<=supe){
        mit=(inf+supe)/2;
        if(clientesGrupo5[mit]==BuscarGrupo5){
            band=true;
            break;
        }else{
            if(clientesGrupo5[mit]>BuscarGrupo5){
                supe=mit-1;
            }else{
                inf=mit+1;
            }
        }
    }
    if (band==false){
        cout<<"\nNO ESTA AFILIADO EL CLIENTE QUE BUSCA.."<<endl;
    }else{
        cout<<"\nESTA AFILIADO EL CLIENTE QUE BUSCA.. ESTA EN LA POSICION #"<<mit+1<<endl;
    }
    return mit;
}
int B_BinariaVentasGrupo5(string iproductosGrupo5[], int tamanoGrupo5, string BuscarGrupo5){
    int inf=0, supe=tamanoGrupo5, mit=0, indice;
    bool band=false;
    while(inf<=supe){
        mit=(inf+supe)/2;
        if(iproductosGrupo5[mit]==BuscarGrupo5){
            band=true;
            break;
        }else{
            if(iproductosGrupo5[mit]>BuscarGrupo5){
                supe=mit-1;
            }else{
                inf=mit+1;
            }
        }
    }
    if (band==false){
        cout << "\nPRODUCTO NO ESTA EN EL INVENTARIO" << endl;
        indice=-1;
    }else{
        cout << "\nPRODUCTO AGREGADO #" << mit+1 << endl;
        indice=mit;
    }
    return indice;
}
int B_SecuencialGrupo5(string inventarioGrupo5[], int tamanoGrupo5, string BuscarGrupo5){
    int i;
    bool band=false;
    i=0;
    while ((band==false) && (i<tamanoGrupo5)) {
        if (inventarioGrupo5[i]==BuscarGrupo5){
            band=true;
        }
        i++;
    }
    if (band==false){
        cout<<"\nNO ESTA INGRESADO AL INVENTARIO EL PRODUCTO QUE BUSCA.."<<endl;
    }else{
        cout<<"\nESTA INGRESADO AL INVENTARIO EL PRODUCTO QUE BUSCA.. ESTA EN LA POSICION #"<<i<<endl;
    }
    return i-1;
}
int B_SecuencialClienteGrupo5(string ceduClienteGrupo5[], int tamanoGrupo5, string BuscarGrupo5){
    int i, indice;
    bool band=false;
    i=0;
    while ((band==false) && (i<tamanoGrupo5)){
        if (ceduClienteGrupo5[i]==BuscarGrupo5){
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
#endif // L2ORDENAMIENTOS_BUSQUEDASGRUPO5_H_INCLUDED
