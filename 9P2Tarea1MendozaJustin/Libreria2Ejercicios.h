#ifndef LIBRERIA2EJERCICIOS_H_INCLUDED
#define LIBRERIA2EJERCICIOS_H_INCLUDED

#include <iostream>
#include <cmath>
using namespace std;

int Cap3_9Mendoza(int n);
void Cap4_7Mendoza();
void Cap5_3Mendoza();
void Cap6_8Mendoza();
int n;

int Cap3_9Mendoza(int n){
    int i, contadorPrimo;
    contadorPrimo=0;
    for(i=1; i<= n ; ++i){
        if(n % i == 0){
            contadorPrimo=contadorPrimo+1;
        }
    }
    if(contadorPrimo == 2 || n == 1){
        cout << "El numero " << n << " es primo." << endl;
    }else{
        cout << "El numero " << n << " no es primo." << endl;
    }
    return n;
}
void Cap4_7Mendoza(){
    double a, b, c, d, varx, vary, x1, x2, x3, x4;
	int opcap4_7;
	// Escriba las siguientes expresiones algoritmicas como expresiones algebraicas
	// a) b ^ 2 - 4 * a * c
	// b) 3 * X ^ 4 - 5 * X ^ 3 X 12 - 17
	// c) (b + d) / (c + 4)
	// d) (x ^ 2 + y ^ 2) ^ (1/2)
	x1 = 0; x2 = 0; x3 = 0; x4 = 0;
	cout << "Escriba las siguientes expresiones algoritmicas como expresiones algebraicas" << endl;
	cout << "a) b ^ 2 - 4 * a * c" << endl;
	cout << "b) 3 * X ^ 4 - 5 * X ^ 3 X 12 - 17" << endl;
	cout << "c) (b + d) / (c + 4)" << endl;
	cout << "d) (x ^ 2 + y ^ 2) ^ (1/2)" << endl;
	cout << "" << endl;
	do {
		cout << "                ======================================" << endl;
		cout << "                =  [1] b^2 - 4*a*c                   =" << endl;
		cout << "                =  [2] 3 * X^4 - 5 * X^3X12 - 17     =" << endl;
		cout << "                =  [3] (b + d)/(c + 4)               =" << endl;
		cout << "                =  [4] (x^2 + y^2)^(1/2)             =" << endl;
		cout << "                =  [5] SALIR                         =" << endl;
		cout << "                ======================================" << endl;
		cout << "" << endl;
		cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
		cin >> opcap4_7;
		switch (opcap4_7) {
            case 1:
                // b ^ 2 - 4 * a * c
                cout << "x1 = b ^ 2 - 4 * a * c" << endl;
                cout << "Ingresa el valor de a: [ -100 - 100]" << endl;
                cin >> a;
                while (a<=-100 || a>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de a: [ -100 - 100]" << endl;
                    cin >> a;
                }
                cout << "Ingresa el valor de b: [ -100 - 100]" << endl;
                cin >> b;
                while (b<=-100 || b>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de b: [ -100 - 100]" << endl;
                    cin >> b;
                }
                cout << "Ingresa el valor de c: [ -100 - 100]" << endl;
                cin >> c;
                while (c<=-100 || c>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de c: [ -100 - 100]" << endl;
                    cin >> c;
                }
                x1 = pow(b, 2)-(4*a)*c;
                cout << "a= " << a << "; b= " << b << "; c= " << c << endl;
                cout << "x1 = b^2 - 4*a*c" << endl;
                cout << "x1 = " << b << "^2 - 4*" << a << "*" << c << endl;
                cout << "x1 = " << pow(b, 2) << " - (" << (4*a) << "*" << c << ")" << endl;
                cout << "x1 = " << pow(b, 2) << " - (" << (4*a*c) << ")" << endl;
                cout << "x1 = " << x1 << endl;
                break;
            case 2:
                // 3 * X ^ 4 - 5 * X ^ 3 + X 12 - 17
                cout << "x2 = 3 * X^4 - 5 * X^3 + X12 - 17" << endl;
                cout << "Ingresa el valor de X: [ -100 - 100]" << endl;
                cin >> varx;
                while (varx<=-100 || varx>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de x: [ -100 - 100]" << endl;
                    cin >> varx;
                }
                x2 = 3*(pow(varx, 4))-5*(pow(varx, 3))+(varx*12)-17;
                cout << "x2 = 3 * X^4 - 5 * X^3 + X12 - 17" << endl;
                cout << "x2 = (3*(" << varx << "^4)) - (5*(" << varx << "^3)) + ((" << varx << ")(12)) - 17" << endl;
                cout << "x2 = (3*" << pow(varx, 4) << ") - (5*" << pow(varx, 3) << ") + (" << (varx*12) << ") - 17" << endl;
                cout << "x2 = " << 3*pow(varx, 4) << " - (" << 5*pow(varx, 3) << ") + (" << ((varx*12)-17) << ")" << endl;
                cout << "x2 = " << 3*pow(varx, 4)-(5*pow(varx, 3)) << " + (" << varx*12-17 << ")" << endl;
                cout << "x2 = " << x2 << endl;
                break;
            case 3:
                // c) (b + d) / (c + 4)
                cout << "x3 = (b + d) / (c + 4)" << endl;
                cout << "Ingresa el valor de b: [ -100 - 100]" << endl;
                cin >> b;
                while (b<=-100 || b>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de b: [ -100 - 100]" << endl;
                    cin >> b;
                }
                cout << "Ingresa el valor de d: [ -100 - 100]" << endl;
                cin >> d;
                while (d<=-100 || d>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de d: [ -100 - 100]" << endl;
                    cin >> d;
                }
                cout << "Ingresa el valor de c: [ c!=-4 ;-100 - 100]" << endl;
                cin >> c;
                while (c<=-100 || c>=100 || c==-4) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [ c!=-4 ;-100 - 100]" << endl;
                    cout << "Ingresa el valor de c: [ c!=-4 ;-100 - 100]" << endl;
                    cin >> c;
                }
                x3 = (b+d)/(c+4);
                cout << "x3 = (" << b << " + " << d << ") / (" << c << " + 4)" << endl;
                cout << "x3 = (" << b+d << ") / (" << c+4 << ")" << endl;
                cout << "x3 = " << x3 << endl;
                break;
            case 4:
                // d) (x ^ 2 + y ^ 2) ^ (1/2)
                cout << "x4 = (x ^ 2 + y ^ 2) ^ (1/2)" << endl;
                cout << "Ingresa el valor de x: [-100 - 100]" << endl;
                cin >> varx;
                while (varx<=-100 || varx>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de x: [-100 - 100]" << endl;
                    cin >> varx;
                }
                cout << "Ingresa el valor de y: [-100 - 100]" << endl;
                cin >> vary;
                while (vary<=-100 || vary>=100) {
                    cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 100]" << endl;
                    cout << "Ingresa el valor de y: [-100 - 100]" << endl;
                    cin >> vary;
                }
                double expMendoza;
                expMendoza = 0.5;
                x4 = pow((pow(varx, 2)+ pow(vary, 2)), expMendoza);
                cout << "x4 = (" << varx << "^2 + " << vary << "^2) ^ (1/2)" << endl;
                cout << "x4 = (" << pow(varx, 2) << " + " << pow(vary, 2) << ") ^ (" << expMendoza << ")" << endl;
                cout << "x4 = (" << pow(varx, 2)+pow(vary, 2) << ")^" << expMendoza << endl;
                cout << "x4 = " << x4 << endl;
                break;
            case 5:
                cout << "SALISTE...DE LA OPCION..GRACIA." << endl;
                break;
            default:
                cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [1 - 5]" << endl;
                break;
		}
	} while (opcap4_7!=5);
}

