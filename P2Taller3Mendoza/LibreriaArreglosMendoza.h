#ifndef LIBRERIAARREGLOSMENDOZA_H_INCLUDED
#define LIBRERIAARREGLOSMENDOZA_H_INCLUDED
#include <iostream>

using namespace std;


void ArrayUnidimensionalEstaticoMendoza();
void ArrayUnidimensionalDinamicoMendoza();
void ArrayBidimensionalEstaticoMendoza();
void ArrayBidimensionalDinamicoMendoza();
void ArrayMultidimensionalEstaticoMendoza();
void ArrayMultidimensionalDinamicoMendoza();
string UniDimendional_Burbuja(string arrays1[], int fila);
string Bidimendional_Burbuja(string arrays2[][10], int fila, int columna);
string Multidimendional_Burbuja(string arrays3[][3][3], int fila, int columna, int profundidad);

string UniDimendional_Insercion(string arrays1[], int fila);
string Bidimendional_Insercion(string arrays2[][10], int fila, int columna);
string Multidimendional_Insercion(string arrays3[][3][3], int fila, int columna, int profundidad);

string UniDimendional_Seleccion(string arrays1[], int fila);
string Bidimendional_Seleccion(string arrays2[][10], int fila, int columna);
string Multidimendional_Seleccion(string arrays3[][3][3], int fila, int columna, int profundidad);

int UniDimendional_B_Binaria(string arrays1[], int fila, string palabra)
int Bidimendional_B_Binaria(string arrays2[][10], int fila, int columna);
int Multidimendional_B_Binaria(string arrays3[][3][3], int fila, int columna, int profundidad);

void UniDimendional_B_Secuencial(string arrays1[], int fila);
void Bidimendional_B_Secuencial(string arrays2[][10], int fila, int columna, string palabra);
void Multidimendional_B_Secuencial(string arrays3[][3][3], int fila, int columna, int profundidad);

void ImprimirArrayUni(string arrays1[], int fila);
void ImprimirArrayBidi(string arrays2[][10], int fila, int columna);
void ImprimirArrayMulti(string arrays3[][3][3], int fila, int columna, int profundidad);

string palabra;
int fila, columna, profundidad;
int tamanoUniEstatico=0, tamanoUniDinamico=0, filaBidiEstatico=0, columnaBidiEstatico=0, filaBidiDinamico=0, columnaBidiDinamico=0;
int filaMultiEstatico=0,columnaMultiEstatico=0,profundidadMultiEstatico=0, filaMultiDinamico=0,columnaMultiDinamico=0,profundidadMultiDinamico=0;
string arrays1[100], arrays2[10][10], arrays3[5][5][5];
string datosPersonalesUniEstatico[10], datosPersonalesUniDinamico[10], datosPersonalesBibiEstatico[10][10], datosPersonalesBidiDinamico[10][10], datosPersonalesMultiEstatico[3][3][3], datosPersonalesMultiDinamico[3][3][3];

