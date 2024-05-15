#ifndef L3ORDENAMIENTOS_BUSQUEDAS_H_INCLUDED
#define L3ORDENAMIENTOS_BUSQUEDAS_H_INCLUDED

#include <iostream>



using namespace std;

string O_Seleccion_AgenciasGrupo4(string agenciaRegistroCivilGrupo4[], int tamanoGrupo4);
string O_Insercion_NombresGrupo4(string nombresGrupo4[], int tamanoGrupo4);
int B_Binaria_NombresGrupo4(string nombresGrupo4[], int tamanoGrupo4, string BuscarGrupo4);
int B_Secuencial_CI_Psw_Grupo4(string cedulaPswGrupo4[], int tamanoGrupo4, string BuscarGrupo4);
int B_Secuencial_AgenciaProv_Grupo4(string agenciaRegistroCivilGrupo4[], int tamanoGrupo4, string BuscarGrupo4);

string O_Seleccion_AgenciasGrupo4(string agenciaRegistroCivilGrupo4[], int tamanoGrupo4){
    int mini=0;
    string aux;
    for(int i=0 ; i< tamanoGrupo4 ; i++){
        mini=i;
        for(int j=i+1; j<tamanoGrupo4 ; j++){
            if(agenciaRegistroCivilGrupo4[j]<agenciaRegistroCivilGrupo4[mini]){
                mini = j;
            }
        }
        aux = agenciaRegistroCivilGrupo4[i];
        agenciaRegistroCivilGrupo4[i] = agenciaRegistroCivilGrupo4[mini];
        agenciaRegistroCivilGrupo4[mini] = aux;
    }
    return aux;
}

string O_Insercion_NombresGrupo4(string nombresGrupo4[], int tamanoGrupo4){
    string aux;
    for(int i=0; i<tamanoGrupo4; i++){
        int pos=i;
        aux=nombresGrupo4[i];
        while((pos>0)&&(nombresGrupo4[pos-1]>aux)){
            nombresGrupo4[pos]=nombresGrupo4[pos-1];
            pos--;
        }
        nombresGrupo4[pos]=aux;
    }
    return aux;
}
int B_Binaria_NombresGrupo4(string nombresGrupo4[], int tamanoGrupo4, string BuscarGrupo4){
    int inf=0, supe=tamanoGrupo4, mit=0, indice=0;
    bool band=false;
    while(inf<=supe){
        mit=(inf+supe)/2;
        if(nombresGrupo4[mit]==BuscarGrupo4){
            band=true;
            break;
        }else{
            if(nombresGrupo4[mit]>BuscarGrupo4){
                supe=mit-1;
            }else{
                inf=mit+1;
            }
        }
    }
    if (band==false){
        indice=-1;
    }else{
        indice=mit;
    }
    return indice;
}
int B_Secuencial_CI_Psw_Grupo4(string cedulaPswGrupo4[], int tamanoGrupo4, string BuscarGrupo4){
    int i, indice;
    bool band=false;
    i=0;
    while ((band==false) && (i<tamanoGrupo4)){
        if (cedulaPswGrupo4[i]==BuscarGrupo4){
            band=true;
        }
        i++;
    }
    if (band==false){
        indice=-3;
    }else{
        indice=i-1;
    }
    return indice;
}

int B_Secuencial_AgenciaProv_Grupo4(string agenciaRegistroCivilGrupo4[], int tamanoGrupo4, string BuscarGrupo4){
    int i, indice;
    bool band=false;
    i=0;
    while ((band==false) && (i<tamanoGrupo4)){
        if (agenciaRegistroCivilGrupo4[i]==BuscarGrupo4){
            band=true;
        }
        i++;
    }
    if (band==false){
        indice=-3;
    }else{
        indice=i-1;
    }
    return indice;
}


/*
string O_BurbujaGrupo4(string Grupo4[], int tamanoGrupo4){
    string aux;
    for(int i=0 ; i<tamanoGrupo4 ; i++){
        for(int j=0 ; j<tamanoGrupo4-1 ; j++){
            if(Grupo4[j]>Grupo4[j+1]){
                aux=Grupo4[j];
                Grupo4[j]=Grupo4[j+1];
                Grupo4[j+1]=aux;
            }
        }
    }
    return aux;
}
*/



#endif // L3ORDENAMIENTOS_BUSQUEDAS_H_INCLUDED
