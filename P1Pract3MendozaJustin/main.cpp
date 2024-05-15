#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Num1D, Num2D, Result;
    int Exp1, Exp2;
    Exp1= 2; Exp2 = 3;
    cout << "Ingresa el nombre #1 Decimal : " << endl;
    cin >> Num1D;
    cout << "Ingresa el nombre #2 Decimal : " << endl;
    cin >> Num2D;
    Result = (pow(Num1D,Exp1)-pow(Num2D,Exp2))/M_PI;
    cout << "X = (pow(" << Num1D << "," << Exp1 << ")- pow(" << Num2D << ","  << Exp2 << "))/"<< M_PI << endl;
    cout << "X = " << Result << endl;
    return 0;
}
