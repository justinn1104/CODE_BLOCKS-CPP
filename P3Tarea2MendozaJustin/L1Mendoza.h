#ifndef L1MENDOZA_H_INCLUDED
#define L1MENDOZA_H_INCLUDED
#include <iostream>
#include <fstream>

using namespace std;
void imprimirPortadaMendoza();

struct PortadaMendoza{
    string UNI_Mendoza, nomApeMendoza, asignaturaMendoza, docenteMendoza;
    char NRC_Mendoza[100], fechaMendoza[100];
}Encabezado={"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE - SS","Nombres: Justin Mendoza","Asignatura: F. Programacion","Docente: Veronica Martinez","Nrc: 14366","Fecha: 20/02/24"};

void imprimirPortadaMendoza(){
    cout << "**********************************************" << endl;
    cout << Encabezado.UNI_Mendoza << endl;
    cout << Encabezado.nomApeMendoza << endl;
    cout << Encabezado.asignaturaMendoza << endl;
    cout << Encabezado.docenteMendoza << endl;
    cout << Encabezado.NRC_Mendoza << endl;
    cout << Encabezado.fechaMendoza << endl;
    cout << "**********************************************" << endl;
}
#endif // L1MENDOZA_H_INCLUDED