void ArrayUnidimensionalEstaticoMendoza(){
    tamanoUniEstatico=4;
    datosPersonalesUniEstatico[0]="Unidad: Universidad ESPE-SD";
    datosPersonalesUniEstatico[1]="Nombre: Justin Mendoza";
    datosPersonalesUniEstatico[2]="Años: 19";
    datosPersonalesUniEstatico[3]="Sexo: Hombre";
    ImprimirArrayUni(datosPersonalesUniEstatico, tamanoUniEstatico);
}
void ArrayUnidimensionalDinamicoMendoza(){
    int contador;
    cout << "Ingresa la cantidad de datos que desea:" << endl;
    cin >> tamanoUniDinamico;
    contador=0;
    for (int i=0 ; i<tamanoUniDinamico ; i++){
        contador=contador+1;
        cout << "Ingresa el dato #" << contador << " :" << endl;
        cin >> datosPersonalesUniDinamico[i];
    }
    ImprimirArrayUni(datosPersonalesUniDinamico, tamanoUniDinamico);
}
void ArrayBidimensionalEstaticoMendoza(){
    filaBidiEstatico=2; columnaBidiEstatico=2;
    datosPersonalesBibiEstatico[0][0]="Unidad: Universidad ESPE-SD";
    datosPersonalesBibiEstatico[0][1]="Nombre: Justin Mendoza";
    datosPersonalesBibiEstatico[1][0]="Años: 19";
    datosPersonalesBibiEstatico[1][1]="Sexo: Hombre";
    ImprimirArrayBidi(datosPersonalesBibiEstatico, filaBidiEstatico, columnaBidiEstatico);
}
void ArrayBidimensionalDinamicoMendoza(){
    int contador, i, j;
    filaBidiDinamico=0; columnaBidiDinamico=0;
    cout << "Ingresa el numero de filas:" << endl;
    cin >> filaBidiDinamico;
    cout << "Ingresa el numero de columnas:" << endl;
    cin >> columnaBidiDinamico;
    contador=0;
    for(i=0;i<filaBidiDinamico;i++){
        for(j=0;j<columnaBidiDinamico;j++){
            contador=contador+1;
            cout << "Ingresa el dato #" << contador << " :" << endl;
            cin >> datosPersonalesBidiDinamico[i][j];
        }
    }
    ImprimirArrayBidi(datosPersonalesBidiDinamico, filaBidiDinamico, columnaBidiDinamico);
}
void ArrayMultidimensionalEstaticoMendoza(){
    filaMultiEstatico=2;columnaMultiEstatico=2; profundidadMultiEstatico=2;
    datosPersonalesMultiEstatico[0][0][0]="Unidad: Universidad ESPE-SD";
    datosPersonalesMultiEstatico[0][0][1]="Nombre: Justin";
    datosPersonalesMultiEstatico[0][1][0]="Carrera: Ing";
    datosPersonalesMultiEstatico[0][1][1]="E-mail: jm0656126@gmail.com";
    datosPersonalesMultiEstatico[0][1][1]="Apellido: Mendoza";
    datosPersonalesMultiEstatico[1][0][0]="Años: 19";
    datosPersonalesMultiEstatico[1][0][1]="Sexo: Hombre";
    datosPersonalesMultiEstatico[1][1][0]="C.I: 2350233512";
    datosPersonalesMultiEstatico[1][1][1]="Telf: 0969997478";
    ImprimirArrayMulti(datosPersonalesMultiEstatico, filaMultiEstatico, columnaMultiEstatico, profundidadMultiEstatico);
}
void ArrayMultidimensionalDinamicoMendoza(){
    int contador, i, j, k;
    cout << "Ingresa el numero de filas: [1 a 3]" << endl;
    cin >> filaMultiDinamico;
    while(filaMultiDinamico<=0 || filaMultiDinamico>=4){
        cout << "Eroor.. fuera del rango vuelve a intentar" << endl;
        cout << "Ingresa el numero de filas: [1 a 3]" << endl;
        cin >> filaMultiDinamico;
    }
    cout << "Ingresa el numero de columnas: [1 a 3]" << endl;
    cin >> columnaMultiDinamico;
    while(columnaMultiDinamico<=0 || columnaMultiDinamico>=4){
        cout << "Eroor.. fuera del rango vuelve a intentar" << endl;
        cout << "Ingresa el numero de columnas: [1 a 3]" << endl;
        cin >> columnaMultiDinamico;
    }
    cout << "Ingresa el numero de profundidad: [1 a 3]" << endl;
    cin >> profundidadMultiDinamico;
    while(profundidadMultiDinamico<=0 || profundidadMultiDinamico>=4){
        cout << "Eroor.. fuera del rango vuelve a intentar" << endl;
        cout << "Ingresa el numero de profundidad: [1 a 3]" << endl;
        cin >> profundidadMultiDinamico;
    }
    contador=0;
    for(i=0;i<filaMultiDinamico;i++){
        for(j=0;j<columnaMultiDinamico;j++){
            for(k=0;k<profundidadMultiDinamico;k++){
                contador = contador+1;
                cout << "Ingresa el dato #" << contador << " :" << endl;
                cin >> datosPersonalesMultiDinamico[i][j][k];
            }
        }
    }
    ImprimirArrayMulti(datosPersonalesMultiDinamico, filaMultiDinamico, columnaMultiDinamico, profundidadMultiDinamico);
}

