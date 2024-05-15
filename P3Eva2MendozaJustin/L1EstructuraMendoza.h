#ifndef L1ESTRUCTURAMENDOZA_H_INCLUDED
#define L1ESTRUCTURAMENDOZA_H_INCLUDED
#include <iostream>
#include <locale.h>
#include "L2FuncionesUserPwsMendoza.h"
using namespace std;
void Caratula();
void MenuFunciones();

void Caratula(){
    string portada1[8]={"UNIDAD : ","Integrantes : ","Carrera : ","Asignatura : ","Docente : ","Tema : ","Fecha : ","Periodo : "};
    string portada2[8]={"Univesidad de las fuerzas armadad espe-ss","Justin Mendoza","Ingenieria de tecnologias de la informacion","Fundamentos de Programcion","Ing. Veronica Martinez","P3 EVA 1","14-02-24","202351 - NOV23 - MAR24"};
	cout << "\n============================================================" << endl;
    for(int i=0; i<8; i++){
        cout << portada1[i] << portada2[i] << endl;
    }
    cout << "============================================================\n" << endl;
    cout << "\n\t=================" << endl;
    cout << "\t" << UNIVERSIDAD << endl;
    cout << "\t=================" << endl;
    ResgistroClienteMendoza();
    //MenuFunciones();
}
void MenuFunciones(){
    setlocale(LC_ALL,"");
    int opcMenuFuncionMendoza;
    cout << "\n\t=================" << endl;
    cout << "\t" << endl;
    cout << "\t=================" << endl;
    cout << "\n============================================================" << endl;
    cout << "[1] REGISTRAR CLIENTE" << endl;
    cout << "[2] INICIAR " << endl;
    cout << "[8] salir" << endl;
    cout << "============================================================\n" << endl;
    cout << "Seleciona una opcion: " << endl;
    cin >> opcMenuFuncionMendoza;
    switch(opcMenuFuncionMendoza){
        case 1:
            ResgistroClienteMendoza();
            MenuFunciones();
            break;
        case 2:

            MenuFunciones();
            break;
        case 3:
            cout << "SALISTE" << endl;
            break;
        default:
            cout << "VUELVA AINTENTAR..OPCION INCORRECTA" << endl;
            MenuFunciones();
    }
}


#endif // L1ESTRUCTURAMENDOZA_H_INCLUDED
