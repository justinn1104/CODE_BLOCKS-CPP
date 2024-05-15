#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //VARIABLES----> DE LA PORTADA
	string Nombre, Apellido, Curso, Asignatura, UNI;
	char opcionMenu;
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> DE LA PORTADA
	Nombre = "Justin"; Apellido = "Mendoza"; Curso = "16366"; Asignatura = "F. Programacion";
	UNI = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS";
	//VARIABLES----> TIENDA KAO SPORT   -  OPC1
	double precioArticulo1, subTotal1, total1,impuestoIva1, IVA1;
	int cantidadArticulo1;
	string nombreArticulo1, nombreCliente1, apellidoCliente1, direccionCliente1;
	char cedulaCliente1[10], telefonoCliente1[10];
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> DE LA PORTADA  -  OPC1
	IVA1=0.12;
	//VARIABLES----> MATRICULAS MATERIAS - DSCT.  -  OPC2
	string nombreMendoza2, apellidoMendoza2, direccionMendoza2, respt1_2;
	char cedulaMendoza2[10], telefonoMendoza2[10];
	double IVA2, DESCT1_2, DESCT2_2, PRECIO_CREDITO2;
	double impuestoIvaMendoza2, desctTotal2, desctMendoza2, subTotal1Mendoza2, subTotal2Mendoza2, totalMendoza2;
	int numCreditos2, numMaterias2, respt2_2, desctPorcentaje2;
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> DE LA PORTADA  -  OPC2
	IVA2 = 0.12; PRECIO_CREDITO2 = 17.25; DESCT1_2 =0; DESCT2_2 =0;
	//VARIABLES----> CALCULO DE ECUACIONES  -  OPC3
	char opcionMenu3;
	int Num1E3_1, Num2E3_1, Exp13_2, Exp23_2;
	double Result3_1, Num1D3_2, Num2D3_2, Result3_2;
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> DE LA PORTADA  -  OPC3
	Exp13_2= 2; Exp23_2 = 3;
	cout << "****************************************************************************\n" << endl;
	cout << "            ==============================================" << endl;
	cout << "            = "<< UNI <<" =" << endl;
	cout << "            ==============================================" << endl;
	cout << "                ======================================" << endl;
	cout << "                =  Nombre : " << Nombre << "                   =" << endl;
	cout << "                =  Apellido : " << Apellido << "                =" << endl;
	cout << "                =  Asignatura : " << Asignatura << "      =" << endl;
	cout << "                =  Curso : " << Curso << "                     =" << endl;
	cout << "                ======================================\n" << endl;
	cout << "****************************************************************************\n" << endl;
	cout << "                            ==============" << endl;
	cout << "                            =  TAREA #2  =" << endl;
	cout << "                            ==============\n" << endl;
	do{
        cout <<  "******************************** MENU **************************************\n" << endl;
		cout <<  "                ======================================" << endl;
		cout <<  "                =  [1] TIENDA KAO SPORT              =" << endl;
		cout <<  "                =  [2] MATRICULAS MATERIAS- DSCT.    =" << endl;
		cout <<  "                =  [3] CALCULO DE ECUACIONES         =" << endl;
		cout <<  "                =  [4] SALIR                         =" << endl;
		cout <<  "                ======================================\n" << endl;
		cout <<  "SELECCIONA UNA OPCION DEL MENU: " << endl;
		cin >> opcionMenu;
		switch(opcionMenu){
            case '1': // ----->
                cout << "" << endl;
                cout << "           ===========================" << endl;
				cout << "           =  TIENDA KAO SPORT       =" << endl;
				cout << "           ===========================" << endl;
				cout << "" << endl;
				cout << "INGRESE EL NOMBRE DEL ARTICULO :" << endl;
				cin >> nombreArticulo1;
				cout << "INGRESE EL PRECIO DEL ARTICULO :" << endl;
				cin >> precioArticulo1;


                while(precioArticulo1 < 0){

                    cout << "EL PRECIO DEBE SER POSITIVO....." << endl;
					cout << "INGRESE EL PRECIO DEL ARTICULO :" << endl;
					cin >> precioArticulo1;

                }



				cout << "INGRESE LA CANTIDAD DEL ARTICULO :" << endl;
				cin >> cantidadArticulo1;
                while(cantidadArticulo1 < 0){
                    cout << "LA CANTIDAD DEBE SER POSITIVA....." << endl;
					cout << "INGRESE LA CANTIDAD DEL ARTICULO :" << endl;
					cin >> cantidadArticulo1;
                }
				subTotal1 = cantidadArticulo1 * precioArticulo1;
				impuestoIva1 = subTotal1 * IVA1;
				total1 = subTotal1 + impuestoIva1;
				cout << "\n           ===========================" << endl;
				cout << "           =  DATOS PARA LA FACTURA  =" << endl;
				cout << "           ===========================\n" << endl;
				cout << "INGRESA EL NOMBRE DEL CLIENTE :" << endl;
				cin >> nombreCliente1;
				cout << "INGRESA EL APELLIDO DEL CLIENTE :" << endl;
				cin >> apellidoCliente1;
				cout << "INGRESA LA C.I O RUC DEL CLIENTE :   (10 - 13 DIGITOS)" << endl;
				cin >> cedulaCliente1;
				cout << "INGRESA EL NUMERO DE TELF DEL CLIENTE :    (10 DIGITOS)" << endl;
				cin >> telefonoCliente1;
				cout << "INGRSA LA DIRECCION DEL CLIENTE :" << endl;
				cin >> direccionCliente1;
				cout << "\n           ===========================" << endl;
				cout << "           =         FACTURA         =" << endl;
				cout << "           ===========================\n" << endl;
				cout << "_______________________________________________\n" << endl;
				cout << "          NOMBRE: " << nombreCliente1 << endl;
				cout << "        APELLIDO: " << apellidoCliente1 << endl;
				cout << "       RUC O C.I: " << cedulaCliente1 << endl;
				cout << "        TELEFONO: " << telefonoCliente1 << endl;
				cout << "       DIRECCION: " << direccionCliente1 << endl;
				cout << "\n CANT.        DESCRIPCION        PRECIO UNI." << endl;
				cout << "  " << cantidadArticulo1 << "              " << nombreArticulo1 << "              " << precioArticulo1 << endl;
				cout << "" << endl;
				cout << "" << endl;
				cout << "                             SUBTOTAL: " << subTotal1 << endl;
				cout << "                              IVA 12%: " << impuestoIva1 << endl;
				cout << "                                TOTAL: " << total1 << endl;
				cout << "\n_______________________________________________\n" << endl;
                break;
            case '2':// ----->
                cout << "         ===============================" << endl;
				cout << "         =  MATRICULAS MATERIAS- DSCT. =" << endl;
				cout << "         ===============================\n" << endl;
				cout << "INGRESA EL NOMBRE DEL ESTUDIANTE :" << endl;
				cin >> nombreMendoza2;
				cout << "INGRESA EL APELLIDO DEL ESTUDIANTE :" << endl;
				cin >> apellidoMendoza2;
				cout << "" << endl;
				cout << "" << endl;
				cout << "INGRESA LA C.I DEL ESTUDIANTE :";
				cin >> cedulaMendoza2;
				cout << "";
				cout << "INGRESA EL TELF. DEL ESTUDIANTE :";
				cin >> telefonoMendoza2;
				cout << "";
				cout <<  "INGRESA LA DIRECCION DEL ESTUDIANTE :";
				cin >> direccionMendoza2;
				cout << "";
				cout << "INGRESA EL NUMERO DE MATERIAS A MATRICULAR :";
				cin >> numMaterias2;
				cout << "";
				cout << "INGRESA EL NUMERO DE CREDITOS DE LAS MATERIAS MATRICULADAS : ";
				cin >> numCreditos2;
				cout << "";
				cout << "VIVES CON TUS PADRES :  (Escribe Si o No)";
				cin >> respt1_2;
				if(respt1_2 == "Si" || respt1_2 == "si" || respt1_2 == "SI"){
                    cout << "Has obtenido un descuento del 15%:" << endl;
					DESCT1_2 = 0.15;

					cout << "\nEscriba el puntaje obtenido de la prueba transformar: (entre 0 - 1000)" << endl;
					cin >> respt2_2;


					if(respt2_2 >= 0 && respt2_2 <= 1000){
						if(respt2_2 > 750){
							cout << "Has obtenido un descuento del 50%:" << endl;
							DESCT2_2 = 0.5;
						}else{
							cout << "Has obtenido un descuento del 0%:  (Pts No requeridos)" << endl;
						}
					}
				}else{

				    if(respt1_2 == "No" || respt1_2 == "no" || respt1_2 == "NO"){
                        cout << "Has obtenido un descuento del 0%:  (No Acto)\n" << endl;
						cout << "Escriba el puntaje obtenido de la prueba transformar:" << endl;
						cin >> respt2_2;
						if(respt2_2 >= 0 && respt2_2 <= 1000){//while ????

                            if(respt2_2 > 750){
                                cout << "Has obtenido un descuento del 50%:" << endl;
								DESCT2_2 = 0.5;
                            }else{
                                cout << "Has obtenido un descuento del 0%:  (Pts No requeridos)" << endl;
                            }

						}
				    }else{
                        cout << "OPCION INCORRECTA...." << endl;
						cout << "Has obtenido un descuento del 0%:  (No Acto)" << endl;
						cout << "Escriba el puntaje obtenido de la prueba transformar:" << endl;
						cin >> respt2_2;
						if(respt2_2 >= 0 && respt2_2 <= 1000){
							if(respt2_2 > 750){
								cout << "Has obtenido un descuento del 50%:" << endl;
								DESCT2_2 = 0.5;
							}else{
								cout << "Has obtenido un descuento del 0%:  (Pts No requeridos)" << endl;
							}
						}
				    }
				}
				subTotal1Mendoza2 = numCreditos2 * PRECIO_CREDITO2;
				desctTotal2 = DESCT1_2 + DESCT2_2;
				desctPorcentaje2 = desctTotal2 * 100;
				desctMendoza2 = subTotal1Mendoza2 * desctTotal2;
				subTotal2Mendoza2 = subTotal1Mendoza2 - desctMendoza2;
				impuestoIvaMendoza2 = subTotal2Mendoza2 * IVA2;
				totalMendoza2 = subTotal2Mendoza2 + impuestoIvaMendoza2;

				cout << "\n\n     NOMBRE Y APELLIDO: " << nombreMendoza2 << " " << apellidoMendoza2;
				cout << "     C.I: " << cedulaMendoza2 << "    Telefono: " << telefonoMendoza2;
				cout << "     DIRECCION : " << direccionMendoza2;
				cout << "";
				cout << "#CREDITOS      #MATERIA      COSTO U.    COSTO T.";
				cout << "    " << numCreditos2 << "            " << numMaterias2 << "           $" << PRECIO_CREDITO2 << "     $" << subTotal1Mendoza2 << endl;
				cout << "\n\n                               SUBTOTAL: $" << subTotal1Mendoza2 << endl;
				cout << "                           DESCUENTO " << desctPorcentaje2 << "%: $" << desctMendoza2 << endl;
				cout << "                               SUBTOTAL: $" << subTotal2Mendoza2 << endl;
				cout << "                                IVA 12%: $" << impuestoIvaMendoza2 << endl;
				cout << "                                  TOTAL: $" << totalMendoza2 << endl;
                break;
            case '3': // ----->
                cout << "" << endl;
                cout << "           ===========================" << endl;
				cout << "           =  CALCULO DE ECUACIONES  =" << endl;
				cout << "           ===========================" << endl;
				cout << "" << endl;

				do{

                    cout << "";
					cout << "                =======================================" << endl;
					cout << "                =  [1] (cos(a)/sen(b))*PI             =" << endl;
					cout << "                =  [2] ((a^c)-(b^d))/PI               =" << endl;
					cout << "                =  [3] SALIR                          =" << endl;
					cout << "                =======================================" << endl;
					cout << "";
					cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
					cin >> opcionMenu3;
					switch(opcionMenu3){
                        case '1':
                            cout << "Ingresar el numero #1 Entero : " << endl;
							cin >> Num1E3_1;
							cout << "Ingresar el numero #2 Entero : " << endl;
							cin >> Num2E3_1;
							while(Num2E3_1==0){
								cout << "EL NUMERO DEBE SER DIFRENTE DE CERO..." << endl;
								cout << "Ingresar el numero #2 Entero : (DIFERENTE DE CERO)" << endl;
								cin >> Num2E3_1;
							}
							Result3_1 = (cos(Num1E3_1)/sin(Num2E3_1))*M_PI;
							cout << "X = (cos(" << Num1E3_1 << ")/sen(" << Num2E3_1 << "))*" << M_PI << endl;
							cout << "X = " << Result3_1 << endl;
                            break;

                        case '2':
                            cout << "Ingresa el nombre #1 Decimal : " << endl;
							cin >> Num1D3_2;
							cout << "Ingresa el nombre #2 Decimal : " << endl;
							cin >>  Num2D3_2;
							Result3_2 = (pow(Num1D3_2,Exp13_2)-pow(Num2D3_2,Exp23_2))/M_PI;
							cout << "X = ((" << Num1D3_2 << "^" << Exp13_2 << ")-(" << Num2D3_2 << "^" << Exp23_2 << "))/" << M_PI << endl;
							cout << "X = " << Result3_2 << endl;
                            break;
                        case '3':
                            cout << "SALISTE CON EXCITO...VUELVE PRONTO" << endl;
                            break;
                        default:
                            cout << "OPCION CORRECTA...SELECCIONA UNA DEL MENU." << endl;
                            break;
					}

				}while(opcionMenu3 != '3');


                break;
            case '4': // ----->
                cout << "SALISTE CON EXCITO...VUELVE PRONTO" << endl;
                break;
            default: // ----->
                cout << "OPCION CORRECTA...SELECCIONA UNA DEL MENU." << endl;
                break;
		}
	}while(opcionMenu != '4'); // ----->

    return 0;
}