string UniDimendional_Burbuja(string arrays1[], int fila){
    int i , j;
    string aux;
    for(i= 0; i<fila; i++){
        for(j=0;j<fila-1; j++){
            if(arrays1[j] > arrays1[j+1]){
                aux = arrays1[j];
                arrays1[j] = arrays1[j+1];
                arrays1[j+1] = aux;
            }
        }
    }
    return "a";

}
string Bidimendional_Burbuja(string arrays2[][10], int fila, int columna){
    string arrays[100], aux;
    int k, elemtosArrayTota;
    elemtosArrayTota=fila*columna;
    k=0;
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int i=0; i<fila ; i++){
        for(int j=0; j<columna ; j++){
            arrays[k] = arrays2[i][j];
            k++;
        }
    }
    //Aplicación del Ordenamiento Burbuja.
    for(int i= 0; i<elemtosArrayTota; i++){
        for(int j=0; j<elemtosArrayTota-1; j++){
            if(arrays[j] > arrays[j+1]){
                aux = arrays[j];
                arrays[j] = arrays[j+1];
                arrays[j+1] = aux;
            }
        }
    }
    k=0;
    //Convertir el arreglo de una dimensión en una de dos dimensiones
    //como anteriormente estaba.
    for(int i =0; i<fila ;i++){
        for(int j=0; j<columna-1;j++){
            arrays2[i][j] = arrays[k];
            k++;
        }
    }
    return "a";
}
string Multidimendional_Burbuja(string arrays3[][3][3], int fila, int columna, int profundidad){
    string arrays[100],aux;
    int k, elemtosArrayTota;
    elemtosArrayTota=(fila*columna)*profundidad;
    k=0;
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int i=0; i<fila ; i++){
        for(int j=0; j<columna ; j++){
            for(int z=0;z<profundidad;z++){
                arrays[k] = arrays3[i][j][z];
                k++;
            }
        }
    }
    //Aplicación del Ordenamiento burbuja.
    for(int i= 0; i<elemtosArrayTota; i++){
        for(int j=0; j<elemtosArrayTota-1; j++){
            if(arrays[j] > arrays[j+1]){
                aux = arrays[j];
                arrays[j] = arrays[j+1];
                arrays[j+1] = aux;
            }
        }
    }
    k=0;
    //Convertir el arreglo de una dimensión en una de dos dimensiones
    //como anteriormente estaba.
    for(int i =0; i<fila ;i++){
        for(int j=0; j<columna;j++){
            for(int z=0; z<profundidad ; z++){
                arrays3[i][j][z] = arrays[k];
                k++;
            }
        }
    }
    return "a";
}



