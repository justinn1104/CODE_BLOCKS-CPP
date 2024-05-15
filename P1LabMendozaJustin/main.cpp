#include <iostream>//librerias internas

using namespace std;//espacio de trabajo

int main()//funcion principal
{

    /*
    int--> enteros
    double
    float  ---> reales
    string
    char ----->
    bool ----> logico
    */
    //VARIABLES----> DE LA PORTADA
	string Nombre, Apellido, Curso, Asignatura, UNI;
	int opcionMenu;

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
	string opcionMenu3;
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

	//MENU
    cout << "                ======================================" << endl;
    cout << "                =  [1] TIENDA KAO SPORT              =" << endl;
    cout << "                =  [2] MATRICULAS MATERIAS- DSCT.    =" << endl;
    cout << "                =  [3] CALCULO DE ECUACIONES         =" << endl;
    cout << "                =  [4] SALIR                         =" << endl;
    cout << "                ======================================" << endl;
    cout << "INGRESA UNA OPCION: " << endl;
    cin >> opcionMenu;
    do{
        switch(opcionMenu){
        case 1:
            cout << "TIENDA KAO SPORT" << endl;
            cout << "INGRESE EL NOMBRE DEL ARTICULO: " endl;
            cin >> nombreArticulo1;
            cout << "INGRESE EL PRECIO DEL ARTICULO: " endl;
            cin >> precioArticulo1;
            cout << "INGRESA LA CANTIDAD " endl;
            cout << "" endl;
            cout << "" endl;

            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
        }
    }while(opcionMenu != 4);



    return 0;
}
