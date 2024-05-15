#include <iostream>
using namespace std;
int main()
{
    int i, a;
    double j, reslt;
    cout << "INGRESA UN NUMERO DIFRENTE DE CERO: " << endl;
    cin >> a;
    while(a==0){
        cout << "EL NUMERO DEBE SER DIFRENTE DE CERO..." << endl;
        cout << "INGRESA UN NUMERO DIFRENTE DE CERO: " << endl;
        cin >> a;
    }
    for(i=1;i<=a;i++){
        cout << "Ingrese el valor #" << i << endl;
		cin >> j;
		reslt = reslt+ j;
    }
    cout << "La sumatoria de la secuencia es : " << reslt << endl;
    return 0;
}
