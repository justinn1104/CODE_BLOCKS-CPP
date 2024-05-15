#ifndef LIB1PORTADAMENU_H_INCLUDED
#define LIB1PORTADAMENU_H_INCLUDED
#include <iostream>
#include "Lib2AlgoritmosOB.h"

using namespace std;

const int id=10;   //Numero de Usuarios a registrar
string Usuarios[id];
string Cl[id];
string UsuariosB[id];
string ClB[id];
string Paswor[id];
char opc2;
int usu_e;
double Saldo[id];

void Encabezado();
void Menu();
void Registro();
void Usuario();
void UsuariosRe();
void ID_ordenadas();
void NomBuscar();
void Menu_B();
void Deposito(int usu_e);
void Retiro(int usu_e);
void Transferencia();
void SaldoA();

int B_Secuencial(string Usuarios[],string n_usuario,int usuariosR);
int B_Secuencial_Cl(string Cl[],string n_id,int usuariosR);
void O_Nombres(string UsuariosB[]);
void O_Id(string ClB[], int usuariosR);
void O_Id_S(string ClB[],int usuariosR);
int B_Binaria(string ClB[],int inicio, int fin, string Id);
int B_Secuencial_Banco(string Cl[],string id_e,int usuariosR);
int B_Secuencial_BancoT(string Cl[],string id_re,int usuariosR);



void Encabezado(){

    string caratula[2][2][2];
    caratula[0][0][0]="\tUnivesidad de las Fuerzas Armadad ESPE-SS";
    caratula[0][0][1]="\nIntegrantes: \tJilmar Goonzalez";
    caratula[0][1][0]="Carrera: \tIngenieria de Tecnologias de la Informacion";
    caratula[0][1][1]="Materia: \tFundamentos de Programcion";
    caratula[1][0][0]="Docente: \tIng. Veronica Martinez";
    caratula[1][0][1]="Tema: \t\tElaboracion de sistema de Banco, Busquedas, Ordenaciones";
    caratula[1][1][0]="Fecha: \t\t20-07-23";
    caratula[1][1][1]="Periodo: \tPREGRADO S-I MAY23 - SEP23";

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int k=0;k<2;k++){

                cout<<caratula[i][j][k]<<endl;
            }
        }
    }
    cout << "==============================================================\n" << endl;
    Menu();
}

void Menu(){

    int opc;
    cout << "\n============================================================\n" << endl;
    cout << "\tBanco Financiero"<<endl;
    cout << "\n============================================================" << endl;
    cout << "[1] Iniciar sesion"<<endl;
    cout << "[2] Registrar nuevo usuario"<<endl;
    cout << "[3] Usuarios registrados"<<endl;
    cout << "[4] Id Registradas"<<endl;
    cout << "[5] Buscar un Usuario"<<endl;
    cout << "[6] Salir"<<endl;
    cout << "============================================================\n" << endl;
    cout << "\nElege una opcion"<<endl;
    if(cin>>opc){
            switch(opc){
                case 1:
                    Usuario();
                    break;
                case 2:
                    Registro();
                    break;
                case 3:
                    UsuariosRe();
                    break;
                case 4:
                    ID_ordenadas();
                    break;
                case 5:
                    NomBuscar();
                    break;
                case 6:
                    cout << "\n============================================================" << endl;
                    cout << "\tVuelva Pronto"<<endl;
                    cout << "============================================================\n" << endl;
                    break;
                default:
                    cout << "\n============================================================" << endl;
                    cout << "\tElige una opcion correcta"<<endl;
                    cout << "============================================================\n" << endl;
                    Menu();
                    break;
            }
    }else{
        cout<<"Elige una opcion correcta\n"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        Menu();
    }

}

