/*
EJERCICIOS 6, 7, 8, 9 , 10 DEL CAPITULO 7 By: Mendoza Justin
*/
#ifndef LIBRERIAESTRUCTURA3_H_INCLUDED
#define LIBRERIAESTRUCTURA3_H_INCLUDED
#include <iostream>
#include <cmath>

using namespace std;
void Cap7_6Mendoza();
string FormatoFecha_Cap7_6Mendoza(int dd, int mm, int aa);
void Cap7_7Mendoza();
void conversionCoor_Cap7_7Mendoza(float r, float angTeta);
void Cap7_8Mendoza();
double Salario_Cap7_8Mendoza(double horasTrabajadas, double salarioHora);
void Cap7_9Mendoza();
bool Digito_Cap7_9Mendoza(int digito );
void Cap7_10Mendoza();
float ValorAbs_Cap7_10Mendoza(float numAbs);

int digito, dd, mm, aa, Num1;
float numAbs, r, angTeta;
double horasTrabajadas, salarioHora;

void Cap7_6Mendoza(){
    int dia, mes, anio;
    cout << "\nDiseñe un procedimiento que acepte un numero de mes, un nomero de" << endl;
    cout << "dia y un numero de año y los visualice en formato dd/mm/aa. Por ejemplo, los valores 19,09,1987" << endl;
    cout << "se visualizan como  19/9/87\n" << endl;
    cout << "Ingresa un año: [1980 al 2024]" << endl;
    cin >> anio;
    while(anio<1980 || anio>2024){
        cout << "AÑO INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa un año: [1980 al 2024]" << endl;
        cin >> anio;
    }
    cout << "Ingresa un mes: [1 al 12]" << endl;
    cin >> mes;
    while(mes<1 || mes>12){
        cout << "MES INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa un mes: [1 al 12]" << endl;
        cin >> mes;
    }
    cout << "Ingresa un dia: [1 al 31]" << endl;
    cin >> dia;
    while(dia<1 || dia>31){
        cout << "Ingresa un dia: [1 al 31]" << endl;
        cin >> dia;
    }
    FormatoFecha_Cap7_6Mendoza(dia, mes, anio);
}
string FormatoFecha_Cap7_6Mendoza(int dd, int mm, int aa){
    string anio, anio2, mes, dia, formaFecha;
    /*
    Diseñe un procedimiento que acepte un numero de mes, un nomero de
    dia y un numero de año y los visualice en formato dd/mm/aa. Por ejemplo, los valores 19,09,1987
    se visualizan como  19/9/87
    */
    anio = to_string(aa);
    mes = to_string(mm);
    dia = to_string(dd);
    formaFecha.append(dia);
    formaFecha.append("/");
    formaFecha.append(mes);
    formaFecha.append("/");
    anio2 = anio.substr(2,3);
    formaFecha.append(anio2);
    cout << "   DATO DE FECHA" << endl;
    cout << "Dia: " << dd << endl;
    cout << "Mes: " << mm << endl;
    cout << "Año: " << aa << endl;
    cout << "FORMATO DE LA FECHA INGRESADA: "<< formaFecha << endl;
    return formaFecha;
}
void Cap7_7Mendoza(){
    float radio, angulo;
    cout << "\nRealice un procedimiento que efectue la conversion de coordenadas polares (r,O) a" << endl;
    cout << "coordenadas cartesianas (x,y) x = r.cos(O)  y = r.sen(O)\n" << endl;
    cout << "Ingresa las coordenadas polares : [r,O]" << endl;
    cout << "Ingresa la componente r: [R>0]" << endl;
    cin >> radio;
    while(radio<1){
        cout << "COMPONENTE INGRESADA ERRONEA " << endl;
        cout << "Ingresa la componente r: [R>0]" << endl;
        cin >> radio;
    }
    cout << "Ingresa la componente O: [0°< O <360°]" << endl;
    cin >> angulo;
    while(angulo<0 || angulo>360){
        cout << "COMPONENTE INGRESADA ERRONEA " << endl;
        cout << "Ingresa la componente O: [0°< O <360°]" << endl;
        cin >> angulo;
    }
    conversionCoor_Cap7_7Mendoza(radio, angulo);
}
void conversionCoor_Cap7_7Mendoza(float r, float angTeta){
    float x, y;
    /*
    Realice un procedimiento que efectue la conversion de coordenadas polares (r,O) a coordenadas cartesianas (x,y)
    x = r.cos(O)
    y = r.sen(O)
    */
    cout << "Las coordenadas ingresadas son pol(" << r << "," << angTeta << ")" << endl;
    cout << "converti coordenadas polares a cartesianas  POL(r,O) --> REC(x,y)" << endl;
    cout << "Formolas: x = r.cos(O)    y = r.sen(O)" << endl;
    x=r*(cos(angTeta)); y=r*(sin(angTeta));
    cout << "x = " << r << "* cos(" << angTeta << ")" << endl;
    cout << "x = " << r << "*" << cos(angTeta) << endl;
    cout << "x = " << x << endl;
    cout << "y = " << r << "* sen(" << angTeta << ")" << endl;
    cout << "y = " << r << "*" << sin(angTeta) << endl;
    cout << "y = " << y << endl;
    cout << "La coordenada cartesiana es REC(" << x << "," << y << ")" << endl;
}
void Cap7_8Mendoza(){
    double horasTrab, salarioHor, salarioTotal;
    cout << "Ingrese el número de horas trabajadas: [0 al 100]" << endl;
    cin >> horasTrab;
    while(horasTrab<0 || horasTrab>100){
        cout << "HORAS DE TRABJO NO VALIDA.. VUELVE A INGRESAR: [0 al 100]" << endl;
        cout << "Ingrese el número de horas trabajadas: [0 al 100]" << endl;
        cin >> horasTrab;
    }
    cout << "Ingrese el salario por hora: [$ 1 al 150]" << endl;
    cin >> salarioHor;
    while(salarioHor<1 || salarioHor> 150){
        cout << "SALARIO POR HORA DE TRABJO NO VALIDO.. VUELVE A INGRESAR: [$ 1 al 150]" << endl;
        cout << "Ingrese el salario por hora: [$ 1 al 150]" << endl;
        cin >> salarioHor;
    }
    salarioTotal = Salario_Cap7_8Mendoza(horasTrab, salarioHor);
    cout << "El salario total es: $" << salarioTotal << endl;
}
double Salario_Cap7_8Mendoza(double horasTrabajadas, double salarioHora){
    /*
    Escriba una función salario que calcule los salarios de un trabajador para un numero dado de horas trabajadas y un salario hora.
    Las horas que superen las 40 horas semanales se pagaran como extras con un salario hora 1.5 veces el salario ordinario.
    */
    double HORASNORMALES, SALARIOEXTRA, salarioFinal, salarioOrdinario, horasExtra, salarioExtra;
    HORASNORMALES=40.0; SALARIOEXTRA=1.5;
    if(horasTrabajadas<=HORASNORMALES){
        salarioFinal = horasTrabajadas*salarioHora;
    }else{
        salarioOrdinario=HORASNORMALES*salarioHora;
        horasExtra=horasTrabajadas-HORASNORMALES;
        salarioExtra= horasExtra*SALARIOEXTRA;
        salarioFinal=salarioOrdinario+salarioExtra;
    }
    return salarioFinal;
}
void Cap7_9Mendoza(){
    cout << "\nEscriba una funcion booleana Digito que determine si un caracter es uno de los digito 0 al 9\n" << endl;
    cout << "Ingresa un digito numerico: [-99 al 99]" << endl;
    cin >> Num1;
    while(Num1<=-100 || Num1>=100){
        cout << "Digito ingresado erroneo..vuelves a ingresar:  [-99 al 99]" << endl;
        cout << "Ingresa un digito numerico:  [-99 al 99]" << endl;
        cin >> Num1;
    }
    Digito_Cap7_9Mendoza(Num1);
}
bool Digito_Cap7_9Mendoza(int digito ){
    /*
    Escriba una funcion booleana Digito que determine si un caracter es uno de los digito 0 al 9
    */
    bool Bandera;
    Bandera=false;
    while(Bandera==false){
        if(digito>=0 && digito<=9){
            cout << "El caracter ingresado es: " << digito << endl;
            cout << "Si se encuentra en el rango de [0 al 9]" << endl;
            cout << "[0] <----- ["<< digito <<"] -----> [9]" << endl;
            Bandera=true;
        }else{
            cout << "El caracter ingresado es: " << digito << endl;
            cout << "No se encuentra en el rango de" << endl;
            cout << "[0] <-----> [9]" << endl;
            Bandera=true;
        }
    }
    return Bandera;
}
void Cap7_10Mendoza(){
    cout << "\nDiseñe una funcion que permita devolver el valor absoluto de un numero\n" << endl;
    cout << "Ingresa un digito numerico:  [-99 al 99]" << endl;
    cin >> Num1;
    while(Num1<=-100 || Num1>=99){
        cout << "Digito ingresado erroneo..vuelves a ingresar:  [-99 al 99]" << endl;
        cout << "Ingresa un digito numerico:  [-99 al 99]" << endl;
        cin >> Num1;
    }
    ValorAbs_Cap7_10Mendoza(Num1);
}
float ValorAbs_Cap7_10Mendoza(float numAbs){
    /*
    Diseñe una funcion que permita devolver el valor absoluto de un numero
    */
    float x;
    if(numAbs<0){
        x = numAbs *(-1);
        cout << "El valor absoluto es: " << endl;
        cout << numAbs << " = " << x << endl;
        return x;
    }else{
        cout << "El valor absoluto es: " << endl;
        cout << numAbs << " = " << numAbs << endl;
        return numAbs;
    }

}
#endif // LIBRERIAESTRUCTURA3_H_INCLUDED
