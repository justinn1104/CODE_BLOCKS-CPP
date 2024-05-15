#ifndef ORDENAMIENTOSBUSQUEDASGRUPO5_H_INCLUDED
#define ORDENAMIENTOSBUSQUEDASGRUPO5_H_INCLUDED
#include <iostream>
#include "EstructuraGrupo5.h"

using namespace std;

string UniDimensional_Burbuja(string arrays1[], int fila);
string Bidimensional_Burbuja(string arrays2[][10], int fila, int columna);
string Multidimensional_Burbuja(string arrays3[][5][5], int fila, int columna, int profundidad);
string UniDimensional_Insercion(string arrays1[], int fila);
string Bidimensional_Insercion(string arrays2[][10], int fila, int columna);
string Multidimensional_Insercion(string arrays3[][5][5], int fila, int columna, int profundidad);
string UniDimensional_Seleccion(string arrays1[], int fila);
string Bidimensional_Seleccion(string arrays2[][10], int fila, int columna);
string Multidimensional_Seleccion(string arrays3[][5][5], int fila, int columna, int profundidad);
int UniDimensional_B_Binaria(string arrays1[], int fila, string palabra);
int Bidimensional_B_Binaria(string arrays2[][10], int fila, int columna, string palabra);
int Multidimensional_B_Binaria(string arrays3[][5][5], int fila, int columna, int profundidad, string palabra);
void UniDimensional_B_Secuencial(string arrays1[], int fila);
void Bidimensional_B_Secuencial(string arrays2[][10], int fila, int columna, string palabra);
void Multidimensional_B_Secuencial(string arrays3[][5][5], int fila, int columna, int profundidad);
void ImprimirArrayEmcabezado(string arrays1[], int fila);
void ImprimirArrayUni(string arrays1[], int fila);
void ImprimirArrayBidi(string arrays2[][10], int fila, int columna);
void ImprimirArrayMulti(string arrays3[][5][5], string var2, float var1, int fila, int columna, int profundidad);
string palabra;
int fila, columna, profundidad;
string arrays1[100], arrays2[10][10], arrays3[5][5][5], arrays4[10][10], arrays5[5][5][5];

