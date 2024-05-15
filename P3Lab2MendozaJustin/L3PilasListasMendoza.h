#ifndef L3PILASLISTASMENDOZA_H_INCLUDED
#define L3PILASLISTASMENDOZA_H_INCLUDED
#include <iostream>
#include <fstream>

using namespace std;
struct NodoPilaMendoza{
    string NomMendoza;
    NodoPilaMendoza *next;
};
struct NodoColaCedeno {
    string productos;
    NodoColaCedeno *siguiente;
};
struct NodoMendoza{
    string fecha;
    NodoMendoza *siguiente;
};

void imprimirDatosPersonas();
void CrearArchivosMendoza(int numEstudiantes);
void LecturaArchivosMendoza(int numEstudiantes);
void InsertarElementoPilaMendoza();
void InsertarPilaMendoza(NodoPilaMendoza *&, string n);
void EliminarPilaMendoza(NodoPilaMendoza *&, string &n);
void EliminarElementoPilaMendoza();
void MostrarElementoPilaMendoza();
NodoPilaMendoza *pilaMendoza=NULL;
int numProductos=0;
NodoColaCedeno *frente=NULL;
NodoColaCedeno *fin=NULL;
NodoColaCedeno *colaCedeno=NULL;
string productosMendoza, nombresMendoza0    ;
string Fecha();
NodoMendoza *lista = NULL;
NodoMendoza *aux1 = NULL;
void Insertar_ListaMendoza(NodoMendoza *&, string n);
bool Bus_ListasMendoza(NodoMendoza *, string elemento);
void eliminarListaMendoza(NodoMendoza *&);
void eliminarNodoMendoza(NodoMendoza *&, string n);
void InsertarFechaListaMendoza();
void MostrarFechasListaMendoza();
void BuscarFechaListaMendoza();
void EliminarFechasListaMendoza();
void EliminarFechaListaMendoza();
string fechasMendoza;
void InsertarElementoPilaMendoza(){
    int numNombres;
    cout << "INGRESA LA CANTIDAD DE NOMBRES QUE DESEAS INSERTAR A LA PILA: [1-10]: " << endl;
    cin >> numNombres;
    while(numNombres<1 || numNombres>10){
        cout << "VUELVE A INGRESAR LA CANTIDAD DE NOMBRES QUE DESEAS INSERTAR A LA PILA: [1-10]: " << endl;
        cin >> numNombres;
    }
    cin.ignore();
    for(int i=0; i<numNombres; i++){
        cout << "INGRESA NOS NOMBRES DEL USUARIO #" << i+1 << ": " << endl;
        getline(cin,nombresMendoza,'\n');
        InsertarPilaMendoza(pilaMendoza, nombresMendoza);
    }
}
void EliminarElementoPilaMendoza(){
    int i=1;
    cout << "\nELIMINAR ELEMENTOS DE LA PILAS.." << endl;
    while(pilaMendoza != NULL){
        EliminarPilaMendoza(pilaMendoza, nombresMendoza);
        if(pilaMendoza != NULL){
            cout << "["<< i <<"]" << nombresMendoza << ", ";
        }else{
            cout << "["<< i <<"]" << nombresMendoza << ". ";
        }
        i++;
    }
}
void MostrarElementoPilaMendoza(){
    NodoPilaMendoza *aux = pilaMendoza;
    int i=1;
    if (aux == NULL) {
        cout << "\nNo hay elementos para mostrar, la pila esta vacia.";
    } else {
        cout << "\nMostrando todos los elementos de la pila: ";
        while (aux != NULL) {
            cout << "[" << i << "]" <<aux->NomMendoza;
            if (aux->next != NULL) {
                cout << ", ";
            }else{
                cout << ". ";
            }
            aux = aux->next;
            i++;
        }
    }
    cout << "\n" << endl;
}
void InsertarPilaMendoza(NodoPilaMendoza *&pilaMendoza, string n){
    NodoPilaMendoza *nuevaPilaMendoza = new NodoPilaMendoza();
    nuevaPilaMendoza->NomMendoza=n;
    nuevaPilaMendoza->next = pilaMendoza;
    pilaMendoza = nuevaPilaMendoza;
    cout << "El usuario '" << n << "' ha sido agregado correctamente a la pila.." << endl;
}
void EliminarPilaMendoza(NodoPilaMendoza *&pilaMendoza, string &n){
    NodoPilaMendoza *aux= pilaMendoza;
    n = aux->NomMendoza;
    pilaMendoza = aux->next;
    //cout << "El usuario '" << n << "' ha sido eliminado correctamente a la pila.." << endl;
    delete aux;
}
void Insertar_ListaMendoza(NodoMendoza *&lista, string n){
    NodoMendoza *nuevo_nodo = new NodoMendoza();
    nuevo_nodo->fecha = n;
    NodoMendoza *aux1 = lista;
    NodoMendoza *aux2;
    while((aux1 != NULL)&&(aux1->fecha < n)){
        aux2 = aux1;
        aux1 = aux1 -> siguiente;
    }
    if(lista == aux1){
        lista = nuevo_nodo;
    } else{
        aux2 -> siguiente = nuevo_nodo;
    }
    nuevo_nodo -> siguiente = aux1;
    cout << "\n\tElemento " << n << " Insertado a lista correctamente\n" << endl;
}
bool Bus_ListasMendoza(NodoMendoza *lista, string elemento){
    NodoMendoza* aux1 = lista;
    while (aux1 != NULL) {
        if (aux1->fecha == elemento) {
            return true;
        }
        aux1 = aux1->siguiente;
    }
    return false;
}
void eliminarListaMendoza(NodoMendoza *& lista){
    while (lista != NULL) {
        NodoMendoza *aux1 = lista;
        lista = lista -> siguiente;
        delete aux1;
    }
}
void eliminarNodoMendoza(NodoMendoza *&lista, string n){
    if(lista != NULL){
        NodoMendoza *aux_Borrar;
        NodoMendoza *anterior = NULL;
        aux_Borrar = lista;
        while((aux_Borrar != NULL)&&(aux_Borrar->fecha != n)){
            anterior = aux_Borrar;
            aux_Borrar = aux_Borrar -> siguiente;
        }
        if(aux_Borrar == NULL){
            cout << "El elemento no existe.." << endl;
        } else if(anterior == NULL){
            lista = lista -> siguiente;
            delete aux_Borrar;
        }
    }
}
void InsertarFechaListaMendoza(){
    int j;
    cout << "Ingrese la cantidad de fechas que  desee ingresar: " << endl;
    cin >> j;
    while(j<1 || j>10){
        cout << "Volver a ingresar la cantidad de fechas que desee ingresar: " << endl;
        cin >> j;
    }
    for(int i = 0; i < j ; i++){
        cout << "\nDigite un numero: " << i+1 << endl;
        fechasMendoza=Fecha();
        Insertar_ListaMendoza(lista, fechasMendoza);
    }
}
void MostrarFechasListaMendoza(){
    aux1 = lista;
    if (aux1 == NULL) {
        cout << "\nNo hay elementos para mostrar, la lista esta vacia.";
    } else {
        cout << "\nMostrando todos los elementos de la lista: ";
        while (aux1 != NULL) {
            cout << aux1->fecha;
            if (aux1->siguiente != NULL) {
                cout << ", ";
            }else{
                cout << ".\n";
            }
            aux1 = aux1->siguiente;
        }
    }
}
void BuscarFechaListaMendoza(){
    aux1 = lista;
    if (aux1 == NULL) {
        cout << "\nNo hay elementos para buscar, la lista esta vacia." << endl;
    }else{
        string elemento;
        cout << "\nDigite la fecha que desea buscar: ";
        elemento = Fecha();
        if (Bus_ListasMendoza(aux1, elemento)) {
            cout << "\nLa fecha '" << elemento << "' se encuentra en la lista.\n" << endl;
        } else {
            cout << "\nLa fecha '" << elemento << "' no se encuentra en la lista.\n" << endl;
        }
    }
}
void EliminarFechasListaMendoza(){
    aux1 = lista;
    int i=1;
    if (aux1 != NULL) {
        eliminarListaMendoza(lista);
        cout << "\nTodos los elementos de la lista han sido eliminados.\n";
    }else{
        cout << "\nNo hay elementos para eliminar, la lista esta vacia\n"  << endl;
    }
}
void EliminarFechaListaMendoza(){
    aux1 = lista;
    if (aux1 == NULL) {
        cout << "\nNo hay elemento para eliminar, la lista esta vacia"  << endl;
    }else{
        //char elemento[4];
        string elemento;
        cout << "\nDigite el elemento que desea eliminar: ";
        elemento = Fecha();
        cout << "Fecha: '" << elemento << "' eliminada de la lista.." << endl;
        eliminarNodoMendoza(lista, elemento);
    }
}
string Fecha(){
    int dia, mes, anio;
    string aa, aa2, mm, dd, formaFecha;
    cout << "Ingresa el año: [2024]" << endl;
    cin >> anio;
    while(anio!=2024){
        cout << "AÑO INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa el año: [2024]" << endl;
        cin >> anio;
    }
    cout << "Ingresa un mes: [1 al 12]" << endl;
    cin >> mes;
    while(mes<1 || mes>12){
        cout << "MES INGRESADO ERRONEO..VUELVE A INGRESAR" << endl;
        cout << "Ingresa un mes: [1 al 12]" << endl;
        cin >> mes;
    }
    cout << "Ingresa un dia: [1 al 31]" << endl;
    cin >> dia;
    while(dia<1 || dia>31){
        cout << "Ingresa un dia: [1 al 31]" << endl;
        cin >> dia;
    }
    aa = to_string(anio);
    mm = to_string(mes);
    dd = to_string(dia);
    formaFecha.append(dd);
    formaFecha.append("/");
    formaFecha.append(mm);
    formaFecha.append("/");
    aa2 = aa.substr(2,3);
    formaFecha.append(aa2);
    return formaFecha;
}




#endif // L3PILASLISTASMENDOZA_H_INCLUDED
