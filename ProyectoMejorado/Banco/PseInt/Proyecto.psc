Algoritmo Proyecto
	
	Definir id Como Entero;
	id<-3;
	Definir Usuarios Como Caracter;
	Dimension Usuarios[id];
	
	Definir i,j,k Como Entero;
	i<-1;
	j<-2;
	k<-1;
	Caratula;
	
FinAlgoritmo

SubAlgoritmo Caratula
	
	Definir i Como Entero;
	Definir j Como Entero;
	Definir k Como Entero;
	Definir encabezado Como Caracter;
	Dimension encabezado[2,2,2];
	encabezado[1,1,1]<-"      Univesidad de las fuerzas armadad ESPE-SS";
	encabezado[1,1,2]<-"Integrantes:   Corina Acosta, Jilmar Gonzales, Justin Mendoza";
	encabezado[1,2,1]<-"Carrera:       Ingenieria de tecnologias de la informacion";
	encabezado[1,2,2]<-"Materia:       Fundamentos de Programcion";
	encabezado[2,1,1]<-"Docente:       Ing. Veronica Martinez";
	encabezado[2,1,2]<-"Tema:          Elaboracion de sistema de banco finacieron";
	encabezado[2,2,1]<-"Fecha:         09-07-23";
	encabezado[2,2,2]<-"Periodo:       PREGRADO S-I MAY23 - SEP23";
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Para j<-1 Hasta 2 Con Paso 1 Hacer
			Para k<-1 Hasta 2 Con Paso 1 Hacer
				Escribir encabezado[i,j,k];
			Fin Para
		Fin Para
	Fin Para
	
	Menu;
	
FinSubAlgoritmo

SubAlgoritmo Menu
	
	Definir opc Como Entero;
	
	Escribir "===============================================";
	Escribir "     Banco Financiero";
	Escribir "===============================================";
	Escribir "===============================================";
	Escribir "1. Iniciar sesion";
	Escribir "2. Registrar nuevo Usuario";
	Escribir "3. Usuario Registrados";
	Escribir "4. Id Registrados";
	Escribir "5. Buscar un usuario";
	Escribir "6. Salir";
	Escribir "===============================================";
	Escribir "Elige una opcion";
	Leer opc;
	
	Segun opc Hacer
		Caso 1:
			Escribir "";
		Caso 2:
			Escribir "";
		Caso 3:
			Escribir "";
		Caso 4:
			Escribir "";
		Caso 5:
			Escribir "";
		Caso 6:
			Escribir "==========================================";
			Escribir "Vuelva pronto";
			Escribir "==========================================";
		De Otro Modo:
			Escribir "Elija una opcion correcta";
			Menu;
	Fin Segun
FinSubAlgoritmo

SubAlgoritmo Registro
	
	Definir usuariosR, id Como Entero;
	usuariosR<-0;
	id<-3;
	
	Si usuariosR>=id Entonces
		Escribir "====================================";
		Escribir "No se puede registrar mas usuarios";
		Escribir "====================================";
	SiNo
		Definir n_usuario, n_id, psw Como Caracter;
		Escribir "Ingrese su nuevo usuario";
		Leer n_usuario;
		
		
		Para i<-1 Hasta Longitud(Usuarios) Con Paso 1 Hacer
			Si Usuarios[i]==n_usuario Entonces
				acciones_por_verdadero
			SiNo
				acciones_por_falso
			Fin Si
		Fin Para
		
		
		
		
		
	Fin Si
FinSubAlgoritmo
	