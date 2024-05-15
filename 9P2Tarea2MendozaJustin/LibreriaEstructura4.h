/*
EJERCICIOS 11, 12, 13, 14 DEL CAPITULO 7 By: Torres Lisseth
*/
#ifndef LIBRERIAESTRUCTURA4_H_INCLUDED
#define LIBRERIAESTRUCTURA4_H_INCLUDED
#include <iostream>
#include <cmath>
#include "LibreriaEstructura1.h"

using namespace std;

void Menu();
void Ejercicio11();
void Ejercicio12();
void Ejercicio13();
void Ejercicio14();
float DivisionEntera_Ejercicio11(float divisor, float dividendo);
float divisor, dividendo;
void ValidacionFecha_Ejercicio12(int anio, int mes, int dia);
int anio, mes, dia;
void TransformarRomano_Ejercicio13(int numero, int unidad, int decena, int centena, int millar);
int numero, unidad, decena, centena, millar;
int FactorialExponende_Ejercicio14(int opcion);
int opcion;

void Ejercicio11 () {
    float h, l;
	cout<<"Realice un procedimiento que obtenga la division entera y el resto de la misma utilizando unicamente los operadores suma y resta"<<endl;
	cout<<"Ingrese el dividendo"<<endl;
	cin>> h;
	cout<<"Ingrese el divisor"<<endl;
	cin>> l;
	while (l==0 || l<0) {
        if(l==0){
            cout<<"Error no hay division para cero, ingrese nuevamente"<<endl;
        }else{
            cout<<"Ingresa un numero positivo, ingrese nuevamente"<<endl;
        }
        cin>>l;
	}
	DivisionEntera_Ejercicio11(l, h);
}
float DivisionEntera_Ejercicio11(float divisor, float dividendo) {
    float cociente;
	cociente=0;
	while (dividendo>=divisor) {
		dividendo=dividendo-divisor;
		cociente=cociente+1;
	}
	cout<<"El resto es: "<<dividendo<<endl;
	cout<<"El cociente de la division es: "<<cociente<<endl;
    return cociente;
}

void Ejercicio12 () {
    int dia, mes, anio;
	cout<<"Escriba una funcion que permita deducir si una fecha leida del teclado es valida"<<endl;
	cout<<"Ingrese el dia"<<endl;
	cin>> dia;
	while (dia<=0) {
        cout<<"No existen dias negativos"<<endl;
        cin>>dia;
	}
	cout<<"Ingrese el mes"<<endl;
	cin>> mes;
	while (mes<=0) {
        cout<<"No existen meses negativos"<<endl;
        cin>>mes;
	}
	cout<<"Ingrese el año"<<endl;
	cin>> anio;
	while (anio<=0) {
        cout<<"No existen años negativos"<<endl;
        cin>>anio;
	}
	ValidacionFecha_Ejercicio12(anio, mes, dia);
}