string UniDimensional_Burbuja(string arrays1[], int fila){
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
string Bidimensional_Burbuja(string arrays2[][10], int fila, int columna){
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
        for(int j=0; j<columna;j++){
            arrays2[i][j] = arrays[k];
            k++;
        }
    }
    return "a";
}
string Multidimensional_Burbuja(string arrays3[][5][5], int fila, int columna, int profundidad){
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
string UniDimensional_Insercion(string arrays1[], int fila){
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
string Bidimensional_Insercion(string arrays2[][10], int fila, int columna){
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
string Multidimensional_Insercion(string arrays3[][5][5], int fila, int columna, int profundidad){
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
string UniDimensional_Seleccion(string arrays1[], int fila){
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
string Bidimensional_Seleccion(string arrays2[][10], int fila, int columna){
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
string Multidimensional_Seleccion(string arrays3[][5][5], int fila, int columna, int profundidad){
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
int UniDimensional_B_Binaria(string arrays1[], int fila, string palabra){
    int inferior, superior, mitad;
    bool band=false;
    //A. busqueda binaria
    inferior=0;
    superior=fila;


    while(inferior<=superior){
        mitad=(inferior+superior)/2;
        if(arrays1[mitad]==palabra){
            band=true;
            break;
        }
        if(arrays1[mitad]>palabra){
            superior=mitad-1;
        }
        if(arrays1[mitad]<palabra){
            inferior=mitad+1;
        }
    }
    if(band==true){
        cout << palabra << " ha sido encontrado en la posicion: " << mitad+1 << endl;
    }else{
        cout << palabra <<" NO ha sido encontrado" << endl;
    }
    return -1;
}
int Bidimensional_B_Binaria(string arrays2[][10], int fila, int columna, string palabra){
    int inferior, superior, mitad;
    bool band=false;
    string arrays[100];
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
    //A. busqueda binaria
    inferior=0; superior=elemtosArrayTota;
    while(inferior<=superior){
        mitad=(inferior+superior)/2;
        if(arrays[mitad]==palabra){
            band=true;
            break;
        }else{
            if(arrays[mitad]>palabra){
                superior=mitad-1;
            }else{
                inferior=mitad+1;
            }
        }
    }
    if(band==true){
        cout << "La palabra a sido encontrada en la posicion: " << mitad+1 << endl;
    }else{
        cout << "El numero NO ha sido encontrado" << endl;
    }
    return -1;
}
int Multidimensional_B_Binaria(string arrays3[][5][5], int fila, int columna, int profundidad, string palabra){
    int inferior, superior, mitad, k, elemtosArrayTota;
    bool band=false;
    elemtosArrayTota=fila*columna*profundidad;
    string arrays[125];
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
    //A. busqueda binaria
    inferior=0; superior=elemtosArrayTota;
    while(inferior<=superior){
        mitad=(inferior+superior)/2;
        if(arrays[mitad]==palabra){
            band=true;
            break;
        }else{
            if(arrays[mitad]>palabra){
                superior=mitad-1;
            }else{
                inferior=mitad+1;
            }
        }
    }
    if(band==true){
        cout << "La palabra a sido encontrada en la posicion: " << mitad+1 << endl;
    }else{
        cout << "El numero NO ha sido encontrado" << endl;
    }
    return -1;
}
void UniDimendional_B_Secuencial(string arrays1[], int fila, string palabra){
    bool encontrado=false;
    int flesh=0;
    while((encontrado==false)&&(flesh<fila)){
        if(arrays1[flesh]==palabra){
            encontrado=true;
        }
        flesh++;
    }
    if(encontrado==true){
        cout << "La palabra a sido encontrada en la posicion: " << flesh << endl;
    }else if(encontrado==false){
        cout << "El numero NO ha sido encontrado" << endl;
    }
}
void Bidimendional_B_Secuencial(string arrays2[][10], int fila, int columna, string palabra){
    bool encontrado=false;
    string arrays[100];
    int flesh=0, k, elemtosArrayTota;
    elemtosArrayTota=fila*columna;
    k=0;
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int i=0; i<fila ; i++){
        for(int j=0; j<columna ; j++){
            arrays[k] = arrays2[i][j];
            k++;
        }
    }
    while((encontrado==false)&&(flesh<elemtosArrayTota)){
        if(arrays[flesh]==palabra){
            encontrado=true;
        }
        flesh++;
    }
    if(encontrado==true){
        cout << "La palabra a sido encontrada en la posicion: " << flesh << endl;
    }else if(encontrado==false){
        cout << "El numero NO ha sido encontrado" << endl;
    }

}
void Multidimendional_B_Secuencial(string arrays3[][5][5], int fila, int columna, int profundidad, string palabra){
    int flesh=0, k, elemtosArrayTota;
    bool encontrado=false;
    string arrays[125];
    elemtosArrayTota=fila*columna*profundidad;
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
    while((encontrado==false)&&(flesh<elemtosArrayTota)){
        if(arrays[flesh]==palabra){
            encontrado=true;
        }
        flesh++;
    }
    if(encontrado==true){
        cout << "La palabra a sido encontrada en la posicion: " << flesh << endl;
    }else if(encontrado==false){
        cout << "El numero NO ha sido encontrado" << endl;
    }
}
void ImprimirArrayEmcabezado(string arrays1[], int fila){
    int contador;
    contador=0;
    for(int i=0; i<fila ; i++ ){
        contador=contador+1;
        cout << arrays1[i] << endl;
    }

}
void ImprimirArrayUni(string arrays1[], int fila){
    int contador;
    contador=0;
    for(int i=0; i<fila ; i++ ){
        contador=contador+1;
        cout << contador << ".- " << arrays1[i] << endl;
    }

}
void ImprimirArrayBidi(string arrays2[][10], string arrays4[][10], int fila, int columna){
    int contador;
    contador=0;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            contador=contador+1;
            cout << "\n          Usuario #" << contador  << " ["<< i <<"]["<< j <<"]" << endl;
            cout << "Nombre y Apellido: " << arrays2[i][j] << endl;
            cout << "Id: " << arrays4[i][j] << endl;
        }
    }
}
void ImprimirArrayMulti(string arrays3[][5][5], string var2, float var1, int fila, int columna, int profundidad){
    int contador;
    contador=0;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            for(int k=0;k<profundidad;k++){
                contador=contador+1;
                cout << "\n   Funcion #" << contador  << " ["<< i <<"]["<< j <<"][" << k << "]" << endl;
                cout << "                PELICULA #" << contador << endl;
                cout << "Nombre: "<< arrays3[i][j][k] << endl;
                cout << "Fecha: "<< var2 << endl;
                cout << "Precio: $"<< var1 << endl;
            }
        }
    }
}
#endif // ORDENAMIENTOSBUSQUEDASGRUPO5_H_INCLUDED


