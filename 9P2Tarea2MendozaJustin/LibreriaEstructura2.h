/*
EJERCICIOS 1, 2, 3, 4,5 DEL CAPITULO 7 By: Troya Emily
*/
#ifndef LIBRERIAESTRUCTURA2_H_INCLUDED
#define LIBRERIAESTRUCTURA2_H_INCLUDED
#include <iostream>
using namespace std;
int encontrarMayor(int num1, int num2);
double calcularPotencia(double base, int exponente);
void FactorialEjercico2();
int calcularFactorial(int n);
int mcdCuatroNumeros(int num1, int num2, int num3, int num4);
int num1, num2, exponente, num3, num4;
double base;
int encontrarMayor(int numero1, int numero2) {
    return (numero1 > numero2) ? numero1 : numero2;
}
double calcularMedia(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mcdCuatroNumeros(int num1, int num2, int num3, int num4) {
    int mcd1 = calcularMCD(num1, num2);
    int mcd2 = calcularMCD(num3, num4);
    return calcularMCD(mcd1, mcd2);
}
void mediaDeTresNumeros() {
    double numero1, numero2, numero3;
    cout<<"---------------------------------------"<<endl;
    cout<<"DISEÑE UNA FUNCION QUE CALCULE LA MEDIA DE TRES NUMEROS LEIDOS DEL TECLADO Y PONER UN EJEMPLO DE SU APLICACION"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout << "Ingrese el primer numero: "<<endl;
    cin >> numero1;
    while (numero1 < 0) {
        cout << "Ingrese nuevamente: "<<endl;
        cin >> numero1;
    }
    cout << "Ingrese el segundo numero: "<<endl;
    cin >> numero2;
    while (numero2 < 0) {
        cout << "Ingrese nuevamente: "<<endl;
        cin >> numero2;
    }
    cout << "Ingrese el tercer numero: "<<endl;
    cin >> numero3;
    while (numero3 < 0) {
        cout << "Ingrese nuevamente: "<<endl;
        cin >> numero3;
    }
    double media = calcularMedia(numero1, numero2, numero3);
    cout << "La media de los tres números es: " << media << endl;
}
void FactorialEjercico2(){
    int numero;
    cout<<"---------------------------------------"<<endl;
    cout<<"Diseñe la funcion factorial que calcule el factorial de un numero entero en el rango 100 a 1000000"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout << "Ingrese un numero en el rango 100 a 1000000: ";
    cin >> numero;
    if (numero < 100 || numero > 1000000) {
        cout << "Numero fuera del rango especificado." << endl;
        cout << "Ingrese un numero en el rango 100 a 1000000: ";
        cin >> numero;
    }
    calcularFactorial(numero);
}
int calcularFactorial(int n) {
    int factorial, s;
    if (n==0 || n==1) {
        cout<<"El "<<n<<"! es: "<<1<<endl;
    }else{
        factorial=1;
        for (int s=1; s<=n; s++) {
            factorial=factorial*s;
    }
        cout<<"El "<<n<<"! es: "<<factorial<<endl;
    }
    cout << "El factorial de " << n << " es: " << factorial << endl;
    return factorial;
}
int mcdCuatroNumeros() {
    int numero1, numero2, numero3, numero4;
    cout<<"----------------------------"<<endl;
    cout<<"Diseñe el algoritmo para calcular el maximo comun divisor de cuatro numeros"<<endl;
    cout<<"basados en un subalgoritmo funcion mcd (maximo comun divisor de dos numeros)"<<endl;
    cout<<"----------------------------"<<endl;
    cout << "Ingrese el primer numero: "<<endl;
    cin >> numero1;
    while(numero1<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>numero1;
    }
    cout << "Ingrese el segundo numero: "<<endl;
    cin >> numero2;
    while(numero2<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>numero2;
    }
    cout << "Ingrese el tercer numero: "<<endl;
    cin >> numero3;
    while(numero3<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>numero3;
    }
    cout << "Ingrese el cuarto numero: "<<endl;
    cin >> numero4;
    while(numero4<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>numero4;
    }
    int resultadoMCD = mcdCuatroNumeros(numero1, numero2, numero3, numero4);
    cout << "El maximo comun divisor de los cuatro numeros es: " << resultadoMCD << endl;
    return 0;
}
int encontrarMayor() {
    int numero1, numero2;
    cout<<"------------------------------"<<endl;
    cout<<"Diseñe una funcion que encuentre el mayor de dos numeros enteros"<<endl;
    cout<<"------------------------------"<<endl;
    cout << "Ingrese el primer numero: "<<endl;
    cin >> numero1;
    while(numero1<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>numero1;
    }
    cout << "Ingrese el segundo numero: "<<endl;
    cin >> numero2;
    while(numero2<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>numero2;
    }
    int mayor = encontrarMayor(numero1, numero2);
    cout << "El mayor de los dos numeros es: " << mayor << endl;
    return mayor;
}
double calcularPotencia(double base, int exponente) {
    double resultado = 1.0;
    for (int i = 0; i < abs(exponente); ++i) {
        resultado *= base;
    }
    return (exponente < 0) ? 1.0 / resultado : resultado;
}
double calcularPotencia() {
    double base;
    int exponente;
    cout<<"------------------------------"<<endl;
    cout<<"Diseñe una funcion que calcule xn para x , variable real y n variable entera"<<endl;
    cout<<"------------------------------"<<endl;
    cout << "Ingrese la base (variable real): "<<endl;
    cin >> base;
    while(base<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>base;
    }
    cout << "Ingrese el exponente (variable entera): "<<endl;
    cin >> exponente;
    while(exponente<0){
        cout<<"Ingrese nuevamente:"<<endl;
        cin>>exponente;
    }
    double resultado = calcularPotencia(base, exponente);
    cout << "El resultado de la potencia es: " << resultado << endl;
    return resultado;
}
#endif // LIBRERIAESTRUCTURA2_H_INCLUDED
