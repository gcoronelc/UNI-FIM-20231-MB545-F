#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "ClassAlumno.h"
using namespace std;

int n;
Alumno arreglo[100];
string archivoOrigen = "Datos.txt";
string archivoDestino = "Reporte.txt";

// Carga el archivo en el arreglo
void cargarArchivo(){
	// Variable
	ifstream archivo;
	string texto;
	// Proceso
	n = 0;
	archivo.open(archivoOrigen,ios::in);
	while(!archivo.eof()){
		getline(archivo,texto);
		arreglo[n].cargarRegistro(texto,'|');
		n++;
	}
	archivo.close();
}

// Proceso calcular promedio
void calcularPromedio(){
	for(int i=0; i<n;i++){
		arreglo[i].calcularPromedio();
	}
}

// Reporte
void reporte(){
	// Variable
	ofstream archivo;
	string texto;
	// Proceso
	archivo.open(archivoDestino,ios::out);
	for(int i=0; i<n;i++){
		texto = arreglo[i].textoReporte();
		archivo << texto << "\n";
	}
	archivo.close();
}


int main(){
	cargarArchivo();
	calcularPromedio();
	reporte();	
}
