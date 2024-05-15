#ifndef L4INVENTARIO_CLIENTES_H_INCLUDED
#define L4INVENTARIO_CLIENTES_H_INCLUDED

#include <iostream>

using namespace std;

string Opcion2ClientesGrupo5();
string ClientesEstaticosGrupo5();
void ImprimirClientesGrupo5(string clientesGrupo5[], int nClientesDinamicosGrupo5);

string clientesGrupo5[10];
int nClientesGrupo5, nClientesEstaticosGrupo5=5, nClientesDinamicosGrupo5;
nClientesGrupo5=nClientesEstaticosGrupo5 + nClientesDinamicosGrupo5;

string Opcion2ClientesGrupo5(){
    int opClientesGrupo5;
    cout << "[1] INGRESAR CLIENTES NUEVOS" << endl;
    cout << "[2] LISTA DE CLIENTES" << endl;
    cout << "[3] REGRESAR.." << endl;
    cin >> opClientesGrupo5;
    switch(opClientesGrupo5){
        case 1:
            Opcion2ClientesGrupo5();
            break;
        case 2:
            cout << "\tLISTA DE CLIENTES" << endl;
            ImprimirClientesGrupo5(clientesGrupo5, nClientesGrupo5);
            Opcion2ClientesGrupo5();
            break;
        case 3:
            cout << "REGRESASTE AL MENU PRINCIPAL.." << endl;
            break;
        default:
            cout << "OPCION ERRONEA..VUELVE A INTENTARLO.." << endl;
            Opcion2ClientesGrupo5();
    }

    return "a";
}
string ClientesEstaticosGrupo5(){
    clientesGrupo5[0]="Justin Mendoza";
    clientesGrupo5[1]="Gisel Troya";
    clientesGrupo5[2]="Liseth Torres";
    clientesGrupo5[3]="Wendy Duenas";
    clientesGrupo5[4]="Luis Mendoza";

    return "a";
}
string ClientesDinamicosGrupo5(){

    ImprimirClientesGrupo5(clientesGrupo5, nClientesGrupo5);

    return "a";
}

void ImprimirClientesGrupo5(string clientesGrupo5[], int nClientesGrupo5){
    for(int i=0; i<nClientesGrupo5 ; i++){
        cout << "["<<i+1<<"]"<< clientesGrupo5[i] << endl;
    }
}

#endif // L4INVENTARIO_CLIENTES_H_INCLUDED
