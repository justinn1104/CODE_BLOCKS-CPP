#include <iostream>

using namespace std;
void BidiMendoza();
void BurbujaMendoza();

//me falto
int main()
{
    cout << "Bidi\n" << endl;
    BidiMendoza();
    cout << "\nOrdenamiento Uni" << endl;
    BurbujaMendoza();
    return 0;
}
//me falto

void BidiMendoza(){
    int NotasMendoza[3][2], contador;

    contador=0;
    for(int i=0; i<3 ; i++){
        for(int j=0; j<2 ; j++){
            contador=contador+1;
            cout << "Ingresar la nola de el estudiante: #" << contador << " [0 al 20]" << endl;
            cin >> NotasMendoza[i][j];
            /*
            while(NotasMendoza[i][j]<0 || NotasMendoza[i][j]>20){
                cout << "La no ingresada fuera de los rangos e limites.." << endl;
                cout << "Ingresar la nora de el estudiante: #" << contador << " [0 al 20]" << endl;
                cin >> NotasMendoza[i][j];
            }*/
        }
    }
    cout << "\nNOTAS INGRESADA\n" << endl;
    for(int i=0; i<3 ; i++){
        for(int j=0; j<2 ; j++){
            cout << NotasMendoza[i][j] << endl;
        }
    }

}

void BurbujaMendoza(){
    string NombresMendoza[3];
    NombresMendoza[0]="Justin";
    NombresMendoza[1]="Andres";
    NombresMendoza[2]="Mendoza";
    for(int i =0; i<3; i++){
        for(int j=0; j<3-1; j++){
            if(NombresMendoza[j]>NombresMendoza[j+1]){
                string aux = NombresMendoza[j];
                //me falto
                NombresMendoza[j]=NombresMendoza[j+1];
                NombresMendoza[j+1]=aux;
            }
        }
    }
    cout << "\nNombres ordenados\n" << endl;
    for(int i=0; i<3 ; i++){
        cout << NombresMendoza[i] << endl;
    }
    cout << "\nNombres ordenados\n" << endl;
    for(int i=2; i<=0 ; i--){
        cout << NombresMendoza[i] << endl;
    }
}

//me falto
