#include <iostream>
using namespace std;
int main()
{
    //VARIABLES----> DE LA PORTADA
	string INTEGRANTE1, INTEGRANTE2, INTEGRANTE3, Curso, GRUPO, Asignatura, UNI;
	//DATOS ESTATICOS----> DE LA PORTADA
	Curso = "16366"; Asignatura = "F. Programacion"; GRUPO = "Grupo 3";
	UNI = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SS";
	INTEGRANTE1 = "Troya Emily "; INTEGRANTE2 = "Torres Lisseth"; INTEGRANTE3 = "Mendoza Justin";
	//VARIABLES----> DEL MENU
	int opcionMenu;
	//VARIABLES----> SUPER EXITO  -  OPC1 - OP4 ----->By Autor: M. Justin.<-----
	float PRODUCTO1, PRODUCTO2, PRODUCTO3, PRODUCTO4, PRODUCTO5, PRODUCTO6, PRODUCTO7, PRODUCTO8, PRODUCTO9, PRODUCTO10;
	float PRODUCTO11, PRODUCTO12, PRODUCTO13, PRODUCTO14, PRODUCTO15, PRODUCTO16, PRODUCTO17, PRODUCTO18, PRODUCTO19, PRODUCTO20;
	float PRODUCTO21, PRODUCTO22, PRODUCTO23, PRODUCTO24;
	float SubTotal1, SubTotal2, SubTotal3, SubTotal4, SubTotal5, SubTotal6, SubTotal7, SubTotal8, SubTotal9, SubTotal10;
	float SubTotal11, SubTotal12, SubTotal13, SubTotal14, SubTotal15, SubTotal16, SubTotal17, SubTotal18, SubTotal19, SubTotal20;
	float SubTotal21, SubTotal22, SubTotal23, SubTotal24;
	float SumaSubTotal1, SumaSubTotal2, SumaSubTotal3, SumaSubTotal4, SubTotal;
	int cant_Embutido, cant_Trigo, cant_ProductHig, cant_ProctEmlat , i,embutidoSelec, trigoSelec, productHigSelec,proctEmlatSelec;
	int selecCategoria;
	//DATOS ESTATICOS----> SUPER EXITO  -  OPC1 - OP4  ----->By Autor: M. Justin.<-----
	PRODUCTO1 = 8.05; PRODUCTO2 = 1.56; PRODUCTO3 = 7.52; PRODUCTO4 = 3.12; PRODUCTO5 = 5.15; PRODUCTO6 = 3.25;//DATOS CONSTANTES
	PRODUCTO7 = 1.37; PRODUCTO8 = 1.99; PRODUCTO9 = 3.29; PRODUCTO10 = 1.60;PRODUCTO11 = 0.99; PRODUCTO12 = 0.63;//DATOS CONSTANTES
	PRODUCTO13 = 10.99; PRODUCTO14 = 3.45;PRODUCTO15 = 5.33; PRODUCTO16 = 3.38; PRODUCTO17 = 5.58; PRODUCTO18 = 1.69;//DATOS CONSTANTES
	PRODUCTO19 = 1.37; PRODUCTO20 = 2.09; PRODUCTO21 = 2.42; PRODUCTO22 = 1.25;PRODUCTO23 = 1.45; PRODUCTO24 = 1.66;//DATOS CONSTANTES
	//VARIABLES----> AFILIADOS  -  OPC2 ----->By Autor: T. Gissel.<-----
	string nombreAfiliado, apellidoAfiliado, cedulaAfiliado, dirAfiliado, telfAfiliado, emailAfiliado;
	int anioAfiliacion, mesAfiliacion, diaAfiliacion, rest2;
	float DesctTotal, Desct1, Desctento1, DesctTotalFinal;
	//DATOS ESTATICOS----> AFILIADOS  -  OPC2	----->By Autor: T. Gissel.<-----
	Desct1 = 0.0;
	//VARIABLES----> METODOS DE PAGO  -  OPC3  - OP4----->By Autor: T. Gissel.<-----
	int op, numTarjeta, mm, aa, AACTUAL, codSeguridad;
    float valorEfectivo, total;
	//DATOS ESTATICOS----> METODOS DE PAGO  -  OPC3	----->By Autor: T. Gissel.<-----
	AACTUAL = 2023;
	//VARIABLES----> FACTURACION  -  OPC4 - OP3 ----->By Autor: T. Lisseth.<-----
	int fecha, dia, mes, anio, rest1;
	string nomCliente, apCliente, dirCliente, cedCliente, telCliente, corCliente;
	float total1,impuestoIva1, IVA1;
	//DATOS ESTATICOS----> FACTURACION  -  OPC4  - OP3----->By Autor: T. Lisseth.<-----
	IVA1 = 0.12;total1 = 0;impuestoIva1 = 0;
	Desctento1=0;DesctTotalFinal=0;DesctTotal=0;
	//SALIDA Y ENTRADA DE DATOS ESTATICOS----> PORTADA
	cout << "****************************************************************************\n" << endl;
	cout << "            ==============================================" << endl;
	cout << "            = " << UNI << " =" << endl;
	cout << "            ==============================================" << endl;
	cout << "                ======================================" << endl;
	cout << "                =  Intregrantes : " << INTEGRANTE1 << "       =" << endl;
	cout << "                =                 " << INTEGRANTE2 << "     =" << endl;
	cout << "                =                 " << INTEGRANTE3 << "     =" << endl;
	cout << "                =  Grupo : " << GRUPO << "                   =" << endl;
	cout << "                =  Asignatura : " << Asignatura << "      =" << endl;
	cout << "                =  Curso : " << Curso << "                     =" << endl;
	cout << "                ======================================" << endl;
	cout << "\n****************************************************************************\n" << endl;
	cout << "                         ===========================" << endl;
	cout << "                         =      BIENVENIDOS        =" << endl;
	cout << "                         =           A             =" << endl;
	cout << "                         =       SUPERMAXI         =" << endl;
	cout << "                         ===========================" << endl;
	/*
	--->FINAL DE PORTADA
	SALIDA Y ENTRADA DE DATOS ESTATICOS----> MENU
	*/
	do{//--->	ESTRUCTURA REPETIR-HASTA QUE -----> HACER REPETITIVO EL MENU DE OPCIONES
        cout << "\n******************************** MENU **************************************\n";
        cout << "                ======================================" << endl;
        cout << "                =  [1] VENTA                         =" << endl;
        cout << "                =  [2] AFILIAR                       =" << endl;
        cout << "                =  [3] FACTURA                       =" << endl;
        cout << "                =  [4] COMPROBANTE                   =" << endl;
        cout << "                =  [5] SALIR                         =" << endl;
        cout << "                ======================================\n" << endl;
        cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
        cin >> opcionMenu;
        switch(opcionMenu){//--->ESTRUCTURA SEGUN-HACER-FINSEGUN -----> BLOQUES DE LAS OPCIONES DEL MENU
            case 1://SALIDA Y ENTRADA DE DATOS ESTATICOS----> VENTA  -  OPC1  ----->By Autor: M. Justin.<-----
                SumaSubTotal1=0; SumaSubTotal2=0; SumaSubTotal3=0; SumaSubTotal4=0; SubTotal=0; total1=0;impuestoIva1=0;
                cant_Embutido=0; cant_Trigo=0; cant_ProductHig=0; cant_ProctEmlat=0;
                SubTotal1=0; SubTotal2=0; SubTotal3=0; SubTotal4=0; SubTotal5=0; SubTotal6=0; SubTotal7=0; SubTotal8=0; SubTotal9=0; SubTotal10=0;
                SubTotal11=0; SubTotal12=0; SubTotal13=0; SubTotal14=0; SubTotal15=0; SubTotal16=0; SubTotal17=0; SubTotal18=0; SubTotal19=0; SubTotal20=0;
                SubTotal21=0; SubTotal22=0; SubTotal23=0; SubTotal24=0;
                do{
                    cout << "\n                ======================================" << endl;
                    cout << "                =      CATERGORIAS DE PRODUCTOS      =" << endl;
                    cout << "                =  [1] EMBUTIDOS                     =" << endl;
                    cout << "                =  [2] TRIGO                         =" << endl;
                    cout << "                =  [3] HIGIENE                       =" << endl;
                    cout << "                =  [4] ENLATADOS                     =" << endl;
                    cout << "                =  [5] SALIR                         =" << endl;
                    cout << "                ======================================\n" << endl;
                    cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
                    cin >> selecCategoria;
                    switch(selecCategoria){
                        case 1:
                            cout << "\n                   ====================" << endl;
                            cout << "                   =     EMBUTIDOS    =" << endl;
                            cout << "                   ====================\n" << endl;
                            cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITAS:  ([0] - [100])" << endl;
                            cin >> cant_Embutido;
                            while(cant_Embutido < 0 || cant_Embutido > 100){
                                cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                                cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITA:  ([0] - [100])" << endl;
                                cin >> cant_Embutido;
                            }
                            for(i=0;i<cant_Embutido;i++){
                                cout << "     SELECIONA EL PRODUCTO #" << i+1 << endl;
                                cout << "\nEliga un Embutido de nuestro menu (1-6)\n" << endl;
                                cout << "[1] Jamón Serrano_________$0" << PRODUCTO1 << "     [4] Longaniza____________$0" << PRODUCTO4 << endl;
                                cout << "[2] Salchicha Vienesa_____$0" << PRODUCTO2 << "     [5] Tocino Aumado________$0" << PRODUCTO5 << endl;
                                cout << "[3] Chorizo Parrillero____$0" << PRODUCTO3 << "     [6] Salchicha de pollo___$0" << PRODUCTO6 << endl;
                                cout << "\nSELECIONA UN EMBUTIDO DEL MENU DE SUPER MAXI: ([1] AL [6])" << endl;
                                cin >> embutidoSelec;
                                while(embutidoSelec < 0 || embutidoSelec >= 7){
                                    cout << "OPCION NO VALIDA SOLO DESDE EL RANGO DE ([1] Y [6])" << endl;
                                    cout << "SELECIONA UN EMBUTIDO DEL MENU DE SUPER MAXI: ([1] AL [6])" << endl;
                                    cin >> embutidoSelec;
                                }
                                /*
                                    ESTRUCTURAS SI-SINO-FINSI ANIDADAS
                                */
                                if(embutidoSelec == 1){
                                    SubTotal1 = PRODUCTO1;
                                }else{
                                    if(embutidoSelec == 2){
                                        SubTotal2 = PRODUCTO2;
                                    }else{
                                        if(embutidoSelec == 3){
                                            SubTotal3 = PRODUCTO3;
                                        }else{
                                            if(embutidoSelec == 4){
                                                SubTotal4 = PRODUCTO4;
                                            }else{
                                                if(embutidoSelec == 5){
                                                    SubTotal5 = PRODUCTO5;
                                                }else{
                                                    if(embutidoSelec == 6){
                                                        SubTotal6 = PRODUCTO6;
                                                    }else{
                                                        if(embutidoSelec == 0){
                                                            cout << "NO HAS SELECCIONADO NINGUNO" << endl;
                                                            cant_Embutido = cant_Embutido - 1;
                                                        }else{
                                                            cout << "" << endl;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                SumaSubTotal1 =  SubTotal1 + SubTotal2 + SubTotal3 + SubTotal4 + SubTotal5 + SubTotal6;
                            }
                            cout << "NUMERO DE PRODUCTOS SELECCIONADOS: " << cant_Embutido << "\n" << endl;
                            break;
                        case 2:
                            cout << "\n                           ====================" << endl;
                            cout << "                           =       TRIGO      =" << endl;
                            cout << "                           ====================\n" << endl;
                            cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITAS:  ([0] - [100])" << endl;
                            cin >> cant_Trigo;
                            while(cant_Trigo < 0 || cant_Trigo > 100){
                                cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                                cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITA:  ([0] - [100])" << endl;
                                cin >> cant_Trigo;
                            }
                            for(i=0;i<cant_Trigo;i++){
                                cout << "\n     SELECIONA EL PRODUCTO #" << i+1  << "\n" << endl;
                                cout << "\nEliga un producto de trigo de nuestro menu (1-6)\n" << endl;
                                cout << "[1] Harina de trigo_____$0" << PRODUCTO7 << "     [4] Pan Supan blanco______$0" << PRODUCTO10 << endl;
                                cout << "[2] Galletas saladas____$0" << PRODUCTO8 << "     [5] Galletas de vainill___$0" << PRODUCTO11 << endl;
                                cout << "[3] Cerelac trigo_______$0" << PRODUCTO9 << "     [6] Fideos toscana________$0" << PRODUCTO12 << endl;
                                cout << "\nSELECIONA UN PRODUCTO DE TRIGO DEL MENU DE SUPER MAXI: ([1] AL [6]\n)" << endl;
                                cin >> trigoSelec;
                                while(trigoSelec < 0 || trigoSelec >= 7){
                                    cout << "OPCION NO VALIDA SOLO DESDE EL RANGO DE ([1] Y [6])" << endl;
                                    cout << "SELECIONA UN PRODUCTO DE TRIGO DEL MENU DE SUPER MAXI: ([1] AL [6])" << endl;
                                    cin >> trigoSelec;
                                }
                                /*
                                  ESTRUCTURAS SI-SINO-FINSI ANIDADAS
                                */
                                if(trigoSelec == 1){
                                    SubTotal7 = PRODUCTO7;
                                }else{
                                    if(trigoSelec == 2){
                                        SubTotal8 =  PRODUCTO8;
                                    }else{
                                        if(trigoSelec == 3){
                                            SubTotal9 = PRODUCTO9;
                                        }else{
                                            if(trigoSelec == 4){
                                                SubTotal10 = PRODUCTO10;
                                            }else{
                                                if(trigoSelec == 5){
                                                    SubTotal11 = PRODUCTO11;
                                                }else{
                                                    if(trigoSelec == 6){
                                                        SubTotal12 = PRODUCTO12;
                                                    }else{
                                                        if(trigoSelec == 0){
                                                            cout << "NO HAS SELECCIONADO NINGUNO" << endl;
                                                            cant_Trigo = cant_Trigo - 1;
                                                        }else{
                                                            cout << "" << endl;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                SumaSubTotal2 =  SubTotal7 + SubTotal8 + SubTotal9 + SubTotal10 + SubTotal11 + SubTotal12;
                            }
                            cout << "NUMERO DE PRODUCTOS SELECCIONADOS: " << cant_Trigo << "\n" << endl;
                            break;
                        case 3:
                            cout << "\n                           ====================" << endl;
                            cout << "                           =      HIGIENE     =" << endl;
                            cout << "                           ====================\n" << endl;
                            cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITAS:  ([0] - [100])" << endl;
                            cin >> cant_ProductHig;
                            while(cant_ProductHig < 0 || cant_ProductHig > 100){
                                cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                                cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITA:  ([0] - [100])" << endl;
                                cin >> cant_ProductHig;
                            }
                            for(i=0;i<cant_ProductHig;i++){
                                cout << "\n     SELECIONA EL PRODUCTO #" << i+1 << "\n" << endl;
                                cout << "Eliga un producto higienico de nuestro menu (1-6)\n" << endl;
                                cout << "[1] Scott papel higiénico_________$" << PRODUCTO13 << "     [4] Dove jabón_______________$0" << PRODUCTO16 << endl;
                                cout << "[2] Nivea desodorante_____________$0" << PRODUCTO14 << "     [5] Listerine enguaje bucal__$0" << PRODUCTO17 << endl;
                                cout << "[3] Nosotras toallas higiénicas___$0" << PRODUCTO15 << "     [6] Colgate triple acción____$0" << PRODUCTO18 << endl;
                                cout << "\nSELECIONA UN PRODUCTO HIGIENICO DEL MENU DE SUPER MAXI: ([1] AL [6])" << endl;
                                cin >> productHigSelec;
                                while(productHigSelec < 0 || productHigSelec >= 7){
                                    cout << "OPCION NO VALIDA SOLO DESDE EL RANGO DE ([1] Y [6])" << endl;
                                    cout << "SELECIONA UN PRODUCTO HIGIENICO DEL MENU DE SUPER MAXI: ([1] AL [6])" << endl;
                                    cin >> productHigSelec;
                                }
                                /*
                                  ESTRUCTURAS SI-SINO-FINSI ANIDADAS
                                */
                                if(productHigSelec == 1){
                                    SubTotal13 = PRODUCTO13;
                                }else{
                                    if(productHigSelec == 2){
                                        SubTotal14 = PRODUCTO14;
                                    }else{
                                        if(productHigSelec == 3){
                                            SubTotal15 = PRODUCTO15;
                                        }else{
                                            if(productHigSelec == 4){
                                                SubTotal16 = PRODUCTO16;
                                            }else{
                                                if(productHigSelec == 5){
                                                    SubTotal17 = PRODUCTO17;
                                                }else{
                                                    if(productHigSelec == 6){
                                                        SubTotal18 = PRODUCTO18;
                                                    }else{
                                                        if(productHigSelec == 0){
                                                            cout << "NO HAS SELECCIONADO NINGUNO" << endl;
                                                            cant_ProductHig = cant_ProductHig - 1;
                                                        }else{
                                                            cout << "" << endl;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                SumaSubTotal3 =  SubTotal13 + SubTotal14 + SubTotal15 + SubTotal16 + SubTotal17 + SubTotal18;
                            }
                            cout << "NUMERO DE PRODUCTOS SELECCIONADOS: " << cant_ProductHig << "\n" << endl;
                            break;
                        case 4:
                            cout << "\n                           ====================" << endl;
                            cout << "                           =     ENLATADOS    =" << endl;
                            cout << "                           ====================\n" << endl;
                            cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITAS:  ([0] - [100])\n" << endl;
                            cin >> cant_ProctEmlat;
                            while(cant_ProctEmlat < 0 || cant_ProctEmlat > 100){
                                cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                                cout << "INNGRESA LA CANTIDAD DE PRODUCTOS QUE NECECITA:  ([0] - [100])" << endl;
                                cin >> cant_ProctEmlat;
                            }
                            for(i=0;i<cant_ProctEmlat;i++){
                                cout << "\n     SELECIONA EL PRODUCTO #" << i+1 << "\n" << endl;
                                cout << "Eliga un productos de enlatados de nuestro menu (1-6)\n" << endl;
                                cout << "[1] Atún real_________$0" << PRODUCTO19 << "     [4] Duraznos del río_______$0" << PRODUCTO22 << endl;
                                cout << "[2] Maiz dulce________$0" << PRODUCTO20 << "     [5] Aceitunas______________$0" << PRODUCTO23 << endl;
                                cout << "[3] Tomates pelados___$0" << PRODUCTO21 << "     [6] Lentejas con chorizo___$0" << PRODUCTO24 << endl;
                                cout << "SELECIONA UN PRODUCTO ENLATADO DEL MENU DE SUPER MAXI: ([1] AL [6])" << endl;
                                cin >> proctEmlatSelec;
                                while(proctEmlatSelec < 0 || proctEmlatSelec >= 7){
                                    cout << "OPCION NO VALIDA SOLO DESDE EL RANGO DE ([1] Y [6])" << endl;
                                    cout << "SELECIONA UN PRODUCTO ENLATADO DEL MENU DE SUPER MAXI: ([1] AL [6])" << endl;
                                    cin >> proctEmlatSelec;
                                }
                                /*
                                  ESTRUCTURAS SI-SINO-FINSI ANIDADAS
                                */
                                if(proctEmlatSelec == 1){
                                    SubTotal19 = PRODUCTO19;
                                }else{
                                    if(proctEmlatSelec == 2){
                                        SubTotal20 = PRODUCTO20;
                                    }else{
                                        if(proctEmlatSelec == 3){
                                            SubTotal21 = PRODUCTO21;
                                        }else{
                                            if(proctEmlatSelec == 4){
                                                SubTotal22 = PRODUCTO22;
                                            }else{
                                                if(proctEmlatSelec == 5){
                                                    SubTotal23 = PRODUCTO23;
                                                }else{
                                                    if(proctEmlatSelec == 6){
                                                        SubTotal24 = PRODUCTO24;
                                                    }else{
                                                        if(proctEmlatSelec == 0){
                                                            cout << "NO HAS SELECCIONADO NINGUNO" << endl;
                                                            cant_ProctEmlat = cant_ProctEmlat - 1;
                                                        }else{
                                                            cout << "" << endl;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                SumaSubTotal4 =  SubTotal19 + SubTotal20 + SubTotal21 + SubTotal22 + SubTotal23 + SubTotal24;
                            }
                            cout << "NUMERO DE PRODUCTOS SELECCIONADOS: " << cant_ProctEmlat << "\n" << endl;
                            break;
                        case 5:
                            cout << "SALISTE CON EXITO...VUELVE PRONTO." << endl;
                            SubTotal = SumaSubTotal1 + SumaSubTotal2 + SumaSubTotal3 + SumaSubTotal4;
                            break;
                        default:
                            cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                            break;
                    }
                }while(selecCategoria != 5);
                cout << "\n                      ===================================" << endl;
                cout << "                      =      SUBTOTAL: " << SubTotal << "            =" << endl;
                cout << "                      ===================================\n" << endl;
                break;//--->FINAL DE VENTA -  OPC1
            case 2://SALIDA Y ENTRADA DE DATOS ESTATICOS----> METODOS DE PAGO  -  OPC2 ----->By Autor: M. Justin.<-----
                do{
                    cout << "\n                ======================================" << endl;
                    cout << "                =[1] AFILIAR CLIENTE                 =" << endl;
                    cout << "                =[2] CLIENTE AFILIADOS               =" << endl;
                    cout << "                =[3] SALIR                           =" << endl;
                    cout << "                ======================================\n" << endl;
                    cout << "SELECCIONA UNA OPCION DEL MENU: " << endl;
                    cin >> rest2;
                    switch(rest2){
                        case 1:
                            cout << "INGRESA EL NOMBRE DEL CLIENTE:" << endl;
                            cin >> nombreAfiliado;
                            cout << "INGRESA EL APELLIDO DEL CLIENTE:" << endl;
                            cin >> apellidoAfiliado;
                            cout << "INGRESA LA CEDULA DEL CLIENTE:" << endl;
                            cin >> cedulaAfiliado;
                            cout << "INGRESA LA DIRECCION DEL CLIENTE:" << endl;
                            cin >> dirAfiliado;
                            cout << "INGRESA EL TELEFONO DEL CLIENTE:" << endl;
                            cin >> telfAfiliado;
                            cout << "INGRESA EL CORREO DEL CLIENTE:" << endl;
                            cin >> emailAfiliado;
                            do{
                                cout << "INGRESA LA FACHE DE AFILIACION" << endl;
                                cout << "INGRESA EL DIA DE AFILIACION: ([1] - [31])" << endl;
                                cin >> diaAfiliacion;
                                while(diaAfiliacion <= 0 || diaAfiliacion >= 32){
                                    cout << "DIA ERRONEO" << endl;
                                    cout << "INGRESA EL DIA DE AFILIACION: ([1] - [31])" << endl;
                                    cin >> diaAfiliacion;
                                }
                                cout << "INGRESA EL MES DE AFILIACION: ([1] - [12])" << endl;
                                cin >> mesAfiliacion;
                                while(mesAfiliacion <= 0 || mesAfiliacion >= 13){
                                    cout << "MES ERRONEO" << endl;
                                    cout << "INGRESA EL MES DE AFILIACION: ([1] - [12])" << endl;
                                    cin >> mesAfiliacion;
                                }
                                cout << "INGRESA EL AÑO DE AFILIACION: ([2023] - [2024])" << endl;
                                cin >> anioAfiliacion;
                                while(anioAfiliacion < 2023 || anioAfiliacion > 2024){
                                    cout << "AÑO ERRONEO" << endl;
                                    cout << "INGRESA EL AÑO DE AFILIACION: ([2023] - [2024])" << endl;
                                    cin >> anioAfiliacion;
                                }
                            }while(anioAfiliacion < 2023 || anioAfiliacion > 2024);
                            break;
                        case 2:
                            cout << "    Cliente: " << nombreAfiliado << " " << apellidoAfiliado << endl;
                            cout << "    Cedula: " << cedulaAfiliado << endl;
                            cout << "    Direccion: " << dirAfiliado << endl;
                            cout << "    Telefono: " << telfAfiliado << endl;
                            cout << "    Correo: " << emailAfiliado << endl;
                            cout << "    Fecha: " << diaAfiliacion << "/" << mesAfiliacion << "/" << anioAfiliacion << endl;
                            break;
                        case 3:
                            cout << "SALISTE CON EXITO...VUELVE PRONTO." << endl;
                            break;
                        default:
                            cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                            break;
                    }
                }while(rest2 != 3);
                break;//----> FINAL DE METODOS DE PAGO  -  OPC2
            case 3://SALIDA Y ENTRADA DE DATOS ESTATICOS----> FACTURA  Y METODO DE PAGO -  OPC3 ----->By Autor: T. Lisseth. Y T. T. Gissel.<-----   MODIFOCADO POR By: M. Justin
                do{
                    cout << "\n                ======================================" << endl;
                    cout << "                =  ¿EL CLIENTE ESTA AFILIADO?        =" << endl;
                    cout << "                =      [1] SI                        =" << endl;
                    cout << "                =      [2] NO                        =" << endl;
                    cout << "                =      [3] SALIR                     =" << endl;
                    cout << "                ======================================" << endl;
                    cout << "SELECCIONA UNA OPCION DEL MENU:" << endl;
                    cin >> rest1;
                    while(rest1!=1 && rest1!=2 && rest1!=3){
                        cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                        cout << "SELECCIONA UNA OPCION DEL MENU:" << endl;
                        cin >> rest1;
                    }
                    if(rest1==1){
                        cout << "Ingrese la cédula del cliente" << endl;
                        cin >> cedCliente;
                        while(cedCliente != cedulaAfiliado){
                        cout << "EL C.I. INGRESADO NO ESTA AFILIADO.." << endl;
                        cout << "INGRESA UN C.I. VALIDO.." << endl;
                        cout << "Ingrese la cédula del cliente:" << endl;
                        cin >> cedCliente;
                        }
                        if(cedCliente == cedulaAfiliado){
                            cout << "El CLIENTE ESTA AFILIADO RECIBE UN DESCUENTO DE 20%" << endl;
                            nomCliente=nombreAfiliado;
                            apCliente=apellidoAfiliado;
                            cedCliente=cedulaAfiliado;
                            dirCliente=dirAfiliado;
                            telCliente=telfAfiliado;
                            corCliente=emailAfiliado;
                            Desct1=0.20;
                        }else{
                            cout << "" << endl;
                        }
                    }else{
                        if(rest1==2){
                            cout << "Ingrese el nombre del cliente" << endl;
                            cin >> nomCliente;
                            cout << "Ingrese el apellido del cliente" << endl;
                            cin >> apCliente;
                            cout << "Ingrese la cédula del cliente" << endl;
                            cin >> cedCliente;
                            cout << "Ingrese la direccion del cliente" << endl;
                            cin >> dirCliente;
                            cout << "Ingrese el telefono del cliente" << endl;
                            cin >> telCliente;
                            cout << "Ingrese correo del cliente" << endl;
                            cin >> corCliente;
                        }else{
                            cout << "SALISTE CON EXITO....." << endl;
                        }
                    }
                }while(rest1 != 1 && rest1 != 2 && rest1 != 3);
                if(rest1 == 1 || rest1 == 2){
                    cout << "\n--------------------------------\n" << endl;
                    cout << "       ==============================" << endl;
                    cout << "       =   INGRESA LA FECHA ACTUAL  =" << endl;
                    cout << "       ==============================\n" << endl;
                    do{
                        cout << "INGRESA EL DIA: ([1] - [31])" << endl;
                        cin >> dia;
                        while(dia <= 0 || dia >= 32){
                            cout << "DIA ERRONEO" << endl;
                            cout << "INGRESA EL DIA: ([1] - [31])" << endl;
                            cin >> dia;
                        }
                        cout << "INGRESA EL MES: ([1] - [12])" << endl;
                        cin >> mes;
                        while(mes <= 0 || mes >= 13){
                            cout << "MES ERRONEO" << endl;
                            cout << "INGRESA EL MES: ([1] - [12])" << endl;
                            cin >> mes;
                        }
                        cout << "INGRESA EL AÑO: ([2023])" << endl;
                        cin >> anio;
                        while(anio != 2023){
                            cout << "AÑO ERRONEO" << endl;
                            cout << "INGRESA EL AÑO: ([2023])" << endl;
                            cin >> anio;
                        }
                    }while(anio != 2023);
                    DesctTotal=Desct1;
                    Desctento1=SubTotal*DesctTotal;
                    DesctTotalFinal=SubTotal-Desctento1;
                    impuestoIva1=DesctTotalFinal*IVA1;
                    total1=DesctTotalFinal + impuestoIva1;
                    do{
                        cout << "\n                      ===================================" << endl;
                        cout << "                      =      TOTAL:   " << total1 << "           =" << endl;
                        cout << "                      ===================================\n" << endl;
                        cout << "                     ======================================" << endl;
                        cout << "                     =          METODO DE PAGO            =" << endl;
                        cout << "                     =      [1] PAGO CON TARJETA          =" << endl;
                        cout << "                     =      [2] PAGO EN EFECTIVO          =" << endl;
                        cout << "                     ======================================\n" << endl;
                        cout << "SELECCIONA UNA OPCION: " << endl;
                        cin >> op;
                        switch(op){
                            case 1:
                                cout << "\n                 ====================" << endl;
                                cout << "                 = PAGO CON TARJETA =" << endl;
                                cout << "                 ====================\n" << endl;
                                cout << "Ingrese el numero de su tarjeta:" << endl;
                                cin >> numTarjeta;
                                while(numTarjeta <= 0 || numTarjeta > 9999999999999999){
                                    cout << "Número de tarjeta inválido, por favor ingrese nuevamente:" << endl;
                                    cin >> numTarjeta;
                                }
                                cout << "Ingrese el mes de su tarjeta:" << endl;
                                cin >> mm;
                                while(mm <= 0 || mm > 12){
                                    cout << "Error, ingrese un mes valido:" << endl;
                                    cin >> mm;
                                }
                                cout << "Ingrese el año de su tarjeta:" << endl;
                                cin >> aa;
                                while(aa < 2023 || aa > 2028){
                                    cout << "Error, ingrese un año válido:" << endl;
                                    cin >> aa;
                                }
                                cout << "-------------------------------------------------------" << endl;
                                cout <<numTarjeta<< endl;
                                cout << " " << AACTUAL << " válida hasta " << mm << "/" << aa << endl;
                                cout << "--------------------------------------------------------" << endl;
                                cout << "Ingrese el codigo de seguridad de su tarjeta:" << endl;
                                cin >> codSeguridad;
                                while(codSeguridad <= 0 || codSeguridad > 999){
                                    cout << "Error, ingresa un codigo de seguridad valido:" << endl;
                                    cin >> codSeguridad;
                                }
                                cout << "Pago realizado con éxito" << endl;
                                break;
                            case 2:
                                cout << "\n                 ====================" << endl;
                                cout << "                 = PAGO EN EFECTIVO =" << endl;
                                cout << "                 ====================\n" << endl;
                                cout << "Valor en efectivo:" << endl;
                                cin >> valorEfectivo;
                                while(valorEfectivo <= total1){
                                    cout << "Error, ingresa nuevamente:" << endl;
                                    cin >> valorEfectivo;
                                }
                                if(valorEfectivo >= total1){
                                    total=valorEfectivo - total1;
                                    cout << "Su vuelto es de: " << total << endl;
                                    cout << "Gracias por preferirnos..." << endl;
                                }else{
                                    cout << "NO TIENES SALDO SUFICIENTE EN TU TARJETA" << endl;
                                }
                                break;
                            default:
                                cout << "Error, ingresa una opcion valida:" << endl;
                                break;
                        }
                    }while(op==1 && op==2);

                }else{
                    cout << "" << endl;
                }

                break;//--->FINAL DE FACTURA  Y METODO DE PAGO -  OPC3
            case 4://SALIDA Y ENTRADA DE DATOS ESTATICOS----> COMPROBANTE -  OPC4 ----->By Autor: T. Lisseth.<------ MODIFOCADO POR By: M. Justin
                DesctTotal=Desct1;
                Desctento1=SubTotal*DesctTotal;
                DesctTotalFinal=SubTotal-Desctento1;
                impuestoIva1=DesctTotalFinal*IVA1;
                total1=DesctTotalFinal + impuestoIva1;
                cout << "-----------------------------------------" << endl;
                cout << "         *FACTURA SUPERMAXI*             " << endl;
                cout << "       SANTO DOMINGO - ECUADOR           " << endl;
                cout << "-----------------------------------------" << endl;
                cout << "    Cliente: " << nomCliente << " " << apCliente << endl;
                cout << "    Cedula: " << cedCliente << endl;
                cout << "    Direccion: " << dirCliente << endl;
                cout << "    Telefono: " << telCliente << endl;
                cout << "    Correo: " << corCliente << endl;
                cout << "    Fecha: " << dia << "/" << mes << "/" << anio << endl;
                cout << "\n CANT.        DESCRIPCION        PRECIO TOTAL.\n" << endl;
                cout << "  " << cant_Embutido << "             Embutidos            $" << SumaSubTotal1 << endl;
                cout << "  " << cant_Trigo << "             P. Trigo             $" << SumaSubTotal2 << endl;
                cout << "  " << cant_ProductHig << "             Higienicos           $" << SumaSubTotal3 << endl;
                cout << "  " << cant_ProctEmlat << "             A. Enlatados         $" << SumaSubTotal4 << endl;
                cout << "\n                         SUBTOTAL: " << SubTotal << endl;
                cout << "                        DESCUENTO " << DesctTotal*100 << "%: " << Desctento1 << endl;
                cout << "                         SUBTOTAL: " << DesctTotalFinal << endl;
                cout << "                          IVA 12%: " << impuestoIva1 << endl;
                cout << "                            TOTAL: " << total1 << endl;
                cout << "\n-----------------------------------------\n" << endl;
                break;//--->FINAL DE FACTURA   -  OPC3
            case 5://SALIDA Y ENTRADA DE DATOS ESTATICOS----> SALIDA  -  OPC5 ----->By Autor: M. Justin.<-----
                cout << "SALISTE CON EXITO...VUELVE PRONTO." << endl;
                break;//--->FINAL DE SALIDA  -  OPC5
            default://SALIDA Y ENTRADA DE DATOS ESTATICOS----	> VALORES ERRONEOS  -  DE OTRO MODO ----->By Autor: M. Justin.<-----
                cout << "OPCION INCORRECTA...VUELVE A INTENTARLO." << endl;
                break;//--->FINAL DE VALORES ERRONEOS  -  DE OTRO MODO
        }//--->CIERRE DE LA ESTRUCTURA SEGUN-HACER-FINSEGUN
	}while(opcionMenu!=5);
	//--->FINAL DE MENU
    return 0;
}
