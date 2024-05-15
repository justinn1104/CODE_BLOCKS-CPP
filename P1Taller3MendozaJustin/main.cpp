#include <iostream>//librerias
using namespace std;//espacio de trabajo
//funcion pricipal
int main(){
    /*crear un programa que simule la tienda de KAO Sport
    VARIABLES - CONSTANTE
    - nombreArticulo            - nombreCliente
    - cantidadArticulo          - apellidoCliente
    - precioArticulo            - cedulaCliente
    - subTotal                  - direccionCliente
    - total                     - telefonoCliente

    - IVA

    1. Ingrese producto
    2. Ingrese precio
    3. Ingrese cantidad
    3. operaciones del subtotal
    4. Ingrese el nombre cliente
    5.
    */

    float precioArticulo, subTotal, total,impuestoIva, IVA=0.12;
    int cantidadArticulo;
    string nombreArticulo, nombreCliente, apellidoCliente, direccionCliente;
    char cedulaCliente[14], telefonoCliente[11];
    cout << "\n\t===========================" << endl;
    cout << "\t=    TIENDA KAO SPORT     =" << endl;
    cout << "\t===========================\n" << endl;
    cout << "**********************************************\n" << endl;
    cout << "INGRESE EL NOMBRE DEL ARTICULO :" << endl;
    cin >> nombreArticulo;
    cout << "INGRESE EL PRECIO DEL ARTICULO :" << endl;
    cin >> precioArticulo;
    cout << "INGRESE LA CANTIDAD DEL ARTICULO :" << endl;
    cin >> cantidadArticulo;
    subTotal = cantidadArticulo * precioArticulo;
    impuestoIva = subTotal * IVA;
    total = subTotal + impuestoIva;
    cout << "**********************************************\n" << endl;
    cout << "\n\t===========================" << endl;
    cout << "\t=  DATOS PARA LA FACTURA  =" << endl;
    cout << "\t===========================\n" << endl;
    cout << "**********************************************\n" << endl;
    cout << "INGRESA EL NOMBRE DEL CLIENTE :" << endl;
    cin >> nombreCliente;
    cout << "INGRESA EL APELLIDO DEL CLIENTE :" << endl;
    cin >> apellidoCliente;
    cout << "INGRESA LA C.I O RUC DEL CLIENTE :   (10 - 13 DIGITOS)" << endl;
    cin >> cedulaCliente;
    cout << "INGRESA EL NUMERO DE TELF DEL CLIENTE :    (10 DIGITOS)" << endl;
    cin >> telefonoCliente;
    cout << "INGRSA LA DIRECCION DEL CLIENTE :" << endl;
    cin >> direccionCliente;
    cout << "\n\t===========================" << endl;
    cout << "\t=         FACTURA         =" << endl;
    cout << "\t===========================\n" << endl;
    cout << "_______________________________________________" << endl;
    cout << "\t   NOMBRE: " << nombreCliente << endl;
    cout << "\t APELLIDO: " << apellidoCliente << endl;
    cout << "\tRUC O C.I: " << cedulaCliente << endl;
    cout << "\t TELEFONO: " << telefonoCliente << endl;
    cout << "\tDIRECCION: " << direccionCliente << endl;
    cout << "\nCANT.\t" << "DESCRIPCION\t" << "PRECIO UNI.\t\n" << endl;
    cout << " " << cantidadArticulo << "  \t " << nombreArticulo << "  \t" << " " << precioArticulo << "\n" << endl;
    cout << "\t\t\t   SUBTOTAL : " << subTotal << endl;
    cout << "\t\t\t   IVA 12 % : " << impuestoIva << endl;
    cout << "\t\t\t      TOTAL : " << total << endl;
    cout << "_______________________________________________" << endl;
    return 0;
}