void Cap5_3Mendoza(){
    int num1mendoza, num2mendoza, num3mendoza;
    bool num1central, num1central1, num1igual, num1igual1, num1mayor, num1mayor1, num1menor, num1menor1;
	bool num2central, num2central1, num2igual, num2igual1, num2mayor, num2mayor1, num2menor, num2menor1;
	bool num3central, num3central1, num3igual, num3igual1, num3mayor, num3mayor1, num3menor, num3menor1;
	cout << "Dado tres numeros, deducir cual es el  central" << endl;
	cout << "" << endl;
	cout << "INGRESA EL NUMERO 1 ENTERO: [-100 - 100]" << endl;
	cin >> num1mendoza;
	while (num1mendoza<=-101 || num1mendoza>=101) {
		cout << "INGRESA EL NUMERO 1 ENTERO: [-100 - 100]" << endl;
		cin >> num1mendoza;
	}
	cout << "INGRESA EL NUMERO 2 ENTERO: [-100 - 100]" << endl;
	cin >> num2mendoza;
	while (num2mendoza<=-101 || num2mendoza>=101) {
		cout << "INGRESA EL NUMERO 2 ENTERO: [-100 - 100]" << endl;
		cin >> num2mendoza;
	}
	while (num2mendoza==num1mendoza) {
		cout << "El NUMERO YA FUE INGRESADO INGRESAR UNO DEFERENTE.." << endl;
		cout << "INGRESA EL NUMERO 2 ENTERO: [-100 - 100]" << endl;
		cin >> num2mendoza;
		while (num2mendoza<=-101 || num2mendoza>=101) {
			cout << "INGRESA EL NUMERO 2 ENTERO: [-100 - 100]" << endl;
			cin >> num2mendoza;
		}
	}
	cout << "INGRESA EL NUMERO 3 ENTERO: [-100 - 100]" << endl;
	cin >> num3mendoza;
	while (num3mendoza<=-101 || num3mendoza>=101) {
		cout << "INGRESA EL NUMERO 3 ENTERO: [-100 - 100]" << endl;
		cin >> num3mendoza;
	}
	while (num3mendoza==num1mendoza || num3mendoza==num2mendoza) {
		cout << "El NUMERO YA FUE INGRESADO INGRESAR UNO DEFERENTE.." << endl;
		cout << "INGRESA EL NUMERO 3 ENTERO: [-100 - 100]" << endl;
		cin >> num3mendoza;
		while (num3mendoza<=-101 || num3mendoza>=101) {
			cout << "INGRESA EL NUMERO 3 ENTERO: [-100 - 100]" << endl;
			cin >> num3mendoza;
		}
	}
	cout << "Numero #1: " << num1mendoza << ";  Numero #2: " << num2mendoza << ";  Numero #3: " << num3mendoza << endl;
	cout << "[Menores] <-------- [Centros] --------> [Mayores]" << endl;
	if (num1mendoza!=num2mendoza || num1mendoza!=num3mendoza || num2mendoza!=num3mendoza) {
		num1menor = num1mendoza<num2mendoza;
		num1central = num1mendoza>num2mendoza && num1mendoza<num3mendoza;
		num1mayor = num1mendoza>num2mendoza;
		num1igual = num1mendoza==num2mendoza;
		num1menor1 = num1mendoza<num3mendoza;
		num1central1 = num1mendoza>num3mendoza && num1mendoza<num2mendoza;
		num1mayor1 = num1mendoza>num3mendoza;
		num1igual1 = num1mendoza==num3mendoza;
		num2menor = num2mendoza<num1mendoza;
		num2central = num2mendoza>num1mendoza && num2mendoza<num3mendoza;
		num2mayor = num2mendoza>num1mendoza;
		num2igual = num2mendoza==num1mendoza;
		num2menor1 = num2mendoza<num3mendoza;
		num2central1 = num2mendoza>num3mendoza && num2mendoza<num1mendoza;
		num2mayor1 = num2mendoza>num3mendoza;
		num2igual1 = num1mendoza==num3mendoza;
		num3menor = num3mendoza<num1mendoza;
		num3central = num3mendoza>num1mendoza && num3mendoza<num2mendoza;
		num3mayor = num3mendoza>num1mendoza;
		num3igual = num3mendoza==num1mendoza;
		num3menor1 = num3mendoza<num2mendoza;
		num3central1 = num3mendoza>num2mendoza && num3mendoza<num1mendoza;
		num3mayor1 = num3mendoza>num2mendoza;
		num3igual1 = num3mendoza==num2mendoza;
		cout << num1mendoza << " < " << num2mendoza << " = " << num1menor << endl;
		cout << num1mendoza << " > " << num2mendoza << " = " << num1mayor << endl;
		cout << num1mendoza << " = " << num2mendoza << " = " << num1igual << endl;
		cout << num1mendoza << " < " << num3mendoza << " = " << num1menor1 << endl;
		cout << num1mendoza << " > " << num3mendoza << " = " << num1mayor1 << endl;
		cout << num1mendoza << " = " << num3mendoza << " = " << num1igual1 << endl;
		cout << num2mendoza << " < " << num1mendoza << " = " << num2menor << endl;
		cout << num2mendoza << " > " << num1mendoza << " = " << num2mayor << endl;
		cout << num2mendoza << " = " << num1mendoza << " = " << num2igual << endl;
		cout << num2mendoza << " < " << num3mendoza << " = " << num2menor1 << endl;
		cout << num2mendoza << " > " << num3mendoza << " = " << num2mayor1 << endl;
		cout << num2mendoza << " = " << num3mendoza << " = " << num2igual1 << endl;
		cout << num3mendoza << " < " << num1mendoza << " = " << num3menor << endl;
		cout << num3mendoza << " > " << num1mendoza << " = " << num3mayor << endl;
		cout << num3mendoza << " = " << num1mendoza << " = " << num3igual << endl;
		cout << num3mendoza << " < " << num2mendoza << " = " << num3menor1 << endl;
		cout << num3mendoza << " > " << num2mendoza << " = " << num3mayor1 << endl;
		cout << num3mendoza << " = " << num2mendoza << " = " << num3igual1 << endl;
		cout << num2mendoza << " < " << num1mendoza << " < " << num3mendoza << " = " << num1central << endl;
		cout << num3mendoza << " < " << num1mendoza << " < " << num2mendoza << " = " << num1central1 << endl;
		cout << num1mendoza << " < " << num2mendoza << " < " << num3mendoza << " = " << num2central << endl;
		cout << num3mendoza << " < " << num2mendoza << " < " << num1mendoza << " = " << num2central1 << endl;
		cout << num1mendoza << " < " << num3mendoza << " < " << num2mendoza << " = " << num3central << endl;
		cout << num2mendoza << " < " << num3mendoza << " < " << num1mendoza << " = " << num3central1 << endl;
		if (num1menor==true && num1menor1==true) {
			if (num2mayor==true && num2mayor1==true) {
				if (num3central==true || num3central1==true) {
					cout << "[" << num1mendoza << "] <-------- [" << num3mendoza << "] --------> [" << num2mendoza << "]" << endl;
					cout << "El numero central es: " << num3mendoza << endl;
				}
			} else {
				if (num3mayor==true && num3mayor1==true) {
					if (num2central==true || num2central1==true) {
						cout << "[" << num1mendoza << "] <-------- [" << num2mendoza << "] --------> [" << num3mendoza << "]" << endl;
						cout << "El numero central es: " << num2mendoza << endl;
					}
				}
			}
		} else {
			if (num2menor==true && num2menor1==true) {
				if (num1mayor==true && num1mayor1==true) {
					if (num3central==true || num3central1==true) {
						cout << "[" << num2mendoza << "] <-------- [" << num3mendoza << "] --------> [" << num1mendoza << "]" << endl;
						cout << "El numero central es: " << num3mendoza << endl;
					}
				} else {
					if (num3mayor==true && num3mayor1==true) {
						if (num1central==true || num1central1==true) {
							cout << "[" << num2mendoza << "] <-------- [" << num1mendoza << "] --------> [" << num3mendoza << "]" << endl;
							cout << "El numero central es: " << num1mendoza << endl;
						}
					}
				}
			} else {
				if (num3menor==true && num3menor1==true) {
					if (num1mayor==true && num1mayor1==true) {
						if (num2central==true || num2central1==true) {
							cout << "[" << num3mendoza << "] <-------- [" << num2mendoza << "] --------> [" << num1mendoza << "]" << endl;
							cout << "El numero central es: " << num2mendoza << endl;
						}
					} else {
						if (num2mayor==true && num2mayor1==true) {
							if (num1central==true || num1central1==true) {
								cout << "[" << num3mendoza << "] <-------- [" << num1mendoza << "] --------> [" << num2mendoza << "]" << endl;
								cout << "El numero central es: " << num1mendoza << endl;
							}
						}
					}
				}
			}
		}
	} else {
		cout << "LOS TRES NUMEROS SON IGUALES NO EXISTE UN NUMERO CENTRAL.." << endl;
	}
}

