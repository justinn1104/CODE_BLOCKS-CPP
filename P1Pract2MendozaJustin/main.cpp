#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Num1D, Num2D, Reslt;
    int Num1E, Exp1;
    Exp1 = 2;
    cout << "Ingresar el numero #1 Decimal :" << endl;
    cin >> Num1D;
    cout << "Ingresar el numero #2 Decimal :" << endl;
    cin >> Num2D;
    cout << "Ingresar el numero #1 Entero :" << endl;
    cin >> Num1E;
    Reslt = (pow(sqrt(Num1D)/M_PI+Num1E,Exp1))-Num2D;
    cout << "X = (pow(sqrt(" << Num1D << ")/" << M_PI << "+" << Num1E << "," << Exp1 << "))-" << Num2D <<endl;
    cout << "X = " << Reslt << endl;
    return 0;
}
