#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // DEFINIR - DECLARAR VARIABLES CON SU TIPO DE DATO
    string Nombre, Apellido, Curso, Asignatura, UNI;
    double Num1D, Num2D, Num3D, Num4D,Respt;
    int Num1E;
    // SALIDA Y ENTRADA DE DATOS ESTATICOS
    Nombre = "Justin"; Apellido = "Mendoza"; Curso = "16366"; Asignatura = "F. Programacion";
	UNI = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS"; Num4D = 35.6;
    cout << "****************************************************************************" << endl;
    cout << "\t==============================================" << endl;
    cout << "\t= "<<UNI<< " =" << endl;
    cout << "\t==============================================\n" << endl;
    cout << "\t    ======================================" << endl;
    cout << "\t    =  Nombre : " << Nombre << "                   =" << endl;
    cout << "\t    =  Apellido : " << Apellido << "                =" << endl;
    cout << "\t    =  Asignatura : " << Asignatura<< "      =" << endl;
    cout << "\t    =  Curso : " << Curso << "                     =" << endl;
    cout << "\t    ======================================" << endl;
    cout << "\n****************************************************************************\n" << endl;
    cout << "\t==============================================" << endl;
    cout << "\t=       Mi Programa con datos dinamicos      =" << endl;
    cout << "\t==============================================\n" << endl;
    cout << "Ingresa el valor de Numero Decimal 1: " << endl;
    cin >> Num1D;
    cout << "Ingresa el valor de Numero Decimal 2: " << endl;
    cin >> Num2D;
    cout << "Ingresa el valor de Numero Decimal 3: " << endl;
    cin >> Num3D;
    cout << "Ingresa el valor de Numero Entero 4: " << endl;
    cin >> Num1E;
    cout << "\n****************************************************************************\n\n" << endl;
    // ASIGNAR VALORES E PROCESO
    Respt = (((Num1D+Num2D)*M_PI)/(Num3D*Num1E))-Num4D;
    cout << "\t\t\t  (" << Num1D << "+" << Num2D << ")*" << M_PI << endl;
    cout << "\t\tX = ( _____________________________ )  -  " << Num4D << endl;
    cout << "\t\t\t\t" << Num3D << "*" << Num1E << "\n" << endl;
    cout << "\t\tX = " << Respt << endl;
    cout << "\n****************************************************************************\n\n" << endl;
    return 0;
}
