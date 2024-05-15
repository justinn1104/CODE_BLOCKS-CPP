#ifndef LIB1ALGORITMOSOB_H_INCLUDED
#define LIB1ALGORITMOSOB_H_INCLUDED
#include <iostream>

using namespace std;

int usuariosR;

//Algoritmos de ordenacion

void O_Nombres(string UsuariosB[]){
    for (int i=0;i<usuariosR-1;i++){
        for (int j=0;j<usuariosR-i-1;j++){
            if (UsuariosB[j]>UsuariosB[j+1]){
                string a=UsuariosB[j];
                UsuariosB[j]=UsuariosB[j+1];
                UsuariosB[j+1]=a;
            }
        }
    }
}

void O_Id(string ClB[], int usuariosR) {
    for (int i=1;i<usuariosR;i++) {
        string usu=ClB[i];
        int j=i-1;

        while (j>=0&&ClB[j]>usu) {
            ClB[j+1]=ClB[j];
            j=j-1;
        }
        ClB[j+1]=usu;
    }
}

void O_Id_S(string ClB[],int usuariosR){

    for (int i=0;i<usuariosR;i++){
        int a=i;
        for(int j=i+1;j<usuariosR;j++){
            if(ClB[j]<ClB[a]){
                a=j;
            }
        }
        string b=ClB[i];
        ClB[i]=ClB[a];
        ClB[a]=b;
    }
}

//Algoritmos de Busqueda

int B_Secuencial(string Usuarios[],string n_usuario,int usuariosR){

    for(int i=0;i<usuariosR;i++){
        if(Usuarios[i]==n_usuario){
            return i;
        }
    }
    return -1;
}

int B_Secuencial_Cl(string Cl[],string n_id,int usuariosR){

    for(int i=0;i<usuariosR;i++){
        if(Cl[i]==n_id){
            return i;
        }
    }
    return -1;
}



int B_Secuencial_Banco(string Cl[],string id_e,int usuariosR){

    for(int i=0;i<usuariosR;i++){
        if(Cl[i]==id_e){
            return i;
        }
    }
    return -1;
}

int B_Secuencial_BancoT(string Cl[],string id_re,int usuariosR){

    for(int i=0;i<usuariosR;i++){
        if(Cl[i]==id_re){
            return i;
        }
    }
    return -1;
}

int B_Binaria(string ClB[],int inicio, int fin, string n_id){

    while(inicio<=fin){
        int medio=inicio+(fin-inicio)/2;
        if(ClB[medio]==n_id){
            return medio;
        }
        if(ClB[medio]<n_id){
            inicio=medio+1;
        }
        if(ClB[medio]>n_id){
            fin=medio-1;
        }
    }
    return -1;
}
#endif // LIB1ALGORITMOSOB_H_INCLUDED
