#ifndef L1ESTRUCTURAMENDOZA_H_INCLUDED
#define L1ESTRUCTURAMENDOZA_H_INCLUDED
#include <iostream>
#include <locale.h>
#include "L2FuncionesCadenasMendoza.h"
using namespace std;
void Caratula();
void MenuFunciones();
void Caratula(){
    string portada1[8]={"UNIDAD : ","Integrantes : ","Carrera : ","Asignatura : ","Docente : ","Tema : ","Fecha : ","Periodo : "};
    string portada2[8]={"Univesidad de las fuerzas armadad espe-ss","Justin Mendoza","Ingenieria de tecnologias de la informacion","Fundamentos de Programcion","Ing. Veronica Martinez","P3 Tarea 1","14-02-24","202351 - NOV23 - MAR24"};
	cout << "\n============================================================" << endl;
    for(int i=0; i<8; i++){
        cout << portada1[i] << portada2[i] << endl;
    }
    cout << "============================================================\n" << endl;
    MenuFunciones();
}
void MenuFunciones(){
    setlocale(LC_ALL,"");
    int opcMenuFuncionMendoza;
    cout << "\n============================================================" << endl;
    cout << "[1] Longitud - .size(); - .length(); - strlen();" << endl;
    cout << "[2] concatenación - .append(); - strcat();" << endl;
    cout << "[3] Comparación - .compare(); - strcmp();" << endl;
    cout << "[4] Conversión - atoi(); - atof(); - stoi() - stof()" << endl;
    cout << "[5] Inversion - reverse(VAR1.BEGIN(),VAR1.END()); - STRREV(VAR1);" << endl;
    cout << "[6] Sub cadenas - VAR1.substr(#INICIO, #FIN); - strncpy(VAR1,&VAR2[#INICIO],#FIN)" << endl;
    cout << "[7] Busqueda - VAR1.find(VAR2); - VAR1.rfind(VAR2); - strstr(VAR1,VAR2);" << endl;
    cout << "[8] salir" << endl;
    cout << "============================================================\n" << endl;
    cout << "Seleciona una opcion: " << endl;
    cin >> opcMenuFuncionMendoza;
    switch(opcMenuFuncionMendoza){
        case 1:
            Longitud_Mendoza();
            MenuFunciones();
            break;
        case 2:
            Concatenar_Mendoza();
            MenuFunciones();
            break;
        case 3:
            ComparacionMendoza();
            MenuFunciones();
            break;
        case 4:
            ConversionMendoza();
            MenuFunciones();
            break;
        case 5:
            InversionMendoza();
            MenuFunciones();
            break;
        case 6:
            SubCadenasMendoza();
            MenuFunciones();
            break;
        case 7:
            BuscarCadenasMendoza();
            MenuFunciones();
            break;
        case 8:
            cout << "SALISTE" << endl;
            break;
        default:
            cout << "VUELVA AINTENTAR..OPCION INCORRECTA" << endl;
            MenuFunciones();
    }
}
#endif // L1ESTRUCTURAMENDOZA_H_INCLUDED
