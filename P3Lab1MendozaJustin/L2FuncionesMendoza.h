#ifndef L2FUNCIONESMENDOZA_H_INCLUDED
#define L2FUNCIONESMENDOZA_H_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include <algorithm>
using namespace std;
void Longitud_Mendoza();
void Concatenar_Mendoza();
void ComparacionMendoza();
void ConversionMendoza();
void InversionMendoza();
void SubCadenasMendoza();
void BuscarCadenasMendoza();

string opSiNoGrupo5;
void Longitud_Mendoza(){
    setlocale(LC_ALL,"");
    string nom1Mendoza, nom2Mendoza;
    char apelllidosMendoza[100];
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cin.ignore();
    cout << "INGRESA LOS APELLIDOS:" << endl;
    cin.getline(apelllidosMendoza,100);
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> .size(); .length(); //PARA EL TAMAÑO DE CARACTERES (string) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> VAR1.SIZE()" << endl;
    cout << "El tamaño del nombre 1 '"<< nom1Mendoza <<"' es: " << nom1Mendoza.size() << endl;
    cout << "El tamaño del nombre 2 '"<< nom2Mendoza <<"' es: " << nom2Mendoza.size() << endl;
    cout << "\nUTILIZA FUNCION -> VAR2.LENGTH()" << endl;
    cout << "El tamaño del nombre 1 '"<< nom1Mendoza <<"' es: " << nom1Mendoza.length() << endl;
    cout << "El tamaño del nombre 2 '"<< nom2Mendoza <<"' es: " << nom2Mendoza.length() << endl;
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> strlen(VAR1) //PARA EL TAMAÑO DE CARACTERES (char) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> STRLEN(VAR)" << endl;
    cout << "El tamaño de los apellidos '"<< apelllidosMendoza <<"' es: " << strlen(apelllidosMendoza) << endl;
    cout << "\n¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        Longitud_Mendoza();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
void Concatenar_Mendoza(){
    setlocale(LC_ALL,"");
    string nom1Mendoza, nom2Mendoza,espacio2=" ";
    char ape1Mendoza[100], ape2Mendoza[100];;
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cin.ignore();
    cout << "INGRESA EL APELLIDO 1:" << endl;
    cin.getline(ape1Mendoza,100);
    cout << "INGRESA EL APELLIDO 2:" << endl;
    cin.getline(ape2Mendoza,100);
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> VAR1.append(); //PARA UNIR CARACTERES (string) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> VAR1.APPEND()" << endl;
    nom1Mendoza.append(espacio2);
    cout << "El NOMBRE1 Y NOMBRE 2 CONTENADO:" << nom1Mendoza.append(nom2Mendoza) << endl;
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> strcat(VAR1,VAR2); //PARA UNIR CARACTERES (char) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> STRCAT(VAR1,VAR2)" << endl;
    cout << "El APELLIDO Y APELLIDO 2 CONTENADO:" << strcat(strcat(ape1Mendoza, " "), ape2Mendoza) << endl;
    cout << "\n¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        Concatenar_Mendoza();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
void ComparacionMendoza(){
    setlocale(LC_ALL,"");
    string nom1Mendoza, nom2Mendoza, opSiNoGrupo5;
    char ape1Mendoza[100], ape2Mendoza[100];;
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cin.ignore();
    cout << "INGRESA EL APELLIDO 1:" << endl;
    cin.getline(ape1Mendoza,100);
    cout << "INGRESA EL APELLIDO 2:" << endl;
    cin.getline(ape2Mendoza,100);
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> VAR1.compare(VAR2); //PARA COMPARAR CARACTERES (string) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> VAR1.COMPARE(VAR2)" << endl;
    if(nom1Mendoza.compare(nom2Mendoza)==0){
        cout << "Los nombres '" << nom1Mendoza << "' y '" << nom2Mendoza << "' son iguales" << endl;
    }else{
        cout << "Los nombres '" << nom1Mendoza << "' y '" << nom2Mendoza << "' no son iguales" << endl;
    }
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> strcmp(VAR1,VAR2); //PARA COMPARAR CARACTERES (char) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> STRCMP(VAR1,VAR2)" << endl;
    if(strcmp(ape1Mendoza,ape2Mendoza)==0){
        cout << "Los apellidos '" << ape1Mendoza << "' y '" << ape2Mendoza << "' son iguales" << endl;
    }else{
        cout << "Los apellidos '" << ape1Mendoza << "' y '" << ape2Mendoza << "' no son iguales" << endl;
    }
    cout << "\n¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        ComparacionMendoza();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
void ConversionMendoza(){
    char num1_C_Mendoza[100], num2_C_Mendoza[100];
    string num1_S_Mendoza, num2_S_Mendoza;
    float num1_F_Mendoza, num2_F_Mendoza;//atof();
    int num1_I_Mendoza , num2_I_Mendoza;//atoi();
    cout << "\nINGRESO DE DATOS TIPO STRING" << endl;
    cout << "INGRESA LA CANTIDAD ENTERA #1: " << endl;
    cin >> num1_S_Mendoza;
    cin.ignore();
    cout << "INGRESA LA CANTIDAD REAL #2: " << endl;
    getline(cin,num2_S_Mendoza);
    cout << "\nINGRESO DE DATOS TIPO CHAR" << endl;
    cout << "INGRESA LA CANTIDAD ENTERA #1: " << endl;
    cin >> num1_C_Mendoza;
    cin.ignore();
    cout << "INGRESA LA CANTIDAD REAL #2: " << endl;
    cin.getline(num2_C_Mendoza,100);
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> entero - stoi(VAR1); real - stof(VAR2) //PARA CONVERTIR CARACTERES A NUMERICOS (string) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> stoi(); - stof()" << endl;
    num1_I_Mendoza = stoi(num1_S_Mendoza);
    num1_F_Mendoza = stof(num2_S_Mendoza);
    cout << "Conversion de caracter string a entero son 'stoi(VAR1)'  = " << num1_I_Mendoza << endl;
    cout << "Conversion de caracter string a real son 'stof(VAR2)'  = " << num1_F_Mendoza << endl;
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> entero - atoi(VAR1); real - atof(VAR2) //PARA CONVERTIR CARACTERES A NUMERICOS (char) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> atoi(); - atof()" << endl;
    num2_I_Mendoza = atoi(num1_C_Mendoza);
    num2_F_Mendoza = atof(num2_C_Mendoza);
    cout << "Conversion de caracter char a entero son 'atoi(gMendoza)'  = " << num2_I_Mendoza << endl;
    cout << "Conversion de caracter char a real son 'atof(hMendoza)'  = " << num2_F_Mendoza << endl;
    cout << "\n¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        ConversionMendoza();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
void InversionMendoza(){
    setlocale(LC_ALL,"");
    string nom1Mendoza, nom2Mendoza, opSiNoGrupo5;
    char ape1Mendoza[100], ape2Mendoza[100];;
    cout << "INGRESA EL NOMBRE 1:" << endl;
    cin>>nom1Mendoza;
    cout << "INGRESA EL NOMBRE 2:" << endl;
    cin>>nom2Mendoza;
    cout << "INGRESA EL APELLIDO 1:" << endl;
    cin >> ape1Mendoza;
    cout << "INGRESA EL APELLIDO 2:" << endl;
    cin >> ape2Mendoza;
    nom1Mendoza.append(" ");
    nom1Mendoza.append(nom2Mendoza);
    strcat(strcat(ape1Mendoza," "),ape2Mendoza);
    cout << "\nNOMBRES Y APELLIDOS" << endl;
    cout << "1.-  " << nom1Mendoza << endl;
    cout << "2.-  " << ape1Mendoza << endl;
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> reverse(VAR1.begin(), VAR2.end()); //PARA INVERTIR CARACTERES (string) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> REVERSE(VAR1.BEIN(), VAR2.END())" << endl;
    reverse(nom1Mendoza.begin(),nom1Mendoza.end());
    cout << "\nNOMBRES INVERIDOS : " << nom1Mendoza << endl;
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> strrev(VAR1); //PARA INVERTIR CARACTERES (char) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> STRERV(VAR1)" << endl;
    strrev(ape1Mendoza);
    cout << "\nAPELLIDOS INVERIDOS : " << ape1Mendoza << endl;
    cout << "\n¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        InversionMendoza();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
void SubCadenasMendoza(){
    string textoMendoza1, subtextoMendoza1;
    char textoMendoza2[100], subtextoMendoza2[100];
    int ini1Mendoza, ini2Mendoza, fin1Mendoza, fin2Mendoza;
    cin.ignore();
    cout << "INGRESAR UN TEXTO DE 15 A 50 CARACTERES: [string]" << endl;
    getline(cin,textoMendoza1);
    while(textoMendoza1.length()<15 || textoMendoza1.length()>50){
        cin.ignore();
        cout << "VUELVE A INGRESAR UN TEXTO DE 15 A 50 CARACTERES: [string]" << endl;
        getline(cin,textoMendoza1);
    }
    cin.ignore();
    cout << "INGRESAR UN TEXTO DE 15 A 50 CARACTERES: [char]" << endl;
    cin.getline(textoMendoza2,100);
    while(strlen(textoMendoza2)<15 || strlen(textoMendoza2)>50){
        cin.ignore();
        cout << "VUELVE A INGRESAR UN TEXTO DE 15 A 30 CARACTERES: [char]" << endl;
        cin.getline(textoMendoza2,100);
    }
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> VAR1.substr(#inicio,#fin) //PARA SACAR ELEMENTOS DE UNA CADENA DE  CARACTERES (string) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> VAR1.substr(#INICIO,#FIN)" << endl;
    cout << "INGRESA EL INICION DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR: [0 - " << textoMendoza1.length() << "]" << endl;
    cin >> ini1Mendoza;
    while(ini1Mendoza<0 || ini1Mendoza>=textoMendoza1.size()){
        cout << "VUELVE A INGRESA EL INICION DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR:[0 - " << textoMendoza1.length() << "]" << endl;
        cin >> ini1Mendoza;
    }
    cout << "INGRESA EL FINAL DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR: [0 - " << textoMendoza1.length() << "]" << endl;
    cin >> fin1Mendoza;
    while(fin1Mendoza<0 || fin1Mendoza>=textoMendoza1.size() || fin1Mendoza==ini1Mendoza){
        cout << "VUELVE A INGRESA EL FINAL DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR: [0 - " << textoMendoza1.length() << "]" << endl;
        cin >> fin1Mendoza;
    }
    subtextoMendoza1=textoMendoza1.substr(ini1Mendoza, fin1Mendoza);
    cout << "\nCADENA DE TEXTO ORIGINAL" << endl;
    cout << textoMendoza1 << endl;
    cout << "\nSUB CADENA DEL TEXTO ORIGINAL " << endl;
    cout << subtextoMendoza1 << endl;
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> strncpy(VAR2,&VAR1[#INICIO],#FIN) //PARA SACAR ELEMENTOS DE UNA CADENA DE  CARACTERES (char) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> STRNCPY(VAR2,&VAR1[#INICIO],#FIN)" << endl;
    cout << "INGRESA EL INICION DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR: [0 - " << strlen(textoMendoza2)<< "]" << endl;
    cin >> ini2Mendoza;
    while(ini2Mendoza<0 && ini2Mendoza>strlen(textoMendoza2)){
        cout << "VUELVE A INGRESA EL INICION DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR: [0 - " << strlen(textoMendoza2)<< "]" << endl;
        cin >> ini2Mendoza;
    }
    cout << "INGRESA EL FINAL DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR: [0 - " << strlen(textoMendoza2)<< "]" << endl;
    cin >> fin2Mendoza;
    while(fin2Mendoza<0 || fin2Mendoza>strlen(textoMendoza2) || fin2Mendoza==ini2Mendoza  ){
        cout << "VUELVE A INGRESA EL FINAL DE LA CADENA DE CARACTERES DEL TEXTO A COPIAR: [0 - " << strlen(textoMendoza2)<< "]" << endl;
        cin >> fin2Mendoza;
    }
    strncpy(subtextoMendoza2,&textoMendoza2[ini2Mendoza],fin2Mendoza);
    subtextoMendoza2[fin2Mendoza] = '\0';
    cout << "\nCADENA DE TEXTO ORIGINAL" << endl;
    cout << textoMendoza2 << endl;
    cout << "\nSUB CADENA DEL TEXTO ORIGINAL " << endl;
    cout << subtextoMendoza2 << endl;
    cout << "\n¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        SubCadenasMendoza();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}
void BuscarCadenasMendoza(){
    //busqueda char
    char texto1Mendoza[100], palabra1Mendoza[20];
    string texto2Mendoza, palabra2Mendoza;
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> VAR1.find(VAR2); - VAR1.rfind(VAR2); //PARA BUSCAR UNA SUBCADENA EN UNA CADENA DE CARACTERES (string) " << endl;
    cout << "===============================================================" << endl;
    cout << "Ingresa un parrafo de texto: " << endl;
    cin.ignore();
    getline(cin, texto2Mendoza,'\n');
    cout << "Ingresa una palabra para buscar la posicion: " << endl;
    getline(cin, palabra2Mendoza,'\n');
    cout << "\nUTILIZA FUNCION -> VAR1.find(VAR2);" << endl;
    // Usando find()
    size_t posMendoza = texto2Mendoza.find(palabra2Mendoza);
    if(posMendoza != string::npos){
        cout << "La palabra '" << palabra2Mendoza << "' está en la posición: " << posMendoza << '\n';
    }else{
        cout << "Subcadena no encontrada\n";
    }
    cout << "\nUTILIZA FUNCION -> VAR1.rfind(VAR2);" << endl;
    // Usando rfind()
    posMendoza = texto2Mendoza.rfind(palabra2Mendoza);
    if(posMendoza != string::npos){
        cout << "La palabra '" << palabra2Mendoza << "' está en la posición: " << posMendoza << '\n';
    }else{
        cout << "Subcadena no encontrada\n";
    }
    cout << "\n===============================================================" << endl;
    cout << "FUNCION -> strstr(VAR1,VAR2) //PARA BUSCAR UNA SUBCADENA EN UNA CADENA DE CARACTERES (char) " << endl;
    cout << "===============================================================" << endl;
    cout << "\nUTILIZA FUNCION -> STRSTR(VAR1,VAR2)" << endl;
    cin.ignore();
    cout << "Ingresa un parrafo de texto: " << endl;
    cin.getline(texto1Mendoza, 100,'\n');
    cout << "Ingresa una palabra para buscar la posicion: " << endl;
    cin.getline(palabra1Mendoza, 20,'\n');
    char *buscarMendoza = strstr(texto1Mendoza, palabra1Mendoza);
    if (buscarMendoza) {
        cout << "La palabra '" << palabra1Mendoza << "' está en la posición: " << buscarMendoza << '\n';
    } else {
        cout << "Subcadena no encontrada." << endl;
    }
    cout << "\n¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
    cin >> opSiNoGrupo5;
    while(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no" && opSiNoGrupo5!="SI"  && opSiNoGrupo5!="Si" && opSiNoGrupo5!="si" ){
        cout << "\nRESPUESTA ERRONEA.. VUELVE A INTENTALO [SI O NO]" << endl;
        cout << "¿DESEA VOLVER A REALIZAR EL PROCESO? [SI O NO]" << endl;
        cin >> opSiNoGrupo5;
    }
    if(opSiNoGrupo5!="NO" && opSiNoGrupo5!="No" && opSiNoGrupo5!="no"){
        BuscarCadenasMendoza();
    }else{
        cout << "\n=========================================" << endl;
        cout << "\t  REGRESASTE.." << endl;
        cout << "=========================================\n" << endl;
    }
}


#endif // L2FUNCIONESMENDOZA_H_INCLUDED
