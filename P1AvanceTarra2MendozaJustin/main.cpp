#include <iostream>
#include <cmath>
using namespace std;
int main(){
    /*
    Problema: La matriculacion del estudiante.
	1.- Instruccion que le indicará de forma breve que debe hacer para matricularse.
	2.- Debe ingresar sus datos personales (NOMBRE, APELLIDO, CI,....).
	3.- Debe ingresar los datos educativos.
		a.- Materias que va tomar.
		b.- Números de creditos.
		c.- Precio de credito ($17,25).
		d.- Total a pagar.
	4.- Dispondrá de un COMPROBANTE DE MATRICULA.
    */
    string nombreMendoza, apellidoMendoza, direccionMendoza, respt1;
    char cedulaMendoza[10], telefonoMendoza[10];
    double IVA, DESCT1, DESCT2, PRECIO_CREDITO;
    float impuestoIvaMendoza, desctTotal, desctMendoza, subTotal1Mendoza, subTotal2Mendoza, totalMendoza;
    int numCreditos, numMaterias, respt2, desctPorcentaje;
    IVA = 0.12;
	PRECIO_CREDITO = 17.25;
	DESCT1 =0;
	DESCT2 =0;

	cout << "INGRESA EL NOMBRE DEL ESTUDIANTE :" << endl;
	cin >> nombreMendoza;
    cout << "INGRESA EL APELLIDO DEL ESTUDIANTE :" << endl;
    cin >> apellidoMendoza;
    cout << "INGRESA LA C.I DEL ESTUDIANTE :" << endl;
    cin >> cedulaMendoza;
    cout << "INGRESA EL TELF. DEL ESTUDIANTE :" << endl;
    cin >> telefonoMendoza;
    cout << "INGRESA LA DIRECCION DEL ESTUDIANTE :" << endl;
    cin >> direccionMendoza;
    cout << "INGRESA EL NUMERO DE MATERIAS A MATRICULAR :" << endl;
    cin >> numMaterias;
    cout << "INGRESA EL NUMERO DE CREDITOS DE LAS MATERIAS MATRICULADAS : " << endl;
    cin >> numCreditos;
    cout << "VIVES CON TUS PADRES :  (Escribe Si o No)" << endl;
    cin >> respt1;
    if(respt1 == "Si" ||  respt1 == "si" || respt1 == "SI"){
        cout << "Has obtenido un descuento del 15% : " << endl;
        DESCT1 = 0.15;
        cout << "Escriba el puntaje obtenido de la prueba transformar: (entre 0 - 1000)" << endl;
        cin >> respt2;
        if(respt2 >= 0 && respt2 <= 1000){
            if(respt2 > 750){
                cout << "Has obtenido un descuento del 50%:" << endl;
                DESCT2 = 0.5;
            }else{
                cout << "Has obtenido un descuento del 0%:  (Pts No requeridos)" << endl;
            }
        }
    } else{
        if(respt1 == "No" ||  respt1 == "no" || respt1 == "NO"){
            cout << "Has obtenido un descuento del 0%:  (No Acto)" << endl;
            cout << "Escriba el puntaje obtenido de la prueba transformar:" << endl;
            cin >> respt2;
            if(respt2 >= 0 && respt2 <= 1000){
            if(respt2 > 750){
                cout << "Has obtenido un descuento del 50%:" << endl;
                DESCT2 = 0.5;
            }else{
                cout << "Has obtenido un descuento del 0%:  (Pts No requeridos)" << endl;
            }
        }
        } else {
            cout << "OPCION INCORRECTA...." << endl;
			cout << "Has obtenido un descuento del 0%:  (No Acto)" << endl;
			cout << "Escriba el puntaje obtenido de la prueba transformar:" << endl;
			cin >> respt2;
			if(respt2 >= 0 && respt2 <= 1000){
            if(respt2 > 750){
                cout << "Has obtenido un descuento del 50%:" << endl;
                DESCT2 = 0.5;
            }else{
                cout << "Has obtenido un descuento del 0%:  (Pts No requeridos)" << endl;
            }
			}
        }
    }

    subTotal1Mendoza = numCreditos*PRECIO_CREDITO;
	desctTotal = DESCT1 + DESCT2;
	desctPorcentaje = desctTotal*100;
	desctMendoza = subTotal1Mendoza * desctTotal;
	subTotal2Mendoza = subTotal1Mendoza - desctMendoza;
	impuestoIvaMendoza = subTotal2Mendoza * IVA;
	totalMendoza = subTotal2Mendoza + impuestoIvaMendoza;

	cout << "     NOMBRE Y APELLIDO: " << nombreMendoza << " " << apellidoMendoza << endl;
	cout << "     C.I: " << cedulaMendoza << "    Telefono: " << telefonoMendoza << endl;
	cout << "     DIRECCION : " << direccionMendoza << endl;
	cout << "";
	cout << "#CREDITOS      #MATERIA      COSTO U.    COSTO T." << endl;
	cout << "    " << numCreditos << "            " << numMaterias << "           $" << PRECIO_CREDITO << "     $" << subTotal1Mendoza << endl;
	cout << "";
	cout << "";
	cout << "                               SUBTOTAL: $" << subTotal1Mendoza << endl;
	cout << "                           DESCUENTO " << desctPorcentaje << "%: $" << desctMendoza << endl;
	cout << "                               SUBTOTAL: $" << subTotal2Mendoza << endl;
	cout << "                                IVA 12%: $" << impuestoIvaMendoza << endl;
	cout << "                                  TOTAL: $" << totalMendoza << endl;

    return 0;
}
