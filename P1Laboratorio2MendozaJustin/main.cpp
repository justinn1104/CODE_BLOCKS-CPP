#include <iostream>
using namespace std;
int main(){
    //VARIABLES----> DE LA PORTADA
	string Nombre, Apellido, Curso, Asignatura, UNI;
	//DATOS ESTATICOS----> DE LA PORTADA
	Nombre = "Justin"; Apellido = "Mendoza"; Curso = "16366"; Asignatura = "F. Programacion";
	UNI = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS";
	//VARIABLES----> DEL MENU
	int opcionMenu;
	//VARIABLES----> RESTAURANTE EAAV  -  OPC1
	float PLATILLO1, PLATILLO2, PLATILLO3, PLATILLO4, PLATILLO5, PLATILLO6, PLATILLO7, PLATILLO8, PLATILLO9, PLATILLO10;
	float SubTotal1, SubTotal2, SubTotal3, SubTotal4, SubTotal5, SubTotal6, SubTotal7, SubTotal8, SubTotal9, SubTotal10, SubTotal;
	int cant_Plato , i, platilloSelec1;
	//DATOS ESTATICOS----> RESTAURANTE EAAV  -  OPC1
	SubTotal=0; SubTotal1=0; SubTotal2=0; SubTotal3=0; SubTotal4=0; SubTotal5=0; SubTotal6=0; SubTotal7=0; SubTotal8=0; SubTotal9=0; SubTotal10=0;
	PLATILLO1=2.50; PLATILLO2=3.00; PLATILLO3=5.00; PLATILLO4=3.00; PLATILLO5=6.50;//DATOS CONSTANTES
	PLATILLO6=4.00; PLATILLO7=2.50; PLATILLO8=5.00; PLATILLO9=6.00; PLATILLO10=7.00;//DATOS CONSTANTES
	//VARIABLES---->   FACTURACION  -  OPC2
	double total1,impuestoIva1, IVA1;
	int numFacture;
	string nombreCliente1, apellidoCliente1, direccionCliente1, fechaEmi, mailCliente1;
	char cedulaCliente1[14], telefonoCliente1[11];
	//DATOS ESTATICOS----> FACTURACION  -  OPC2
	IVA1=0.12; total1=0; impuestoIva1=0; numFacture=1;
	fechaEmi="07/12/2023";
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> PORTADA
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
	cout << "                            ====================" << endl;
	cout << "                            =  LABORATORIO #2  =" << endl;
	cout << "                            ====================\n" << endl;
	//--->FINAL DE PORTADA
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> MENU -
	do{//---> ESTRUCTURA DO-WHILE() -----> HACER REPETITIVO EL MENU DE OPCIONES
        cout << "******************************** MENU **************************************\n" << endl;
        cout << "                ======================================" << endl;
        cout << "                =  [1] RESTAURANTE EAAV              =" << endl;
        cout << "                =  [2] FACTURACION                   =" << endl;
        cout << "                =  [3] SALIR                         =" << endl;
        cout << "                ======================================" << endl;
        cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
        cin >> opcionMenu;
        switch(opcionMenu){//--->ESTRUCTURA SWITCH() -----> BLOQUES DE LAS OPCIONES DEL MENU
            case 1://SALIDA Y ENTRADA DE DATOS ESTATICOS----> RESTAURANTE EAAV  -  OPC1
                cout << "INNGRESA LA CANTIDAD DE PLATOS QUE NECECITAS:  ([0] - [100])" << endl;
				cin >> cant_Plato;
				while(cant_Plato < 0 || cant_Plato > 100){//--->ESTRUCTURA WHILE()
                    cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                    cout << "INNGRESA LA CANTIDAD DE PLATOS QUE NECECITAS:  ([0] - [100])" << endl;
                    cin >> cant_Plato;
				}//--->CIERRE DE LA ESTRUCTURA WHILE()

				for(i=0;i<cant_Plato;i++){//--->ESTRUCTURA FOR()
					cout << "     SELECIONA EL PLATO #" << i+1 << endl;
					cout << "Eliga un platillo de nuestro menu (1-10)" << endl;
					cout << "[1] Encebollado             -$02.50" << endl;
					cout << "[2] Bolón de Verde          -$03.00" << endl;
					cout << "[3] Ceviches                -$05.00" << endl;
					cout << "[4] Seco de Pollo           -$03.00" << endl;
					cout << "[5] Bandera                 -$06.50" << endl;
					cout << "[6] Sancocho                -$04.00" << endl;
					cout << "[7] Viche                   -$02.50" << endl;
					cout << "[8] Arroz Marinero          -$05.00" << endl;
					cout << "[9] Encocado de Pescado     -$06.00" << endl;
					cout << "[10] Encocado de Cangrejo   -$07.00" << endl;
					cout << "SELECIONA UN PLATO DEL MENU DEL RESTAURANTE: ([1] AL [10])" << endl;
					cin >> platilloSelec1;
                    while(platilloSelec1 < 0 || platilloSelec1 >= 11){//--->ESTRUCTURA WHILE()
                    cout << "OPCION NO VALIDA SOLO DESDE EL RANGO DE ([1] Y [10])" << endl;
                    cout << "SELECIONA UN PLATO DEL MENU DEL RESTAURANTE: ([1] AL [10]" << endl;
                    cin >> platilloSelec1;
                    }//--->CIERRE DE LA ESTRUCTURA WHILE()
                    /*
                    ESTRUCTURAS IF()-ELSE ANIDADAS
                    */
                    if(platilloSelec1 == 1){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                        SubTotal1 = SubTotal1 + PLATILLO1;
                    }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                        if(platilloSelec1 == 2){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                        SubTotal2 = SubTotal2 + PLATILLO2;
                        }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                            if(platilloSelec1 == 3){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                            SubTotal3 = SubTotal3 + PLATILLO3;
                            }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                if(platilloSelec1 == 4){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                                    SubTotal4 = SubTotal4 + PLATILLO4;
                                }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                    if(platilloSelec1 == 5){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                                        SubTotal5 = SubTotal5 + PLATILLO5;
                                    }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                        if(platilloSelec1 == 6){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                                            SubTotal6 = SubTotal6 + PLATILLO6;
                                        }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                            if(platilloSelec1 == 7){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                                                SubTotal7 = SubTotal7 + PLATILLO7;
                                            }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                                if(platilloSelec1 == 8){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                                                    SubTotal8 = SubTotal8 + PLATILLO8;
                                                }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                                    if(platilloSelec1 == 9){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                                                        SubTotal9 = SubTotal9 + PLATILLO9;
                                                    }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                                        if(platilloSelec1 == 10){//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION VERDADERO IF()
                                                            SubTotal10 = SubTotal10 + PLATILLO10;
                                                        }else{//--->ESTRUCTURA IF()-ELSE ---> BLOQUE CONDICION FALSO ELSE
                                                            cout << "NO HAS SELECCIONADO NINGUNO" << endl;
                                                        }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                                                    }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                                                }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                                            }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                                        }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                                    }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                                }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                            }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                        }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                    }//--->CIERRE DE LA ESTRUCTURA IF()-ELSE
                    SubTotal =  SubTotal1 + SubTotal2 + SubTotal3 + SubTotal4 + SubTotal5 + SubTotal6 + SubTotal7 + SubTotal8 + SubTotal9 + SubTotal10;
				}//--->CIERRE DE LA ESTRUCTURA FOR()
				cout << "\nNUMERO DE PLATILLOS SELECCIONADOS: " << cant_Plato << endl;
                break;//--->FINAL DE RESTAURANTE EAAV  -  OPC1
            case 2://SALIDA Y ENTRADA DE DATOS ESTATICOS----> FACTURACION  -  OPC2
                impuestoIva1 = SubTotal * IVA1;
				total1 = SubTotal + impuestoIva1;
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
				cout << "INGRSA EL E-MAIL DEL CLIENTE :" << endl;
				cin >> mailCliente1;
				cout << "\n           ===========================" << endl;
				cout << "           =         FACTURA         =" << endl;
				cout << "           ===========================\n" << endl;
				cout << "_______________________________________________\n" << endl;
				cout << "      FACTURA N°: 000-00" << numFacture << endl;
				cout << "          NOMBRE: " << nombreCliente1 << endl;
				cout << "        APELLIDO: " << apellidoCliente1 << endl;
				cout << "       RUC O C.I: " << cedulaCliente1 << endl;
				cout << "           FECHA: " << fechaEmi << endl;
				cout << "        TELEFONO: " << telefonoCliente1 << endl;
				cout << "       DIRECCION: " << direccionCliente1 << endl;
				cout << "          E-MAIL: " << mailCliente1 << endl;
				cout << "\n CANT.        DESCRIPCION        PRECIO TOTAL." << endl;
				cout << "  " << cant_Plato << "             PLATOS              " << SubTotal << endl;
				cout << "" << endl;
				cout << "" << endl;
				cout << "                             SUBTOTAL: " << SubTotal << endl;
				cout << "                              IVA 12%: " << impuestoIva1 << endl;
				cout << "                                TOTAL: " << total1 << endl;
				cout << "\n_______________________________________________\n" << endl;
                break;//--->FINAL DE FACTURACION  -  OPC2
            case 3://SALIDA Y ENTRADA DE DATOS ESTATICOS----> SALIDA  -  OPC3
                cout << "SALISTE CON EXITO...VUELVE PRONTO." << endl;
                break;//--->FINAL DE SALIDA  -  OPC3
            default://SALIDA Y ENTRADA DE DATOS ESTATICOS----> VALORES ERRONEOS  -  default
                cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                break;//--->FINAL DE VALORES ERRONEOS  -  default
        }//--->CIERRE DE LA ESTRUCTURA SWITCH()
	}while(opcionMenu!=3);//--->CIERRE DE LA ESTRUCTURA DO-WHILE()
	//--->FINAL DE MENU
    return 0;
}