void ValidacionFecha_Ejercicio12(int anio, int mes, int dia){
	switch (mes) {
    case 1:
        if (dia>=1 && dia<=31) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 2:
        if (dia>=1 && dia<=29) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 3:
        if (dia>=1 && dia<=31) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 4:
        if (dia>=1 && dia<=30) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 5:
        if (dia>=1 && dia<=31) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 6:
        if (dia>=1 && dia<=30) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 7:
        if (dia>=1 && dia<=31) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 8:
        if (dia>=1 && dia<=31) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 9:
        if (dia>=1 && dia<=30) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 10:
        if (dia>=1 && dia<=31) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 11:
        if (dia>=1 && dia<=30) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    case 12:
        if (dia>=1 && dia<=31) {
				cout<< "La fecha ingresada es valida: " <<dia<<"/"<<mes<<"/"<<anio<<endl;
			}else{
			    cout<<"La fecha ingresada es invalida"<<endl;
			}
        break;
    default:
        cout<<"La fecha ingresada es invalida"<<endl;
        break;
	}
}
void Ejercicio13 () {
    int num, uni, dece, cent, mill;
	cout<<"Diseñe un algoritmo que transforme un numero introducido por teclado en notacion decimal a notacion romana. El numero sera entero positivo y no excedera de 3000"<<endl;
	cout<<"Ingrese un numero entero"<<endl;
	cin>>num;
	while (num<=0 || num>3000) {
        cout<<"Ingrese un numero entero"<<endl;
        cin>>num;
	}
	TransformarRomano_Ejercicio13(num, uni, dece, cent, mill);
}
void TransformarRomano_Ejercicio13(int numero, int unidad, int decena, int centena, int millar){
	millar=(numero/1000)%10;
	centena=(numero/100)%10;
	decena=(numero/10)%10;
	unidad=(numero/1)%10;
	switch (millar) {
		case 1: cout<<"M";
		break;
		case 2: cout<<"MM";
		break;
		case 3: cout<<"MMM";
		break;
	}
	switch (centena) {
		case 1: cout<<"C";
		break;
		case 2: cout<<"CC";
		break;
		case 3: cout<<"CCC";
		break;
		case 4: cout<<"CD";
		break;
		case 5: cout<<"D";
		break;
		case 6: cout<<"DC";
		break;
		case 7: cout<<"DCC";
		break;
		case 8: cout<<"DCCC";
		break;
		case 9: cout<<"CM";
		break;
	}
	switch (decena) {
		case 1: cout<<"X";
		break;
		case 2: cout<<"XX";
		break;
		case 3: cout<<"XXX";
		break;
		case 4: cout<<"XL";
		break;
		case 5: cout<<"L";
		break;
		case 6: cout<<"LX";
		break;
		case 7: cout<<"LXX";
		break;
		case 8: cout<<"LXXX";
		break;
		case 9: cout<<"XC";
		break;
	}
	switch (unidad) {
		case 1: cout<<"I";
		break;
		case 2: cout<<"II";
		break;
		case 3: cout<<"III";
		break;
		case 4: cout<<"IV";
		break;
		case 5: cout<<"V";
		break;
		case 6: cout<<"VI";
		break;
		case 7: cout<<"VII";
		break;
		case 8: cout<<"VIII";
		break;
		case 9: cout<<"IX";
		break;
	}
	cout<<" "<<endl;
}
void Ejercicio14 () {
    int op;
	cout<<"Escriba el algoritmo de una funcion recursiva que: a)calcule el factorial; b)la potencia de un numero entero positivo"<<endl;
	cout<<"1.Calcular Factorial"<<endl;
	cout<<"2.Calcular la potencia de un numero positivo"<<endl;
	cout<<"3.Salir"<<endl;
	cin>> op;
	FactorialExponende_Ejercicio14(op);
}

int FactorialExponende_Ejercicio14(int opcion) {
	switch (opcion) {
		case 1:
			int p, factorial, s;
			cout<<"Ingrese un numero entero"<<endl;
			cin>> p;
			while (p<0) {
				cout<<"Error, ingrese solo numeros positivos"<<endl;
				cin>> p;
			}
			if (p==0 || p==1) {
				cout<<"El "<<p<<"! es: "<<1<<endl;
			}else{
				factorial=1;
				for (int s=1; s<=p; s++) {
					factorial=factorial*s;
			}
				cout<<"El "<<p<<"! es: "<<factorial<<endl;
			}
			Ejercicio14();
			break;
		case 2:
			int base, expo, resultado;
			cout<<"Ingrese la base: "<<endl;
			cin>> base;
			cout<<"Ingrese el exponente: "<<endl;
			cin>> expo;
			if (expo==0) {
				resultado=1;
				cout<<"El resultado es: "<<resultado<<endl;
			}else{
				resultado = pow(base,expo);
				cout<<"El resultado es: "<<resultado<<endl;
			}
			Ejercicio14();
			break;
		case 3:
			cout<<"Ha salido con exito"<<endl;
			Menu();
			break;
		default:
			cout<<"Ingreso invalido, escoja una opcion del (1-3)"<<endl;
			Ejercicio14();
			break;
	}
}
#endif // LIBRERIAESTRUCTURA4_H_INCLUDED
