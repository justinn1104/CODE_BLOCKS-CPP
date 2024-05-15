#ifndef L1ESTRUCTURAMENDOZA_H_INCLUDED
#define L1ESTRUCTURAMENDOZA_H_INCLUDED
#include <iostream>
#include "L2ArchivosStructMendoza.h"

using namespace std;

void MenuMendoza();

void MenuMendoza(){
    nomPedido="";
    int opMendoza;
    cout << "\n\tCAFETERIA TE MAS DULCE" << endl;
    cout << "\n=========================================" << endl;
    cout << menuOps.op1Mendoza << endl;
    cout << menuOps.op2Mendoza << endl;
    cout << menuOps.op3Mendoza << endl;
    cout << "=========================================\n" << endl;
    cout << "SELECIONA UNA OPCION DEL MENU: " << endl;
    cin >> opMendoza;
    switch(opMendoza){
    case 1:
        RegistroVentaProductosMendoza();
        MenuMendoza();
        break;
    case 2:
        LecturaArchivoMendoza();
        MenuMendoza();
        break;
    case 3:
        cout << "\t\nSALISTE CON EXITO DEL PROGRAMA....." << endl;
        break;
    default:
        cout << "\t\nOPCION ERRONEA...VUELVE A INTENTARLO...." << endl;
        MenuMendoza();
    }
}
#endif // L1ESTRUCTURAMENDOZA_H_INCLUDED