string UniDimendional_Insercion(string arrays1[], int fila){
    for(int i=0;i<fila;i++){
        int pos=i;
        string aux=arrays1[i];
        while((pos>0)&&(arrays1[pos-1]>aux)){
            arrays1[pos]=arrays1[pos-1];
            pos--;
        }
        arrays1[pos]=aux;
    }
    return "a";
}
string Bidimendional_Insercion(string arrays2[][10], int fila, int columna){
    string arrays[100],aux;
    int k, elemtosArrayTota;
    elemtosArrayTota=fila*columna;
    k=0;
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int i=0; i<fila ; i++){
        for(int j=0; j<columna ; j++){
            arrays[k] = arrays2[i][j];
            k++;
        }
    }
    //Aplicación del Ordenamiento insercion.
    for(int i=0;i<elemtosArrayTota;i++){
        for(int i=0;i<elemtosArrayTota;i++){
            int pos=i;
            aux=arrays[i];
            while((pos>0)&&(arrays[pos-1]>aux)){
                arrays[pos]=arrays[pos-1];
                pos--;
            }
            arrays[pos]=aux;
        }
    }
    k=0;
    //Convertir el arreglo de una dimensión en una de dos dimensiones
    //como anteriormente estaba.
    for(int i =0; i<fila ;i++){
        for(int j=0; j<columna;j++){
            arrays2[i][j] = arrays[k];
            k++;
        }
    }
    return "a";
}
string Multidimendional_Insercion(string arrays3[][3][3], int fila, int columna, int profundidad){
    string arrays[100],aux;
    int k, elemtosArrayTota;
    elemtosArrayTota=(fila*columna)*profundidad;
    k=0;
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int i=0; i<fila ; i++){
        for(int j=0; j<columna ; j++){
            for(int z=0;z<profundidad;z++){
                arrays[k] = arrays3[i][j][z];
                k++;
            }
        }
    }
    //Aplicación del Ordenamiento insercion.
    for(int i=0;i<elemtosArrayTota;i++){
        for(int i=0;i<elemtosArrayTota;i++){
            int pos=i;
            aux=arrays[i];
            while((pos>0)&&(arrays[pos-1]>aux)){
                arrays[pos]=arrays[pos-1];
                pos--;
            }
            arrays[pos]=aux;
        }
    }
    k=0;
    //Convertir el arreglo de una dimensión en una de dos dimensiones
    //como anteriormente estaba.
    for(int i =0; i<fila ;i++){
        for(int j=0; j<columna;j++){
            for(int z=0; z<profundidad ; z++){
                arrays3[i][j][z] = arrays[k];
                k++;
            }
        }
    }
    return "a";
}

string UniDimendional_Seleccion(string arrays1[], int fila){
    for (int i=0;i<fila;i++){
        int minimo=i;
        for(int j=i+1;j<fila;j++){
            if(arrays1[j]<arrays1[minimo]){
                minimo=j;
            }
        }
        string aux=arrays1[i];
        arrays1[i]=arrays1[minimo];
        arrays1[minimo]=aux;
    }
    return "a";
}
string Bidimendional_Seleccion(string arrays2[][10], int fila, int columna){
    string arrays[100],aux;
    int k, elemtosArrayTota;
    elemtosArrayTota=fila*columna;
    k=0;
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int i=0; i<fila ; i++){
        for(int j=0; j<columna ; j++){
            arrays[k] = arrays2[i][j];
            k++;
        }
    }
    //Aplicación del Ordenamiento seleccion.
    for (int i=0;i<elemtosArrayTota;i++){
        int minimo=i;
        for(int j=i+1;j<elemtosArrayTota;j++){
            if(arrays[j]<arrays[minimo]){
                minimo=j;
            }
        }
        string aux=arrays[i];
        arrays[i]=arrays[minimo];
        arrays[minimo]=aux;
    }
    k=0;
    //Convertir el arreglo de una dimensión en una de dos dimensiones
    //como anteriormente estaba.
    for(int i =0; i<fila ;i++){
        for(int j=0; j<columna;j++){
            arrays2[i][j] = arrays[k];
            k++;
        }
    }
    return "a";
}
string Multidimendional_Seleccion(string arrays3[][3][3], int fila, int columna, int profundidad){
    string arrays[100],aux;
    int k, elemtosArrayTota;
    elemtosArrayTota=(fila*columna)*profundidad;
    k=0;
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int i=0; i<fila ; i++){
        for(int j=0; j<columna ; j++){
            for(int z=0;z<profundidad;z++){
                arrays[k] = arrays3[i][j][z];
                k++;
            }
        }
    }
    //Aplicación del Ordenamiento seleccion.
    for (int i=0;i<elemtosArrayTota;i++){
        int minimo=i;
        for(int j=i+1;j<elemtosArrayTota;j++){
            if(arrays[j]<arrays[minimo]){
                minimo=j;
            }
        }
        string aux=arrays[i];
        arrays[i]=arrays[minimo];
        arrays[minimo]=aux;
    }
    k=0;
    //Convertir el arreglo de una dimensión en una de dos dimensiones
    //como anteriormente estaba.
    for(int i =0; i<fila ;i++){
        for(int j=0; j<columna;j++){
            for(int z=0; z<profundidad ; z++){
                arrays3[i][j][z] = arrays[k];
                k++;
            }
        }
    }
    return "a";
}


