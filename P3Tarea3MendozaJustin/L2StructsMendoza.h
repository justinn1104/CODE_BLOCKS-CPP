#ifndef L2STRUCTSMENDOZA_H_INCLUDED
#define L2STRUCTSMENDOZA_H_INCLUDED
#include <iostream>

using namespace std;

struct PortadaMendoza{
    string UNI_Mendoza, nomApeMendoza, asignaturaMendoza, docenteMendoza;
    char NRC_Mendoza[100], fechaMendoza[100];
}Encabezado={"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE - SS","Estudiante: Justin Mendoza ","Asignatura: F. Programacion","Docente: Veronica Martinez","Nrc: 14366","Fecha: 28/02/24"};
struct MenuLoginMendoza{
    string opLoginMendoza1, opLoginMendoza2, opLoginMendoza3, opLoginMendoza4;
}MenuLogin={"\t[1] INICIAR SESION","\t[2] REGISTRARSE","\t[3] REGISTRO DE USUARIOS","\t[4] SALIR"};
struct Clientes{
    string nomMendoza1, nomMendoza2, apeMendoza1, apeMendoza2;
}clientes;
struct DatosClientes{
    string ceduMendoza, fechaNaMendoza, numCuentaMendoza, userClienteMendoza, pwsClienteMendoza;
    double saldoTotal;
    struct Clientes infCliente;
}clienteIngresados[100];

#endif // L2STRUCTSMENDOZA_H_INCLUDED