void Registro(){

    if(usuariosR>=id){
        cout << "\n============================================================" << endl;
        cout << "\tNo se pueden registrar mas usuarios." << endl;
        cout << "============================================================\n" << endl;
    }else{
        string n_usuario, n_id, psw;
        cout << "\n============================================================" << endl;
        bool u_valido=false;
        while(!u_valido){
            cout<<"\nIngrese su nuevo usuario"<<endl;
            cin>>n_usuario;
            if(n_usuario.length()>=4){
                u_valido=true;
            }else{
                cout<<"\nTu usuario debe tener almenos 4 caracteres"<<endl;
            }
        }
        int u_existente=B_Secuencial(Usuarios,n_usuario,usuariosR);
        do{
            if(u_existente!=-1){
                cout<<"\nEl usuario escrito ya existe"<<endl;
                cout<<"Intentelo de nuevo"<<endl;
                cout<<"\nIngrese su nuevo usuario"<<endl;
                cin >> n_usuario;
                u_existente = B_Secuencial(Usuarios, n_usuario, usuariosR);
            }
        }while(u_existente!=-1);
        bool id_valido=false;
        while(!id_valido){
            cout<<"\nNumero de ID"<<endl;
            cin>>n_id;
            if(n_id.length()==10){   //Tamano de Id modificar para no registrar un numero alto
                id_valido=true;
            }else{
                cout<<"\nTu numero de Id tiene 10 digitos "<<endl;
                cout<<"Intentelo de nuevo"<<endl;
            }
        }
        O_Id(ClB,usuariosR);
        int id_existente=B_Binaria(ClB,0,usuariosR-1,n_id);
        do{
            if(id_existente!=-1){
                cout<<"\nEl Id escrito ya existe"<<endl;
                cout<<"Intentelo de nuevo"<<endl;
                cout<<"\nIngrese su Numero de Id"<<endl;
                cin >> n_id;
                id_existente=B_Binaria(ClB,0,usuariosR-1,n_id);
            }
        }while(id_existente!=-1);
        bool psw_valido=false;
        while(!psw_valido){
            cout<<"\nEscriba su contrasena"<<endl;
            cin>>psw;
            if(psw.length()>=8){      //Tamaño de contraseña que tiene 8 digitos modificar si nesesita ser menor
                psw_valido=true;
            }else{
                cout<<"\nTu contrasena debe tener al menos 8 digitos"<<endl;
            }
        }
        UsuariosB[usuariosR]=n_usuario;
        Usuarios[usuariosR]=n_usuario;
        Paswor[usuariosR]=psw;
        Cl[usuariosR]=n_id;
        ClB[usuariosR]=n_id;
        usuariosR++;
        cout << "\n============================================================\n" << endl;
        cout << "\tSu registro ha sido todo un Exito\n"<<endl;
        cout << "============================================================\n" << endl;
    }
    cout << "\n============================================================" << endl;
    cout << "[1] Iniciar Sesion"<<endl;
    cout << "[2] Volver al Menu Principal"<<endl;
    cout << "[3] Salir"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!='1'&&opc2!='2'&&opc2!='3'){
        cout << "\n============================================================" << endl;
        cout << "[1] Iniciar Sesion"<<endl;
        cout << "[2] Volver al Menu Principal"<<endl;
        cout << "[3] Salir"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
    }
    if(opc2=='1'){
        Usuario();
    }
    if(opc2=='2'){
        Menu();
    }
    if(opc2=='3'){
        return;
    }
}

void Usuario(){

    cout<<""<<endl;
    string usuario,psw;
    cout << "\n============================================================" << endl;
    cout<<"\nIngrese su usuario"<<endl;
    cin>>usuario;
    cout<<"/nIngrese su Contrasena"<<endl;
    cin>>psw;
    bool usuarioencontrado=false;
    usu_e=-1;
    for(int i=0;i<id;i++){
        if(Usuarios[i]==usuario && Paswor[i]==psw){
        usuarioencontrado=true;
        usu_e=i;
        cout << "\n============================================================" << endl;
        cout << "\tBlienvenido a Menu de su Banco\n"<<endl;
        cout << "============================================================\n" << endl;
        Menu_B();
        }
    }
    if(!usuarioencontrado){
        cout << "\n============================================================" << endl;
        cout << "\tEl usuario o la contraseña son incorrectas\n"<<endl;
        cout << "============================================================\n" << endl;
        cout << "\n============================================================" << endl;
        cout << "[1] Volver a intentarlo"<<endl;
        cout << "[2] Registrar un nuevo usuario"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
        while(opc2!='1'&&opc2!='2'){
            cout << "\n============================================================" << endl;
            cout << "[1] Volver a intentarlo"<<endl;
            cout << "[2] Registrar un nuevo usuario"<<endl;
            cout << "============================================================\n" << endl;
            cin>>opc2;
        }
        if(opc2=='1'){
            Usuario();
        }
        if(opc2=='2'){
            Registro();
        }
    }
}

void UsuariosRe(){

    O_Nombres(UsuariosB);

    cout<<"\nLista de Los nombres de los Usuarios registrados\n"<<endl;

    for(int i=0;i<usuariosR;i++){
        cout<<" "<<UsuariosB[i]<<endl;
    }
    cout << "\n============================================================" << endl;
    cout << "[1] Volver al Menu Principal"<<endl;
    cout << "[2] Salir"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!='1'&&opc2!='2'){
        cout << "\n============================================================" << endl;
        cout << "[1] Volver al Menu Principal"<<endl;
        cout << "[2] Salir"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
    }
    if(opc2=='1'){
        Menu();
    }
    if(opc2=='2'){
        return;
    }
}

