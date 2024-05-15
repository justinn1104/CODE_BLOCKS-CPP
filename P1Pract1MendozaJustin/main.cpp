#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Num1D, Num2D, Num3D, Reslt;
    int Num1E, Num2E, Num3E;
    cout << "Ingresar el numero #1 Decimal :" << endl;
    cin >> Num1D;
    cout << "Ingresar el numero #2 Decimal :" << endl;
    cin >> Num2D;
    cout << "Ingresar el numero #3 Decimal :" << endl;
    cin >> Num3D;
    cout << "Ingresar el numero #1 Entero :" << endl;
    cin >> Num1E;
    cout << "Ingresar el numero #2 Entero :" << endl;
    cin >> Num2E;
    cout << "Ingresar el numero #3 Decimal :" << endl;
    cin >> Num3E;
    Reslt = ((M_PI*Num1E)+Num1D/(Num2E*Num1E)/Num2D)-Num3D;
    cout << "((" << M_PI << "*" << Num1E << ")+" << Num1D << "/(" << Num2E << "*" << Num1E << ")/" << Num2D << ")-" << Num3D << endl;
    cout << "El resultado de siguiente ecuacion es = " << Reslt << endl;
    return 0;
}
