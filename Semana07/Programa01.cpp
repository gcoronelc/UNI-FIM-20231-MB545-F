#include <iostream>
using namespace std;

// Variables globales
int** matriz = NULL;
int filas, columnas;

/*
** Rutinas de proposito general
*/

void liberarMemoria(){
	if(matriz!=NULL){
		for( int i=0; i<filas; i++ )
  			delete[] matriz[i];
		delete[] matriz;
	}	
}

int leerEnteroPositivo(string etiqueta){
	// Variables
	int valor;
	// Proceso
	do{
		cout << etiqueta; cin >> valor;
		if(valor <= 0){
			cout << "Error en el dato ingresado.!!!";
		}
	}while(valor<=0);
	// Retorno
	return valor;
}

void mostrarMatriz(){
	cout << "Matriz Generada" << endl;
	cout << "===============================\n";
	for( int i=0; i<filas; i++ ){
		cout << "Fila " << i << ": ";
		for( int j=0; j<columnas; j++ )
			cout << matriz[i][j] << "\t";
		cout << endl;
	}
	cout << "===============================\n";
}



/*
** Rutinas del menu
*/

// mostrarMenu
void mostrarMenu(){
	system("cls");
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"1.- Generar Matriz"<<endl;
	cout<<"2.- Suma de filas"<<endl;
	cout<<"3.- Suma de columnas"<<endl;
	cout<<"4.- Suma diagonal superior"<<endl;
	cout<<"5.- Suma diagonal inferior"<<endl;
	cout<<"6.- Salir"<<endl;
}

int leerOpcionMenu(){
	// Variables
	int ope;
	// Proceso
	do{
		cout << "Opcion: "; cin >> ope;
		if(ope<1 || ope>6){
			cout << "Error en el dato ingresado.!!!";
		}
	}while(ope<1 || ope>6);
	// Retorno
	return ope;
}

// Menu 1: Crear arreglo
void menu01(){
	// Letura de datos
	system("cls");
	cout<<"LECTURA DE DATOS"<<endl;
	cout<<"==========================================="<<endl;
	filas = leerEnteroPositivo("Filas: ");
	columnas = leerEnteroPositivo("Columnas: ");
	// Crear la matriz
	liberarMemoria();
	matriz = new int*[filas];
	for( int i=0; i<filas; i++ )
  		matriz[i] = new int[columnas];
	// Inicializar la matriz
	for( int i=0; i<filas; i++ )
		for( int j=0; j<columnas; j++ )
			matriz[i][j] = rand() % 40 + 10;
	// Reporte
	mostrarMatriz();
}

// Menu 2
void menu02(){
	// Variables
	int* sumaFilas=new int[filas];
	// Proceso
	for( int i=0; i<filas; i++ ){
		sumaFilas[i]=0;
		for( int j=0; j<columnas; j++ )
			sumaFilas[i] += matriz[i][j];
	}
	// Reporte
	mostrarMatriz(); 
	for( int i=0; i<filas; i++ ){
		cout<<"Fila "<<i<<": "<<sumaFilas[i]<<endl;
	}
}

// Menu 3
void menu03(){
	// Variables
	int* sumaColumnas=new int[columnas];
	// Proceso
	for( int j=0; j<columnas; j++ ){
		sumaColumnas[j]=0;
		for( int i=0; i<filas; i++ )
			sumaColumnas[j] += matriz[i][j];
	}
	// Reporte
	mostrarMatriz(); 
	for( int i=0; i<columnas; i++ ){
		cout<<"Columna "<<i<<": "<<sumaColumnas[i]<<endl;
	}
}


// Menu 4
void menu04(){
	// Validación
	if(filas!=columnas || filas==0 || columnas==0){
		cout<<"¡La matriz debe ser cuadrada!"<<endl;
		return;
	}
	// Variables
	int suma=0;
	// Proceso
	for( int i=0; i<filas; i++ ){
		for( int j=0; j<columnas; j++ )
			if(i<=j)
				suma += matriz[i][j];
	}
	// Reporte
	mostrarMatriz(); 
	cout<<"Suma: "<<suma<<endl;
}


// Menu 5
void menu05(){
	// Validación
	if(filas!=columnas || filas==0 || columnas==0){
		cout<<"¡La matriz debe ser cuadrada!"<<endl;
		return;
	}
	// Variables
	int suma=0;
	// Proceso
	for( int i=0; i<filas; i++ ){
		for( int j=0; j<columnas; j++ )
			if(j<=i)
				suma += matriz[i][j];
	}
	// Reporte
	mostrarMatriz(); 
	cout<<"Suma: "<<suma<<endl;
}

// Menu 6
void menu06(){
	liberarMemoria();
	cout << "Chau" << endl;
}

/*
** Funcion principal
*/

int main(){
	// Variables del programa
	int op;
	// Control del menu
	do{
		// El menú
		mostrarMenu();
		op=leerOpcionMenu();
		// Procesar el menú
		switch(op){
			case 1: menu01(); break;
			case 2: menu02(); break;
			case 3: menu03(); break;
			case 4: menu04(); break;
			case 5: menu05(); break;
			case 6: menu06(); break;
		}
		// Pausa
		if(op!=6) system("pause");
	} while(op!=6);	
	// Fin
	return 0;
}