void ID_ordenadas(){

    O_Id_S(ClB,usuariosR);

    cout<<"\nIDs registradas en este banco\n"<<endl;

    for(int i=0;i<usuariosR;i++){
        cout<<" "<<ClB[i]<<endl;
    }
    cout << "\n============================================================" << endl;
    cout << "[1] Volver al Menu Principal"<<endl;
    cout << "[2] Salir"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!='1'&&opc2!='2'){
        cout << "\n============================================================" << endl;
        cout << "[1] Volver al Menu Principal"<<endl;
        cout << "[2] Salir"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
    }
    if(opc2=='1'){
        Menu();
    }
    if(opc2=='2'){
        return;
    }
}

void NomBuscar(){

    string n_id;
    cout<<"\nDesea buscar si tienes una cuenta en este Banco"<<endl;
    cout<<"\nDigite el numero de ID"<<endl;
    cin>>n_id;

    int busqueda=B_Secuencial_Cl(Cl,n_id,usuariosR);

    if(busqueda!=-1){
        cout<<"\nSi existe este usuario registrado en este Banco\n"<<endl;
        cout<<"Nombre: "<<Usuarios[busqueda]<<endl;
        cout<<"Cedula: "<<Cl[busqueda]<<endl;
    }else{
        cout<<"Este usuario no esta registrado"<<endl;
    }
    cout << "\n============================================================" << endl;
    cout << "[1] Volver al Menu Principal"<<endl;
    cout << "[2] Salir"<<endl;
    cout << "============================================================\n" << endl;
    cin>>opc2;
    while(opc2!='1'&&opc2!='2'){
        cout << "\n============================================================" << endl;
        cout << "[1] Volver al Menu Principal"<<endl;
        cout << "[2] Salir"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
    }
    if(opc2=='1'){
        Menu();
    }
    if(opc2=='2'){
        return;
    }
}

void Menu_B(){
    int opc;
    cout << "\n============================================================\n" << endl;
    cout << "\tMenu de Opciones de su Banco"<<endl;
    cout << "\n============================================================" << endl;
    cout << "[1] Depositar dinero"<<endl;
    cout << "[2] Retirar dinero"<<endl;
    cout << "[3] Consultar saldo"<<endl;
    cout << "[4] Transferencia"<<endl;
    cout << "[5] Volver al Menu Pincipal"<<endl;
    cout << "[6] Salir"<<endl;
    cout << "============================================================\n" << endl;
    cout << "\nEliga un opcion"<<endl;
    if(cin>>opc){
            switch(opc){
                case 1:
                    Deposito(usu_e);
                    break;
                case 2:
                    Retiro(usu_e);
                    break;
                case 3:
                    SaldoA();
                    break;
                case 4:
                    Transferencia();
                    break;
                case 5:
                    Menu();
                    break;
                case 6:
                    cout << "\n============================================================" << endl;
                    cout << "\tVuelva Pronto"<<endl;
                    cout << "============================================================\n" << endl;
                    break;
                default:
                    cout << "\n============================================================" << endl;
                    cout << "\tElige una opcion coreecta"<<endl;
                    cout << "============================================================\n" << endl;
                    Menu_B();
                    break;
            }

    }else{
        cout<<"Elija un opcion correcta"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        Menu_B();

    }
}

void Deposito(int usu_e){

    double dinero;
    cout<<"\nIngrese la Cantidad a depositar"<<endl;
    if(cin>>dinero){
        if(dinero>=0){
           Saldo[usu_e]+=dinero;
           cout<<"\nSu deposito se realizo con exito"<<endl;
           cout<<"Su saldo actual es: "<<Saldo[usu_e]<<" $"<<endl;


        }else{
            cout<<"La cantidad ingresada no es valida"<<endl;
            cout<<"Vuelva a ingresar una cantidad a depositar"<<endl;
            Deposito(usu_e);
        }
    }else{
        cout<<"Ingrese Datos numericos"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        Deposito(usu_e);
    }
    cout << "\n============================================================" << endl;
    cout << "[1] Volver al Menu del Usuario"<<endl;
    cout << "[2] Volver al Menu Principal"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!='1'&&opc2!='2'){
        cout << "\n============================================================" << endl;
        cout << "[1] Volver al Menu del Usuario"<<endl;
        cout << "[2] Volver al Menu Principal"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
    }
    if(opc2=='1'){
        Menu_B();
    }
    if(opc2=='2'){
        Menu();
    }
}