void Cap6_8Mendoza(){
    int c, i, opcap6_8;
	float resta, suma, x;
	// Leer 100 numeros. Determinar la media de los numeros positivos y la media de los numeros negativos.
	cout << "Leer 100 numeros. Determinar la media de los numeros positivos y" << endl;
	cout << "la media de los numeros negativos." << endl;
	cout << "" << endl;
	do {
		i = 1;
		suma = 0; resta = 0; c = 0;
		cout << "                ======================================" << endl;
		cout << "                =  [1] MEDIA DE NUMEROS POSITOVOS    =" << endl;
		cout << "                =  [2] MEDIA DE NUMEROS NEGATIVOS    =" << endl;
		cout << "                =  [3] SALIR                         =" << endl;
		cout << "                ======================================" << endl;
		cout << "" << endl;
		cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
		cin >> opcap6_8;
		switch (opcap6_8) {
            case 1:
                cout << "Ingresa 100 numeros..Positovos.." << endl;
                for (i=1; i<=100; ++i) {
                    cout << "Ingresa el numero positivo #" << i << " : [ 0  -  100]" << endl;
                    cin >> x;
                    while (x<0 || x>100){
                        cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [0 - 100]" << endl;
                        cout << "Ingresa el numero positivo #" << i << " : [ 0  -  100]" << endl;
                        cin >> x;
                    }
                    if (x>=0) {
                        suma = suma+x;
                        c = c+1;
                    }
                }
                if (c!=0) {
                    cout << "Sumatoria de la serie de numeros ingresados: " << suma << endl;
                    cout << "Cantidad de numeros ingresados: " << c << endl;
                    cout << "La media de los numeros Positivo:  " << suma << "/" << c << " = " << suma/c << endl;
                }else{
                    cout << "La serie de numero ingresados no tiene una media" << endl;
                }
                break;
            case 2:
                cout << "Ingresa 100 numeros..Negativos.." << endl;
                for (i=-1; i>=-100; --i) {
                    cout << "Ingresa el numero negativos #" << i*(-1) << " : [ -100  -  0]" << endl;
                    cin >> x;
                    while (x>0 || x<-100) {
                        cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [-100 - 0]" << endl;
                        cout << "Ingresa el numero negativos #" << i*(-1) << " : [ -100  -  0]" << endl;
                        cin >> x;
                    }
                    if (x<=0) {
                        resta = resta+x;
                        c = c+1;
                    }
                }
                if (c!=0) {
                    cout << "Sumatoria de la serie de numeros ingresados: " << resta << endl;
                    cout << "Cantidad de numeros ingresados: " << c << endl;
                    cout << "La media de los numeros Negtivos: " << resta << "/" << c << " = " << resta/c << endl;
                }else{
                    cout << "La serie de numero ingresados no tiene una media" << endl;
                }
                break;
            case 3:
                cout << "SALISTE...DE LA OPCION..GRACIA." << endl;
                break;
            default:
                cout << "OPCION INGRESADA ERRONEA EL RANGO ES DE [1 - 3]" << endl;
                break;
		}
	} while (opcap6_8!=3);
}
#endif // LIBRERIA2EJERCICIOS_H_INCLUDED
