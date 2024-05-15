#include<iostream>
using namespace std;
int main() {
	string INTEGRANTE1, INTEGRANTE2, INTEGRANTE3, Curso, GRUPO, Asignatura, UNI;
	int anio, opcionMenu,dia, i, mes, numProductos, cantiProducto[10];
	string nomCliente, apCliente, dirCliente, cedCliente, telCliente, corCliente, rest1, nombreProducto[10];
	string nombreAfiliado, apellidoAfiliado, cedulaAfiliado, dirAfiliado, telfAfiliado, emailAfiliado, rest2, bandera;
	float DesctTotal, Desct1, Desctento1, DesctTotalFinal, impuestoIva1, IVA1, SubTotal, total1, precioProducto[10];
	// VARIABLES----> DE LA PORTADA
	// DATOS ESTATICOS----> DE LA PORTADA
	Curso = "16366";
	Asignatura = "F. Programacion";
	GRUPO = "Grupo 3";
	UNI = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS";
	INTEGRANTE1 = "Troya Emily";
	INTEGRANTE2 = "Torres Lisseth";
	INTEGRANTE3 = "Mendoza Justin";
	// VARIABLES----> DEL MENU
	// VARIABLES----> VENTA  -  OPC1 ----->By Autor: M. Justin.<-----
	// DATOS ESTATICOS----> VENTA  -  OPC1  ----->By Autor: M. Justin.<-----
	SubTotal = 0; Desct1=0; IVA1 = 0.12;
	bandera = " ";
	SubTotal=0;total1=0;impuestoIva1=0;DesctTotal=0;Desctento1=0;
	cout << "****************************************************************************" << endl;
	cout << "            ==============================================" << endl;
	cout << "            = " << UNI << " =" << endl;
	cout << "            ==============================================" << endl;
	cout << "                ======================================" << endl;
	cout << "                =  Integrantes : " << INTEGRANTE1 << "        =" << endl;
	cout << "                =                " << INTEGRANTE2 << "      =" << endl;
	cout << "                =                " << INTEGRANTE3 << "      =" << endl;
	cout << "                =  Grupo : " << GRUPO << "                   =" << endl;
	cout << "                =  Asignatura : " << Asignatura << "      =" << endl;
	cout << "                =  Curso : " << Curso << "                     =" << endl;
	cout << "                ======================================" << endl;
	cout << "****************************************************************************\n" << endl;
	cout << "                         ===========================" << endl;
	cout << "                         =      BIENVENIDOS        =" << endl;
	cout << "                         =           A             =" << endl;
	cout << "                         =       SUPERMAXI         =" << endl;
	cout << "                         ===========================\n" << endl;
	// --->FINAL DE PORTADA
	// SALIDA Y ENTRADA DE DATOS ESTATICOS----> MENU
	do {// --->	ESTRUCTURA REPETIR-HASTA QUE -----> HACER REPETITIVO EL MENU DE OPCIONES
		cout << "******************************** MENU **************************************\n" << endl;
		cout << "                ======================================" << endl;
		cout << "                =  [1] VENTA                         =" << endl;
		cout << "                =  [2] COMPROBANTE                   =" << endl;
		cout << "                =  [3] SALIR                         =" << endl;
		cout << "                ======================================\n" << endl;
		cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
		cin >> opcionMenu;
		switch (opcionMenu) {
		case 1:// SALIDA Y ENTRADA DE DATOS ESTATICOS----> VENTA  -  OPC1  ----->By Autor: M. Justin.<-----
			SubTotal=0;DesctTotal=0; Desct1=0; Desctento1=0; DesctTotalFinal=0;total1=0; impuestoIva1=0;
			cout << "Ingresa la cantidad de productos nesecita:" << endl;
			cin >> numProductos;
			while (numProductos<=0) {
				cout << "EL NUMERO INGRESADO DEBE SER MAYOR QUE CERO.." << endl;
				cout << "Ingresa la cantidad de productos nesecita:" << endl;
				cin >> numProductos;
			}
			for (i=0; i<numProductos; i++) {
                cin.ignore();
				cout << "Ingresa el nombre del preducto #" << i+1 << ": " << endl;
				getline(cin,nombreProducto[i]);
				cout << "Ingresa el precio del producto #" << i+1 << ": " << endl;
				cin >> precioProducto[i];
				while (precioProducto[i]<=0) {
					cout << "CANTIDAD ERRONEA...VUELVA A INGRESAR.." << endl;
					cout << "Ingresa el precio del producto #" << i+1 << ": " << endl;
					cin >> precioProducto[i];
				}
				cout << "Ingresa la cantidad del producto #" << i+1 << ": " << endl;
				cin >> cantiProducto[i];
				while (cantiProducto[i]<=0) {
					cout << "CANTIDAD ERRONEA...VUELVA A INGRESAR.." << endl;
					cout << "Ingresa la cantidad del producto #" << i+1 << ": " << endl;
					cin >> cantiProducto[i];
				}
				cout << "\n======================================" << endl;
				cout << "    CANT.        DESCRIPCION        PRECIO UNI." << endl;
				cout << "    " << cantiProducto[i] << "             " << nombreProducto[i] << "               $" << precioProducto[i] << endl;
				cout << "======================================\n";
				SubTotal = SubTotal+(cantiProducto[i]*precioProducto[i]);
			}
			do {
				cout << "\n                  ====================" << endl;
				cout << "                  =    FACTURACION   =" << endl;
				cout << "                  ====================\n" << endl;
				cout << "Ingrese la cédula del cliente" << endl;
				cin.ignore();
				getline(cin,cedCliente);
				if (cedCliente!=cedulaAfiliado) {
					cout << "EL C.I. INGRESADO NO ESTA AFILIADO.." << endl;
					cout << "¿DESEA AFILIAR AL CLIENTE, SI O NO? " << endl;

					getline(cin,rest1);
					while (rest1!="SI" && rest1 != "Si" && rest1!="si" && rest1!="NO" && rest1!="No" && rest1!="no") {
						cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
						cout << "¿DESEA AFILIAR AL CLIENTE, SI O NO? " << endl;
						getline(cin,rest1);
					}
					if (rest1=="SI" || rest1=="Si" || rest1=="si") {
						cout << "INGRESA EL NOMBRE DEL CLIENTE:" << endl;
						getline(cin,nombreAfiliado);
						cout << "INGRESA EL APELLIDO DEL CLIENTE:" << endl;
						getline(cin,apellidoAfiliado);
						cout << "INGRESA LA CEDULA DEL CLIENTE:" << endl;
						getline(cin,cedulaAfiliado);
						cout << "INGRESA LA DIRECCION DEL CLIENTE:" << endl;
						getline(cin,dirAfiliado);
						cout << "INGRESA EL TELEFONO DEL CLIENTE:" << endl;
						getline(cin,telfAfiliado);
						cout << "INGRESA EL CORREO DEL CLIENTE:" << endl;
						getline(cin,emailAfiliado);
						cout << "El CLIENTE ESTA AFILIADO RECIBE UN DESCUENTO DE 20%" << endl;
						nomCliente = nombreAfiliado;
						apCliente = apellidoAfiliado;
						cedCliente = cedulaAfiliado;
						dirCliente = dirAfiliado;
						telCliente = telfAfiliado;
						corCliente = emailAfiliado;
						Desct1 = 0.20;
					} else {
						cout << "Ingrese el nombre del cliente" << endl;
						getline(cin,nomCliente);
						cout << "Ingrese el apellido del cliente" << endl;
						getline(cin,apCliente);
						cout << "Ingrese la cédula del cliente" << endl;
						getline(cin,cedCliente);
						cout << "Ingrese la direccion del cliente" << endl;
						getline(cin,dirCliente);
						cout << "Ingrese el telefono del cliente" << endl;
						getline(cin,telCliente);
						cout << "Ingrese correo del cliente" << endl;
                        getline(cin,corCliente);
						bandera = "SALIR";
					}
				} else {
					cout << "El CLIENTE ESTA AFILIADO RECIBE UN DESCUENTO DE 20%" << endl;
					nomCliente = nombreAfiliado;
					apCliente = apellidoAfiliado;
					cedCliente = cedulaAfiliado;
					dirCliente = dirAfiliado;
					telCliente = telfAfiliado;
					corCliente = emailAfiliado;
					Desct1 = 0.20;
				}
			} while (!(cedCliente==cedulaAfiliado || bandera=="SALIR"));
			cout << "\       ==============================" << endl;
			cout << "       =   INGRESA LA FECHA ACTUAL  =" << endl;
			cout << "       ==============================\n" << endl;
			do {
				cout << "INGRESA EL DIA: ([1] - [31])" << endl;
				cin >> dia;
				while (dia<=0 || dia>=32) {
					cout << "DIA ERRONEO" << endl;
					cout << "INGRESA EL DIA: ([1] - [31])" << endl;
					cin >> dia;
				}
				cout << "INGRESA EL MES: ([1] - [12])" << endl;
				cin >> mes;
				while (mes<=0 || mes>=13) {
					cout << "MES ERRONEO" << endl;
					cout << "INGRESA EL MES: ([1] - [12])" << endl;
					cin >> mes;
				}
				cout << "INGRESA EL AÑO: ([2023])" << endl;
				cin >> anio;
				while (anio!=2023) {
					cout << "AÑO ERRONEO" << endl;
					cout << "INGRESA EL AÑO: ([2023])" << endl;
					cin >> anio;
				}
			} while (anio!=2023);
			DesctTotal = Desct1;
            Desctento1 = SubTotal*DesctTotal;
            DesctTotalFinal = SubTotal-Desctento1;
            impuestoIva1 = DesctTotalFinal * IVA1;
            total1 = DesctTotalFinal + impuestoIva1;
			// --->FINAL DE VENTA -  OPC1
			break;
		case 2:// SALIDA Y ENTRADA DE DATOS ESTATICOS----> METODOS DE PAGO  -  OPC2 ----->By Autor: M. Justin.<-----
			cout << "\n-----------------------------------------" << endl;
			cout << "         *FACTURA SUPERMAXI*             " << endl;
			cout << "       SANTO DOMINGO - ECUADOR           " << endl;
			cout << "-----------------------------------------\n" << endl;
			cout << "    Cliente: " << nomCliente << apCliente << endl;
			cout << "    Cedula: " << cedCliente << endl;
			cout << "    Direccion: " << dirCliente << endl;
			cout << "    Telefono: " << telCliente << endl;
			cout << "    Correo: " << corCliente << endl;
			cout << "    Fecha: " << dia << "/" << mes << "/" << anio << endl;
			cout << "\n    CANT.        DESCRIPCION        PRECIO UNI." << endl;
			for (i=0; i<numProductos; ++i) {
				cout << i+1 << "    " << cantiProducto[i] << "             " << nombreProducto[i] << "               $" << precioProducto[i] << endl;
			}
			cout << "\n                         SUBTOTAL: " << SubTotal << endl;
			cout << "                        DESCUENTO " << DesctTotal*100 << "%: " << SubTotal << endl;
			cout << "                         SUBTOTAL: " << DesctTotalFinal << endl;
			cout << "                          IVA 12%: " << impuestoIva1 << endl;
			cout << "                            TOTAL: " << total1 << endl;
			cout << "\n-----------------------------------------\n" << endl;
			// ----> FINAL DE METODOS DE PAGO  -  OPC2
			break;
		case 3:// SALIDA Y ENTRADA DE DATOS ESTATICOS----> SALIDA  -  OPC3 ----->By Autor: M. Justin.<-----
			cout << "SALISTE CON EXITO...VUELVE PRONTO." << endl;
			// --->FINAL DE SALIDA  -  OPC3
			break;
		default:// SALIDA Y ENTRADA DE DATOS ESTATICOS----	> VALORES ERRONEOS  -  DE OTRO MODO ----->By Autor: M. Justin.<-----
			cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
			// --->FINAL DE VALORES ERRONEOS  -  DE OTRO MODO
		}// --->CIERRE DE LA ESTRUCTURA SEGUN-HACER-FINSEGUN
	} while (opcionMenu!=3);// --->CIERRE DE LA ESTRUCTURA REPETIR-HASTA QUE
	// --->FINAL DE MENU
	return 0;
}