void Retiro(int usu_e){
    double dinero;

    cout<<"Ingrese el monto a retirar: "<<endl;
    if(cin>>dinero){
        if(dinero<=0){
            cout<<"\nLa cantidad ingresada es incorrecta."<<endl;
            Retiro(usu_e);
        }
        if(dinero>Saldo[usu_e]){
            cout<<"\nSaldo insuficiente para realizar el retiro.\n"<<endl;
            Menu_B();
        }
        Saldo[usu_e]-=dinero;
        cout<<"Su Retiro se realizo correctamente."<<endl;
        cout<<"Tu saldo actual es: "<<Saldo[usu_e]<<" $"<<endl;
    }else{
        cout<<"Ingrese Datos numericos"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        Retiro(usu_e);
    }
    cout << "\n============================================================" << endl;
    cout << "[1] Volver al Menu del Usuario"<<endl;
    cout << "[2] Volver al Menu Principal"<<endl;
    cout << "============================================================\n" << endl;
    cin >> opc2;
    while(opc2!='1'&&opc2!='2') {
        cout << "\n============================================================" << endl;
        cout << "[1] Volver al Menu del Usuario"<<endl;
        cout << "[2] Volver al Menu Principal"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
    }

    if(opc2=='1') {
        Menu_B();
    } else if(opc2=='2') {
        Menu();
    }
}

void SaldoA(){
    cout<<"\nUsuario: "<<Usuarios[usu_e]<<endl;
    cout<<"Cedula: "<<Cl[usu_e]<<endl;
    cout<<"Saldo actual:"<<Saldo[usu_e]<<" $"<<endl;
    cout << "\n============================================================" << endl;
    cout << "[1] Volver al Menu del Usuario"<<endl;
    cout << "[2] Volver al Menu Principal"<<endl;
    cout << "============================================================\n" << endl;
    cin>>opc2;
    while(opc2!='1'&&opc2!='2'){
        cout << "\n============================================================" << endl;
        cout << "[1] Volver al Menu del Usuario"<<endl;
        cout << "[2] Volver al Menu Principal"<<endl;
        cout << "============================================================\n" << endl;
        cin>>opc2;
    }
    if(opc2=='1'){
        Menu_B();
    }
    if(opc2=='2'){
        Menu();
    }
}

void Transferencia(){
    string id_e,id_re;
    double monto;
    cout << "\n============================================================" << endl;
    cout << "\tTransferencia"<<endl;
    cout << "============================================================\n" << endl;
    cout << "Ingresa tu ID "<<endl;
    cin >> id_e;
    cout << "Ingrese el ID del veneficiario: "<<endl;
    cin >> id_re;
    cout << "Ingrese el monto a transferir: ";
    cin >> monto;
    while(monto<=0){
        cout<<"La cantidad ingresada es Incorrecta"<<endl;
        cout<<"Ingrese el monto a transferir: ";
        cin>>monto;
    }

    int cedula_e=B_Secuencial_Cl(Cl,id_e,usuariosR);
    int cedula_re=B_Secuencial_Cl(Cl,id_re,usuariosR);

    if(cedula_e==-1){
        cout<<"\nTu Id es incorrecta."<<endl;
        cout<<"Vuelve a intentarlo\n"<<endl;
        Transferencia();

    }
    if(cedula_re==-1){
        cout<<"El ID veneficiario no existe en los usuarios registrados."<<endl;
        cout<<"Vuelve a intentarlo\n"<<endl;
        Transferencia();
    }
    double saldo_emisor=Saldo[cedula_e];
    double saldo_receptor=Saldo[cedula_re];
    if (monto>saldo_emisor){
        cout<<"\nTu saldo es insuficiente para realizar la transferencia."<<endl;
        return;
    }
    saldo_emisor-=monto;
    saldo_receptor+=monto;
    Saldo[cedula_e]=saldo_emisor;
    Saldo[cedula_re]=saldo_receptor;
    cout<<"\nTransferencia realizada correctamente."<<endl;
    cout<<"\nCuenta Beneficiaria: "<<id_re<<endl;
    cout<<"Cuenta Emisora: "<<id_e<<endl;
    cout<<"Tu Saldo actual es: "<<saldo_emisor<<" $"<<endl;





    cout<<"\n============================================================" << endl;
    cout << "[1] Volver al Menu del Usuario"<<endl;
    cout << "[2] Volver al Menu Principal"<<endl;
    cout << "============================================================\n" << endl;
    cin>>opc2;
    while(opc2!='1'&&opc2!='2'){
        cout << "\n============================================================" << endl;
        cout << "[1] Volver al Menu del Usuario"<<endl;
        cout << "[2] Volver al Menu Principal"<<endl;
        cout << "============================================================\n" << endl;
        cin >> opc2;
    }
    if(opc2=='1'){
        Menu_B();
    }
    if(opc2=='2'){
        Menu();
    }
}


#endif // LIB1PORTADAMENU_H_INCLUDED