int UniDimendional_B_Binaria(string arrays1[], int fila, string palabra){
    int inferior, superior, mitad;
    bool band=false;

    //A. busqueda binaria
    inferior=0; superior=fila;
    while(inferior<=superior){
        mitad=(inferior+superior)/2;
        if(arrays1[mitad]==palabra){
            band=true;
            break;
        }else{
            if(arrays1[mitad]>palabra){
                superior=mitad;
                mitad = (inferior+superior)/2;
                break;
            }else{
                if(arrays1[mitad]<palabra){
                    inferior=mitad;
                    mitad = (inferior+superior)/2;
                    break;
                }
            }
        }
    }
    if(band==true){
        cout << "La palabra a sido encontrada en la posicion: " << mitad << endl;
    }else{
        cout << "El numero NO ha sido encontrado" << endl;
    }
    return -1;
}
int Bidimendional_B_Binaria(string arrays2[][10], int fila, int columna){

    return -1;
}
int Multidimendional_B_Binaria(string arrays3[][3][3], int fila, int columna, int profundidad){

    return 0;
}
void UniDimendional_B_Secuencial(string arrays1[], int fila, string palabra){
    bool encontrado=false;
    for(int i=0;i<fila;i++){
        if(arrays1[i]==palabra){
            cout<<"La palabra "<<palabra<<" se encuentra en al posicion: "<<i<<" "<<j<<endl;
            encontrado=true;
        }
    }
    if(!encontrado){
        cout<<"El numero "<<palabra<<" no existe en esta matriz"<<endl;
    }
}
void Bidimendional_B_Secuencial(string arrays2[][10], int fila, int columna, string palabra){
    bool encontrado=false;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            if(arrays2[i][j]==palabra){
                cout<<"La palabra "<<palabra<<" se encuentra en al posicion: "<<i<<" "<<j<<endl;
                encontrado=true;
            }
        }
    }
    if(!encontrado){
        cout<<"El numero "<<palabra<<" no existe en esta matriz"<<endl;
    }
}
void Multidimendional_B_Secuencial(string arrays3[][3][3], int fila, int columna, int profundidad, string palabra){
    bool encontrado=false;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            for(int k=0;k<profundidad;k++){
                if(arrays3[i][j][k]==palabra){
                cout<<"La palabra "<<palabra<<" se encuentra en al posicion: ["<< i <<"]["<< j <<"]["<< k <<"]"<<endl;
                encontrado=true;
            }
            }
        }
    }
    if(!encontrado){
        cout<<"El numero "<<palabra<<" no existe en esta matriz"<<endl;
    }
}
//Metodo de  Busqueda Binaria
int A_Binaria(string P1d[],string nombre){

    int inicio=0;
    int fin=7;
    while(inicio<=fin){
        int medio=inicio+(fin-inicio)/2;
        if(P1d[medio]==nombre){
            return medio;
        }else if (P1d[medio]<nombre){
            inicio=medio+1;
        }else{
            fin=medio-1;
        }
    }
    return -1;
}
void ImprimirArrayUni(string arrays1[], int fila){
    int contador;
    contador=0;
    for(int i=0; i<fila ; i++ ){
        contador=contador+1;
        cout << "Dato " << contador << " del arrglo es: " << arrays1[i] << endl;
    }
}
void ImprimirArrayBidi(string arrays2[][10], int fila, int columna){
    int contador;
    contador=0;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            contador=contador+1;
            cout << "Dato " << contador << " del arrglo 2D es: " << arrays2[i][j] << endl;
        }
    }
}
void ImprimirArrayMulti(string arrays3[][3][3], int fila, int columna, int profundidad){
    int contador;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            for(int k=0;k<profundidad;k++){
                contador = contador+1;
                cout << "Dato " << contador << " del arrglo 3D es: " << arrays3[i][j][k] << endl;
            }
        }
    }
}
#endif // LIBRERIAARREGLOSMENDOZA_H_INCLUDED
