#include <iostream>

using namespace std;

int main()
{
    int respt1;
    cout << "INGRESA UN NUMERO :" << endl;
    cin >> respt1;
    if(respt1 >=1 && respt1 <= 5){
        cout << "El numero " << respt1 << " esta en le grupo  A = (1, 2, 3, 4, 5)" << endl;
    }else{
        if(respt1 <= -1 && respt1 >= -5){
            cout << "El numero " << respt1 << " esta en le grupo  B = (-1, -2, -3, -4, -5)" << endl;
        }
    }
    if(respt1 != 0){
        cout << "El numero " << respt1 << " esta en le grupo  C = (-INF, -3, -2 -1, 1, 2, 3, +INF), <> 0" << endl;
    }else{
        cout << "El numero " << respt1 << " No estran en los grupos A, B, C." << endl;
    }
    return 0;
}
