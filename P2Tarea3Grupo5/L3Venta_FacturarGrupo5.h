#ifndef L3VENTA_FACTURARGRUPO5_H_INCLUDED
#define L3VENTA_FACTURARGRUPO5_H_INCLUDED
//LLAMADA DE LIBRERIAS INTERNAS
#include <iostream>
#include <cmath>
//LLAMADA DE LIBRERIAS EXTERNAS
#include "L4Inventario_Clientes.h"
#include "L2Ordenamientos_BusquedasGrupo5.h"
//ESPACIO DE TRABAJO DE ENTRADA Y SALIDA DE DATOS
using namespace std;
//DECALRACION DE FUNCIONES U PROCEDIMIENTOS
void VentaGrupo5();
void FacturarcionGrupo5();
void DatosClientesVentaGrupo();
void ComprobanteFacturaGrupo5(int indice, string clientesSin_O_Grupo5[], string ceduClienteGrupo5[], string dirClienteGrupo5[], string telfClienteGrupo5[], string emailClienteGrupo5[], int diaGrupo5, int mesGrupo5, int anioGrupo5);
void ComprobanteVentaGrupo5(string nomClienteGrupo5, string apClienteGrupo5, string direClienteGrupo5, string ci_ClienteGrupo5, string telClienteGrupo5, string corClienteGrupo5);
void ComprobanteConsumidorFGrupo5(int dia, int mes, int anio);
void Ingreso_FechaGrupo5();
//VARIABLES, CONSTANTES U ARREGLOS - GLOBALES
float SubTotalGrupo5, DesctTotalGrupo5, Desct1Grupo5, Desctento1Grupo5, DesctTotalFinalGrupo5, total1Grupo5, impuestoIva1Grupo5, IVA1GRUPO5=0.12;
int anioGrupo5, diaGrupo5, mesGrupo5, camtProductoGrupo5,indiceProducGrupo5[30];
string nomClienteGrupo5, apClienteGrupo5, direClienteGrupo5, cedClienteGrupo5, ci_ClienteGrupo5, telClienteGrupo5, corClienteGrupo5;
//INICIALIZACION DE FUNCIONES U PROCEDIMIENTOS
void VentaGrupo5(){
    SubTotalGrupo5=0;DesctTotalGrupo5=0; Desct1Grupo5=0; Desctento1Grupo5=0; DesctTotalFinalGrupo5=0;total1Grupo5=0; impuestoIva1Grupo5=0;
    cout << "\nINGRESA LA CANTIDAD DE PRDUCTOS A FACTURAR: [1 - 10]" << endl;
    cin >> camtProductoGrupo5;
    while (camtProductoGrupo5<=0 || camtProductoGrupo5>10) {
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [1 - 10]" << endl;
        cout << "INGRESA LA CANTIDAD DE PRDUCTOS A FACTURAR: [1 - 10]" << endl;
        cin >> camtProductoGrupo5;
    }
    nProductosIngresadosGrupo5=nProductosEstaticosGrupo5;
    O_InsercionGrupo5(inventarioGrupo5, nProductosIngresadosGrupo5);
    cout << "\nLISTA DE PRODUCTOS ORDENADOS - METODO INSERCION\n" << endl;
    ImprimirInventarioGrupo5(inventarioGrupo5, nProductosIngresadosGrupo5);
    for(int i=0; i<camtProductoGrupo5; i++){
        string buscarProductoGrupo5, opSiNoGrupo5;
        cin.ignore();
        cout << "\BUSQUEDA DE PRODUCTOS - METODO BINARIA\n" << endl;
        cout<<"\nINGRESE EL NOMBRE DEL PRODUCTO A FACTURAR:"<<endl;
        getline(cin,buscarProductoGrupo5);
        indiceProducGrupo5[i] = B_BinariaVentasGrupo5(inventarioGrupo5, nProductosIngresadosGrupo5, buscarProductoGrupo5);
        while(indiceProducGrupo5[i]==-1){
            cout<<"\nVUELVA.. INGRESAR EL NOMBRE DEL PRODUCTO A FACTURAR:"<<endl;
            getline(cin,buscarProductoGrupo5);
            indiceProducGrupo5[i] = B_BinariaVentasGrupo5(inventarioGrupo5, nProductosIngresadosGrupo5, buscarProductoGrupo5);
        }
        cout << "\nINGRESE LA CANTIDAD DEL PRODUCTO: [1 - 20]" << endl;
        cin >> cantiProducInventarioGrupo5[indiceProducGrupo5[i]];
        while (cantiProducInventarioGrupo5[indiceProducGrupo5[i]]<=0 || cantiProducInventarioGrupo5[indiceProducGrupo5[i]]>20) {
            cout << "CANTIDAD ERRONEA...VUELVA A INGRESAR.." << endl;
            cout << "\nINGRESE LA CANTIDAD DEL PRODUCTO: [1 - 20]" << endl;
            cin >> cantiProducInventarioGrupo5[indiceProducGrupo5[i]];
        }
        cout << "\n=========================================" << endl;
        cout << "CANT.  DESC.        PRECIO U." << endl;
        cout << cantiProducInventarioGrupo5[indiceProducGrupo5[i]] << "      " << inventarioGrupo5[indiceProducGrupo5[i]] << "               $" << precioinventarioGrupo5[indiceProducGrupo5[i]] << endl;
        cout << "=========================================\n" << endl;
    }
    FacturarcionGrupo5();
}
void FacturarcionGrupo5(){
    string opSiNoGrupo5;
    int indice;
    bool afiliado=false, noAfiliado=false;
    for(int i=0; i<nClientesIngresadosGrupo5 ;i++){
        clientesSin_O_Grupo5[i]=clientesGrupo5[i];
    }
    cout << "\n                  ====================" << endl;
    cout << "                  =    FACTURACION   =" << endl;
    cout << "                  ====================\n" << endl;
    do{
        cin.ignore();
        cout << "\n¿FACTURA CON DATOS(SI) O CONSUMIDOR FINAL(NO)? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
        while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
            cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
            cout << "\n¿FACTURA CON DATOS(SI) O CONSUMIDOR FINAL(NO)? [SI O NO]" << endl;
            cin >> opSiNoGrupo5;
        }
        cin.ignore();
        if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
            cout << "INGRESA EL NUMERO DE CEDULA" << endl;
            getline(cin,cedClienteGrupo5);
            indice=B_SecuencialClienteGrupo5(ceduClienteGrupo5, nClientesIngresadosGrupo5, cedClienteGrupo5);
            if(indice==-3){
                cout << "\n¿EL C.I. INGRESADO NO ESTA AFILIADO..DESEA AFILIAR CLIENTES? [SI O NO]" << endl;
                cin >> opSiNoGrupo5;
                while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
                    cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
                    cout << "\n¿EL C.I. INGRESADO NO ESTA AFILIADO..DESEA AFILIAR CLIENTES? [SI O NO]" << endl;
                    cin >> opSiNoGrupo5;
                }
                if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
                    /*
                    COMPROBANTE FACTURA
                    */
                    ClientesDinamicosGrupo5();
                    cout << "INGRESA EL NUMERO DE CEDULA" << endl;
                    getline(cin,cedClienteGrupo5);
                    indice=B_SecuencialClienteGrupo5(ceduClienteGrupo5, nClientesIngresadosGrupo5, cedClienteGrupo5);
                    cout << "El CLIENTE FUE AFILIADO RECIBE UN DESCUENTO DE 20%" << endl;
                    Desct1Grupo5 = 0.20;
                    Ingreso_FechaGrupo5();
                    ComprobanteFacturaGrupo5(indice, clientesSin_O_Grupo5, ceduClienteGrupo5, dirClienteGrupo5, telfClienteGrupo5, emailClienteGrupo5, diaGrupo5, mesGrupo5, anioGrupo5);
                    afiliado=true;
                }else{
                    /*
                    COMPROBANTE VENTA
                    */
                    DatosClientesVentaGrupo();
                    Desct1Grupo5 = 0;
                    ComprobanteVentaGrupo5(nomClienteGrupo5, apClienteGrupo5, direClienteGrupo5, ci_ClienteGrupo5, telClienteGrupo5, corClienteGrupo5);
                    noAfiliado=true;
                }
            }else{
                /*
                COMPROMBATE FACTURA - si el cliente es afiliado
                */
                cout << "El CLIENTE ESTA AFILIADO RECIBE UN DESCUENTO DE 20%" << endl;
                Desct1Grupo5 = 0.20;
                Ingreso_FechaGrupo5();
                ComprobanteFacturaGrupo5(indice, clientesSin_O_Grupo5, ceduClienteGrupo5, dirClienteGrupo5, telfClienteGrupo5, emailClienteGrupo5, diaGrupo5, mesGrupo5, anioGrupo5);
                afiliado=true;
            }
        }else{
            /*
            COMPROBANTE CONSUMIDOR FINAL
            */
            Ingreso_FechaGrupo5();
            Desct1Grupo5 = 0;
            ComprobanteConsumidorFGrupo5(diaGrupo5, mesGrupo5, anioGrupo5);
            noAfiliado=true;
        }
    }while(afiliado!=true && noAfiliado!=true);



}
void DatosClientesVentaGrupo(){
    cin.ignore();
    cout << "Ingrese el nombre del cliente" << endl;
    getline(cin,nomClienteGrupo5);
    cout << "Ingrese el apellido del cliente" << endl;
    getline(cin,apClienteGrupo5);
    cout << "Ingrese la cédula del cliente" << endl;
    getline(cin,ci_ClienteGrupo5);
    cout << "Ingrese la direccion del cliente" << endl;
    getline(cin,direClienteGrupo5);
    cout << "Ingrese el telefono del cliente" << endl;
    getline(cin,telClienteGrupo5);
    cout << "Ingrese correo del cliente" << endl;
    getline(cin,corClienteGrupo5);
}
void ComprobanteFacturaGrupo5(int indice, string clientesSin_O_Grupo5[], string ceduClienteGrupo5[], string dirClienteGrupo5[], string telfClienteGrupo5[], string emailClienteGrupo5[], int dia, int mes, int anio){
    cout << "\n===========================================" << endl;
    cout << "||       *FACTURA SUPERMAXI*             ||" << endl;
    cout << "||     SANTO DOMINGO - ECUADOR           ||" << endl;
    cout << "===========================================\n" << endl;
    cout << "\tCliente: " << clientesSin_O_Grupo5[indice] << endl;
    cout << "\tCedula: " << ceduClienteGrupo5[indice] << endl;
    cout << "\tDireccion: " << dirClienteGrupo5[indice] << endl;
    cout << "\tTelefono: " << telfClienteGrupo5[indice] << endl;
    cout << "\tCorreo: " << emailClienteGrupo5[indice] << endl;
    cout << "\tFecha: " << dia << "/" << mes << "/" << anio << endl;
    cout << "\nCANT.  DESCRIPCION    PRECIO UNI.    PRECIO" << endl;
    cout << "===========================================" << endl;
    for(int i=0; i<camtProductoGrupo5; i++){
        cout << cantiProducInventarioGrupo5[indiceProducGrupo5[i]] << "\t" << inventarioGrupo5[indiceProducGrupo5[i]] << "\t        $" << precioinventarioGrupo5[indiceProducGrupo5[i]] << "\t      $" << cantiProducInventarioGrupo5[indiceProducGrupo5[i]]*precioinventarioGrupo5[indiceProducGrupo5[i]] << endl;
        SubTotalGrupo5 = SubTotalGrupo5+(cantiProducInventarioGrupo5[indiceProducGrupo5[i]]*precioinventarioGrupo5[indiceProducGrupo5[i]]);
    }
    cout << "===========================================\n\n" << endl;
    DesctTotalGrupo5 = Desct1Grupo5;
    Desctento1Grupo5 = SubTotalGrupo5*DesctTotalGrupo5;
    DesctTotalFinalGrupo5 = SubTotalGrupo5-Desctento1Grupo5;
    impuestoIva1Grupo5 = DesctTotalFinalGrupo5 * IVA1GRUPO5;
    total1Grupo5 = DesctTotalFinalGrupo5 + impuestoIva1Grupo5;
    cout << "\t   ================================" << endl;
    cout << "\t   || SUBTOTAL :\t" << SubTotalGrupo5 << "     ||"  << endl;
    cout << "\t   || DESCT 20%:\t" << Desctento1Grupo5 << "    ||"  << endl;
    cout << "\t   || SUBTOTAL :\t" << DesctTotalFinalGrupo5 << "    ||"  << endl;
    cout << "\t   || IVA 12%  :\t" << impuestoIva1Grupo5 << "  ||"  << endl;
    cout << "\t   || TOTAL    :\t" << total1Grupo5 << "  ||" << endl;
    cout << "\t   ================================\n" << endl;
}
void ComprobanteVentaGrupo5(string nomClienteGrupo5, string apClienteGrupo5, string direClienteGrupo5, string ci_ClienteGrupo5, string telClienteGrupo5, string corClienteGrupo5){
    cout << "\n===========================================" << endl;
    cout << "||       *FACTURA SUPERMAXI*             ||" << endl;
    cout << "||     SANTO DOMINGO - ECUADOR           ||" << endl;
    cout << "===========================================\n" << endl;
    cout << "\tCliente: " << nomClienteGrupo5 << " " << nomClienteGrupo5<< endl;
    cout << "\tCedula: " << ci_ClienteGrupo5 << endl;
    cout << "\tDireccion: " << direClienteGrupo5 << endl;
    cout << "\tTelefono: " << telClienteGrupo5 << endl;
    cout << "\tCorreo: " << corClienteGrupo5 << endl;
    cout << "\tFecha: " << diaGrupo5 << "/" << mesGrupo5 << "/" << anioGrupo5 << endl;
    cout << "\nCANT.  DESCRIPCION    PRECIO UNI.    PRECIO" << endl;
    cout << "===========================================" << endl;
    for(int i=0; i<camtProductoGrupo5; i++){
        cout << cantiProducInventarioGrupo5[indiceProducGrupo5[i]] << "\t" << inventarioGrupo5[indiceProducGrupo5[i]] << "\t        $" << precioinventarioGrupo5[indiceProducGrupo5[i]] << "\t      $" << cantiProducInventarioGrupo5[indiceProducGrupo5[i]]*precioinventarioGrupo5[indiceProducGrupo5[i]] << endl;
        SubTotalGrupo5 = SubTotalGrupo5+(cantiProducInventarioGrupo5[indiceProducGrupo5[i]]*precioinventarioGrupo5[indiceProducGrupo5[i]]);
    }
    cout << "===========================================\n\n" << endl;
    DesctTotalGrupo5 = Desct1Grupo5;
    Desctento1Grupo5 = SubTotalGrupo5*DesctTotalGrupo5;
    DesctTotalFinalGrupo5 = SubTotalGrupo5-Desctento1Grupo5;
    impuestoIva1Grupo5 = DesctTotalFinalGrupo5 * IVA1GRUPO5;
    total1Grupo5 = DesctTotalFinalGrupo5 + impuestoIva1Grupo5;
    cout << "\t   ================================" << endl;
    cout << "\t   || SUBTOTAL :\t" << SubTotalGrupo5 << "     ||"  << endl;
    cout << "\t   || DESCT 20%:\t" << Desctento1Grupo5 << "    ||"  << endl;
    cout << "\t   || SUBTOTAL :\t" << DesctTotalFinalGrupo5 << "    ||"  << endl;
    cout << "\t   || IVA 12%  :\t" << impuestoIva1Grupo5 << "  ||"  << endl;
    cout << "\t   || TOTAL    :\t" << total1Grupo5 << "  ||" << endl;
    cout << "\t   ================================\n" << endl;
}
void ComprobanteConsumidorFGrupo5(int dia, int mes, int anio){
    cout << "\n===========================================" << endl;
    cout << "||       *FACTURA SUPERMAXI*             ||" << endl;
    cout << "||     SANTO DOMINGO - ECUADOR           ||" << endl;
    cout << "===========================================\n" << endl;
    cout << "\tCliente: 9999999999" << endl;
    cout << "\tCedula: 9999999999" << endl;
    cout << "\tDireccion: 9999999999" << endl;
    cout << "\tTelefono: 9999999999" << endl;
    cout << "\tCorreo: 9999999999" << endl;
    cout << "\tFecha: " << dia << "/" << mes << "/" << anio << endl;
    cout << "\nCANT.  DESCRIPCION    PRECIO UNI.    PRECIO" << endl;
    cout << "===========================================" << endl;
    for(int i=0; i<camtProductoGrupo5; i++){
        cout << cantiProducInventarioGrupo5[indiceProducGrupo5[i]] << "\t" << inventarioGrupo5[indiceProducGrupo5[i]] << "\t        $" << precioinventarioGrupo5[indiceProducGrupo5[i]] << "\t      $" << cantiProducInventarioGrupo5[indiceProducGrupo5[i]]*precioinventarioGrupo5[indiceProducGrupo5[i]] << endl;
        SubTotalGrupo5 = SubTotalGrupo5+(cantiProducInventarioGrupo5[indiceProducGrupo5[i]]*precioinventarioGrupo5[indiceProducGrupo5[i]]);
    }
    cout << "===========================================\n\n" << endl;
    DesctTotalGrupo5 = Desct1Grupo5;
    Desctento1Grupo5 = SubTotalGrupo5*DesctTotalGrupo5;
    DesctTotalFinalGrupo5 = SubTotalGrupo5-Desctento1Grupo5;
    impuestoIva1Grupo5 = DesctTotalFinalGrupo5 * IVA1GRUPO5;
    total1Grupo5 = DesctTotalFinalGrupo5 + impuestoIva1Grupo5;
    cout << "\t   ================================" << endl;
    cout << "\t   || SUBTOTAL :\t" << SubTotalGrupo5 << "     ||"  << endl;
    cout << "\t   || DESCT 20%:\t" << Desctento1Grupo5 << "    ||"  << endl;
    cout << "\t   || SUBTOTAL :\t" << DesctTotalFinalGrupo5 << "    ||"  << endl;
    cout << "\t   || IVA 12%  :\t" << impuestoIva1Grupo5 << "  ||"  << endl;
    cout << "\t   || TOTAL    :\t" << total1Grupo5 << "  ||" << endl;
    cout << "\t   ================================\n" << endl;
}
void Ingreso_FechaGrupo5(){
    cout << "\       ==============================" << endl;
    cout << "       =   INGRESA LA FECHA ACTUAL  =" << endl;
    cout << "       ==============================\n" << endl;
    do {
        cout << "INGRESA EL DIA: ([1] - [31])" << endl;
        cin >> diaGrupo5;
        while (diaGrupo5<=0 || diaGrupo5>=32) {
            cout << "DIA ERRONEO" << endl;
            cout << "INGRESA EL DIA: ([1] - [31])" << endl;
            cin >> diaGrupo5;
        }
        cout << "INGRESA EL MES: ([1] - [12])" << endl;
        cin >> mesGrupo5;
        while (mesGrupo5<=0 || mesGrupo5>=13) {
            cout << "MES ERRONEO" << endl;
            cout << "INGRESA EL MES: ([1] - [12])" << endl;
            cin >> mesGrupo5;
        }
        cout << "INGRESA EL AÑO: ([2024])" << endl;
        cin >> anioGrupo5;
        while (anioGrupo5!=2024) {
            cout << "AÑO ERRONEO" << endl;
            cout << "INGRESA EL AÑO: ([2024])" << endl;
            cin >> anioGrupo5;
        }
    } while (anioGrupo5!=2024);
}
#endif // L3VENTA_FACTURARGRUPO5_H_INCLUDED
