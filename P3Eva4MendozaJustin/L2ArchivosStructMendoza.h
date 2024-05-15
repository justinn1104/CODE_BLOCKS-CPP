#ifndef L2ARCHIVOSSTRUCTMENDOZA_H_INCLUDED
#define L2ARCHIVOSSTRUCTMENDOZA_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void RegistroVentaProductosMendoza();
void CrearArchivoMendoza(int cantiComprar, float subTotal, float impuestoIva, float total, string nomPedido);
void LecturaArchivoMendoza();
string nomPedido;
struct MenuMendoza1{
    string op1Mendoza, op2Mendoza, op3Mendoza;
}menuOps = {"\t[1] Registro - Venta - Productos","\t[2] Pedidos - clientes","\t[3] Salir"};
struct ClientesMendoza{
    string nomClientes, apeCliente;
}cliente;
struct ProdustosMendoza{
    string nomProducto;
    int cantProducto;
    float precioProducto, precio2Producto;
    struct ClientesMendoza infoCliente;
}productos[100];
void RegistroVentaProductosMendoza(){
    int cantiComprar;
    float subTotal=0, total=0, IVA=0.12, impuestoIva=0;
    cout << "INGRESA LA CANTIDAD DE PRODUCTOS A COMPRAR: [1 - 4]" << endl;
    cin >> cantiComprar;
    while(cantiComprar<1 || cantiComprar>4){
        cout << "VUELVA A INGRESAR LA CANTIDAD DE PRODUCTOS A COMPRAR: [1 - 4]" << endl;
        cin >> cantiComprar;
    }
    for(int i=0; i<cantiComprar; i++){
        cin.ignore();
        cout << "INGRESA EL NOMBRE DEL PRODUCTO #" << i+1 <<": " << endl;
        getline(cin,productos[i].nomProducto);
        cout << "INGRESA LA CANTIDAD DEL PRODUCTO #" << i+1 <<": [1 - 4]" << endl;
        cin >> productos[i].cantProducto;
        while(productos[i].cantProducto<1 || productos[i].cantProducto>4){
            cout << "VUELVA A INGRESAR LA CANTIDAD DEL PRODUCTO #" << i+1 <<": [1 - 4]" << endl;
            cin >> productos[i].cantProducto;
        }
        cout << "INGRESA EL PRECIO DEL PRODUCTO #" << i+1 <<": [$0.01 - $10.00]" << endl;
        cin >> productos[i].precioProducto;
        while(productos[i].precioProducto<0.01 || productos[i].precioProducto>10){
            cout << "VUELVA A INGRESAR EL PRECIO DEL PRODUCTO #" << i+1 <<": [$0.01 - $10.00]" << endl;
            cin >> productos[i].precioProducto;
        }
        productos[i].precio2Producto=productos[i].cantProducto*productos[i].precioProducto;
        subTotal=subTotal+productos[i].precio2Producto;
    }
    cout << "\t\nINGRESA LOS DASTOS DEL CLIENTE" << endl;
    cin.ignore();
    cout << "INSERTA EL NOMBRE DEL CLIENTES:" << endl;
    getline(cin,cliente.nomClientes);
    cout << "INSERTA EL APELLIDO DEL CLIENTES:" << endl;
    getline(cin,cliente.apeCliente);
    cout << "PEDIDO DEL CLIENTE '" << cliente.nomClientes << " " << cliente.apeCliente << "'" << endl;
    for(int i=0; i<cantiComprar; i++){
        cout << productos[i].nomProducto << "\t\t   " << productos[i].cantProducto << "\t $" << productos[i].precioProducto << "\t $" << productos[i].precio2Producto << endl;
    }
    impuestoIva=subTotal*IVA;
    total=subTotal+impuestoIva;
    cout << "\t\tSUBTOTAL:" << subTotal << endl;
    cout << "\t\t IVA 12%:" << impuestoIva << endl;
    cout << "\t\t   TOTAL:" << total << endl;
    nomPedido.append(cliente.nomClientes).append(cliente.apeCliente);
    CrearArchivoMendoza(cantiComprar, subTotal, impuestoIva, total, nomPedido);
}
void CrearArchivoMendoza(int cantiComprar, float subTotal, float impuestoIva, float total, string nomPedido){
    cout << "\n\tPEDIDO GENERADO '" << nomPedido << ".txt'" << endl;
    ofstream ArchivoPedidoMendoza;
    nomPedido.append(".txt");
    ArchivoPedidoMendoza.open(nomPedido,ios::app);
    if(ArchivoPedidoMendoza.is_open()){
        ArchivoPedidoMendoza << "PEDIDO DEL CLIENTE '" << cliente.nomClientes << " " << cliente.apeCliente << "'" << endl;
        ArchivoPedidoMendoza << "\n===================================================================\n" << endl;
        for(int i=0; i<cantiComprar; i++){
            ArchivoPedidoMendoza << productos[i].nomProducto << "\t\t   " << productos[i].cantProducto << "\t $" << productos[i].precioProducto << "\t $" << productos[i].precio2Producto << endl;
        }
        ArchivoPedidoMendoza << "\n\t\tSUBTOTAL:" << subTotal << endl;
        ArchivoPedidoMendoza << "\t\t IVA 12%:" << impuestoIva << endl;
        ArchivoPedidoMendoza << "\t\t   TOTAL:" << total << endl;
        ArchivoPedidoMendoza << "\n===================================================================" << endl;
        ArchivoPedidoMendoza.close();
    }else{
        cout << "ERROR AL ABRIR EL ARCHIO '" << nomPedido << "'." << endl;
    }
}
void LecturaArchivoMendoza(){
    string textoPedido;
    cout << "" << endl;
    cout << "\t\nINGRESA LOS DASTOS DEL CLIENTE" << endl;
    cin.ignore();
    cout << "INSERTA EL NOMBRE DEL CLIENTES:" << endl;
    getline(cin,cliente.nomClientes);
    cout << "INSERTA EL APELLIDO DEL CLIENTES:" << endl;
    getline(cin,cliente.apeCliente);
    ifstream PedidoLectura;
    nomPedido.append(cliente.nomClientes).append(cliente.apeCliente).append(".txt");
    PedidoLectura.open(nomPedido,ios::in);
    if(PedidoLectura.fail()){
        cout << "ERROR DE LECTURA DEL ARCHIVO '" << nomPedido << "'." << endl;
    }else{
        while(getline(PedidoLectura, textoPedido)){
            cout << textoPedido << endl;
        }
        PedidoLectura.close();
    }
}
#endif // L2ARCHIVOSSTRUCTMENDOZA_H_INCLUDED
