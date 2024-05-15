#ifndef L2ORDENAMIENTOSBUSQUEDAS_H_INCLUDED
#define L2ORDENAMIENTOSBUSQUEDAS_H_INCLUDED>
#include <iostream>
using namespace std;
void NombresApellidosMendoza();
void EdadesMendoza();
void PesoMendoza();
void O_Burbuja_NomApe_Mendoza(string nomApeMendoza[], int nMendoza);
void B_Binaria_NomApe_Mendoza(string nomApeMendoza[], int nMendoza, string buscarNomApeMendoza);
void O_Insercion_Edades_Mendoza(int edades[], int nMendoza);
void B_Secuencial_NomApe_Mendoza(int edades[], int nMendoza, int buscarEdadMendoza);
void O_Seleccion_Peso_Mendoza(float peso[], int nMendoza);
void B_Binaria_Peso_Mendoza(float peso[], int nMendoza, float buscarPesoMendoza);
string nomApeMendoza[100], buscarNomApeMendoza;
int edades[100], nMendoza, buscarEdadMendoza;
float peso[100], buscarPesoMendoza;
void NombresApellidosMendoza(){
    cout << "\nINGRESA LA CANTIDAD DE NOMBRES Y APELIDOS QUE DESEA INGRESAR: [1 AL 5]" << endl;
    cin >> nMendoza;
    while(nMendoza<1 || nMendoza>5){
        cout << "CANTIDAD INCORRECTA VUELVA A INGRESAR.." << endl;
        cout << "\nINGRESA LA CANTIDAD DE NOMBRES Y APELIDOS QUE DESEA INGRESAR: [1 AL 5]" << endl;
        cin >> nMendoza;
    }
    //cout << "" << endl;
    cin.ignore();
    for(int i=0; i<nMendoza ; i++){
        cout << "INGRESA EL NOMBRE Y APELLIDO #" << i+1 << ":" << endl;
        getline(cin,nomApeMendoza[i]);
    }
    cout << "\nNOMBRES Y APELLIDOS INGRESADOS SON: " << endl;
    for(int i=0; i<nMendoza ; i++){
        cout << "[" << i <<"] " << nomApeMendoza[i] << endl;
    }
    cout << "\nNOMBRES Y APELLIDOS ORDENADOS - METODO BURBUJA SON: " << endl;
    //ORDENAMIENTO BURBUJA FUNCION
    O_Burbuja_NomApe_Mendoza(nomApeMendoza, nMendoza);
    for(int i=0; i<nMendoza ; i++){
        cout << "[" << i <<"] " << nomApeMendoza[i] << endl;
    }
    cout << "\nBUSCAR NOMBRE Y APELLIDO - METODO B. BINARIA:" << endl;
    getline(cin,buscarNomApeMendoza);
    //BUSQUEDA BINARIA FUNCION
    B_Binaria_NomApe_Mendoza(nomApeMendoza, nMendoza, buscarNomApeMendoza);
}
void EdadesMendoza(){
    cout << "\nINGRESA LA CANTIDAD DE EDADES QUE DESEA INGRESAR: [1 AL 5]" << endl;
    cin >> nMendoza;
    while(nMendoza<1 || nMendoza>5){
        cout << "CANTIDAD INCORRECTA VUELVA A INGRESAR.." << endl;
        cout << "\nINGRESA LA CANTIDAD DE EDADES QUE DESEA INGRESAR: [1 AL 5]" << endl;
        cin >> nMendoza;
    }
    for(int i=0; i<nMendoza ; i++){
        cout << "INGRESA LA EDAD #" << i+1 << ": [0 AL 64]" << endl;
        cin >> edades[i];
        while(edades[i]<0 || edades[i]>64){
            cout << "EDAD INCORRECTA VUELVA A INGRESAR.." << endl;
            cout << "INGRESA LA EDAD #" << i+1 << ": [0 AL 64]" << endl;
            cin >> edades[i];
        }
    }
    cout << "\nEDADES INGRESADAS SON: " << endl;
    for(int i=0; i<nMendoza ; i++){
        if(edades[i]<18){
            cout << "[" << i <<"] " << edades[i] << " ES MENOR DE EDAD" << endl;
        }else{
            cout << "[" << i <<"] " << edades[i] << " ES MAYOR DE EDAD" << endl;
        }

    }
    cout << "\nEDADES INGRESADAS ORDENADAS - METODO INSERCION SON: " << endl;
    //ORDENAMIENTO INSERCION FUNCION
    O_Insercion_Edades_Mendoza(edades, nMendoza);
    for(int i=0; i<nMendoza ; i++){
        if(edades[i]<18){
            cout << "[" << i <<"] " << edades[i] << " ES MENOR DE EDAD" << endl;
        }else{
            cout << "[" << i <<"] " << edades[i] << " ES MAYOR DE EDAD" << endl;
        }

    }
    cout << "\nBUSCAR EDADES - METODO B. SECUENCIAL:" << endl;
    cin >> buscarEdadMendoza;
    //BUSQUEDA SECUENCIAL FUNCION
    B_Secuencial_NomApe_Mendoza(edades, nMendoza, buscarEdadMendoza);
}
void PesoMendoza(){
    cout << "\nINGRESA LA CANTIDAD DE PESOS QUE DESEA INGRESAR: [1 AL 5]" << endl;
    cin >> nMendoza;
    while(nMendoza<1 || nMendoza>5){
        cout << "CANTIDAD INCORRECTA VUELVA A INGRESAR.." << endl;
        cout << "\nINGRESA LA CANTIDAD DE PESOS QUE DESEA INGRESAR: [1 AL 5]" << endl;
        cin >> nMendoza;
    }
    for(int i=0 ; i<nMendoza ; i++){
        cout << "INGRESA EL PESO #" << i+1 << ": [3.50kg A 300kg]" << endl;
        cin >> peso[i];
        while(peso[i]<3.5 || peso[i]>300){
            cout << "CANTIDAD INCORRECTA VUELVA A INGRESAR.." << endl;
            cout << "INGRESA EL PESO #" << i+1 << ": [3.50kg A 300kg]" << endl;
            cin >> peso[i];
        }
    }
    cout << "\nPESOS INGRESADOS SON: " << endl;
    for(int i=0 ; i<nMendoza ; i++){
        cout << "["<< i << "] "<< peso[i] << endl;
    }
    cout << "\nPESOS INGRESADOS ORDENADOS - METODO SELECCION SON: " << endl;
    //ORDENAMIENTO SELECCION FUNCION
    O_Seleccion_Peso_Mendoza(peso, nMendoza);
    for(int i=0 ; i<nMendoza ; i++){
        cout << "["<< i << "] "<< peso[i] << endl;
    }
    cout << "\nBUSCAR EDADES - METODO B. BINARIA:" << endl;
    cin >> buscarPesoMendoza;
    //BUSQUEDA BINARIA FUNCION
    B_Binaria_Peso_Mendoza(peso, nMendoza, buscarPesoMendoza);

}
void O_Burbuja_NomApe_Mendoza(string nomApeMendoza[], int nMendoza){
    for(int i=0; i<nMendoza ; i++){
        for(int j=0; j<nMendoza-1 ; j++){
            if(nomApeMendoza[j]>nomApeMendoza[j+1]){
                string aux=nomApeMendoza[j];
                nomApeMendoza[j]=nomApeMendoza[j+1];
                nomApeMendoza[j+1]=aux;
            }
        }
    }
}
void B_Binaria_NomApe_Mendoza(string nomApeMendoza[], int nMendoza, string buscarNomApeMendoza){
    int inf=0, sup=nMendoza, mitad;
    bool band=false;
    while(inf<=sup){
        mitad=(inf+sup)/2;
        if(nomApeMendoza[mitad]==buscarNomApeMendoza){
            band=true;
            break;
        }else{
            if(nomApeMendoza[mitad]>buscarNomApeMendoza){
                sup=mitad-1;
            }else{
                inf=mitad+1;
            }
        }
    }
    if(band==true){
        cout << "\nEL NONBRE Y PELLIDO ENCONTADO EN LA POSOCION #" << mitad << endl;
    }else{
        cout << "\nNOMBRE Y APELLIDO NO ENCONTRADO EN EL ARREGLO...." << endl;
    }
}
void O_Insercion_Edades_Mendoza(int edades[], int nMendoza){
    for(int i=0 ; i<nMendoza ; i++){
        int pos=i;
        int aux=edades[i];
        while((pos>0)&&(edades[pos-1]>aux)){
            edades[pos]=edades[pos-1];
            pos--;
        }
        edades[pos]=aux;
    }
}
void B_Secuencial_NomApe_Mendoza(int edades[], int nMendoza, int buscarEdadMendoza){
    bool encontrado=false;
    int flesh=0;
    while((encontrado==false)&&(flesh<nMendoza)){
        if(edades[flesh]==buscarEdadMendoza){
            encontrado=true;
        }
        flesh++;
    }
    if(encontrado==true){
        cout << "\nLA EDAD ENCONTADA EN LA POSOCION #" << flesh-1 << endl;
    }else{
        cout << "\nLA EDAD ENCONTADA NO ENCONTRADA EN EL ARREGLO...." << endl;
    }
}
void O_Seleccion_Peso_Mendoza(float peso[], int nMendoza){
    for(int i=0 ; i<nMendoza ; i++){
        int mini=i;
        for(int j=i+1; j<nMendoza ; j++){
            if(peso[j]<peso[mini]){
                mini=j;
            }
        }
        float aux=peso[i];
        peso[i]=peso[mini];
        peso[mini]=aux;
    }
}
void B_Binaria_Peso_Mendoza(float peso[], int nMendoza, float buscarPesoMendoza){
    int inf=0, sup=nMendoza, mitad;
    bool band=false;
    while(inf<=sup){
        mitad=(inf+sup)/2;
        if(peso[mitad]==buscarPesoMendoza){
            band=true;
            break;
        }else{
            if(peso[mitad]>buscarPesoMendoza){
                sup=mitad-1;
            }else{
                inf=mitad+1;
            }
        }
    }
    if(band==true){
        cout << "\nEL PESO ENCONTADO EN LA POSOCION #" << mitad << endl;
    }else{
        cout << "\nPESO NO ENCONTRADO EN EL ARREGLO...." << endl;
    }
}

#endif // L2ORDENAMIENTOSBUSQUEDAS_H_INCLUDED
