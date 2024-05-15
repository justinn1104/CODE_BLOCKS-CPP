#include <iostream>

using namespace std;

string clientes[100];
int nClientes;

void BurbujaClientes(){
}

int main(){

    cout << "Ingresar la cantidad de clientes: [1 al 20]" << endl;
    cin >> nClientes;
    while(nClientes<=0 || nClientes>20){
        cout << "Vuelva a Ingresar la cantidad de clientes: [1 al 20]" << endl;
        cin >> nClientes;
    }
    for(int i=0; i<nClientes ; i++){
        cout << "Ingresa el cliente #" << i+1 << endl;
        cin >> clientes[i];
    }
    return 0;
}
