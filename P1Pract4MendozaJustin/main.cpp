#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    int Num1E, Num2E;
    double Result;
    cout << "Ingresar el numero #1 Entero : " << endl;
    cin >> Num1E;
    cout << "Ingresar el numero #2 Entero : " << endl;
    cin >> Num2E;
    Result = (cos(Num1E)/sin(Num2E))*M_PI;
    cout << "X = (cos(" << Num1E << ")/sen(" << Num2E << "))*" << M_PI << endl;
    cout << "X = " << Result << endl;
    return 0;
}
