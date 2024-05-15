#ifndef L1ESTRUCTURAMENDOZA_H_INCLUDED
#define L1ESTRUCTURAMENDOZA_H_INCLUDED
#include <iostream>
#include "L2FuncionesMendoza.h"

using namespace std;

void MenuFunciones();


void MenuFunciones(){
    int opMenu;
    cout << "[1] LONGITUD STRING - .size(); - .length();" << endl;
    cout << "[2] LONGITUD CHAR   - strlen();" << endl;
    cout << "[3] CONCATENAR STRING - .append();" << endl;
    cout << "[4] CONCATENAR CHAR   - strcat();" << endl;
    cout << "[5] SALIR" << endl;
    cout << "SELECCIONA UNA OPCION: " << endl;
    cin >> opMenu;
    switch(opMenu){
        case 1:
            cout << "===============================================================" << endl;
            cout << "FUNCION -> .size(); .length(); //PARA EL TAMAÑO DE CARACTERES " << endl;
            cout << "===============================================================" << endl;
            Longitud_StringMendoza();
            break;
        case 2:
            cout << "===============================================================" << endl;
            cout << "FUNCION -> strlen(VAR) //PARA EL TAMAÑO DE CARACTERES (char) " << endl;
            cout << "===============================================================" << endl;
            Longitud_CharMendoza();
            break;
        case 3:
            Concatenar_StringMendoza();
            break;
        case 4:
            cout << "===============================================================" << endl;
            cout << "FUNCION -> strcat(VAR1, VAR2) //UNION DE CARACTERES (char) " << endl;
            cout << "===============================================================" << endl;
            Concatenar_CharMendoza();
            break;
        case 5:
            cout << "SALISTE" << endl;
            break;
        default:
            cout << "VUELVA AINTENTAR..OPCION INCORRECTA" << endl;

    }
}


#endif // L1ESTRUCTURAMENDOZA_H_INCLUDED
