#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Bono.h"

using namespace std;

int n;
int p1=0;
int p2=0;
int p3=0;
int imp=0;
int y;
int pagoProm;
Bono arreglo[100];
string archivoOrigen = "Datos.txt";
string archivoDestino = "Report.txt";

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
		if(n>0){
			arreglo[n].cargarRegistro(texto,'|');
		}
		n++;
	}
	archivo.close();
}

void proceso(){
	for(int i=1; i<n;i++){
		switch(arreglo[i].tipo){
			case 1:p1++;break;
			case 2:p2++;break;
			case 3:p3++;break;
		}	
		arreglo[i].procesar();
		imp+=arreglo[i].neto;
	}
	pagoProm=imp/(n-1);
	for(int i=1; i<n;i++){
		int M=0;
		if(arreglo[i].hora>M){
			M=arreglo[i].hora;
			y=i;
		}
	}
	arreglo[y].bono2=500;
}

// Reporte
void reporte(){
	
	ofstream archivo;
	string texto;
	
	archivo.open(archivoDestino,ios::out);
	archivo<<"ID|TIPO|HORASXDIA|DIAS|HIJOS|INGRESOS|BONO1|BONO2|NETO"<<endl;
	for(int i=1; i<n;i++){
		texto = arreglo[i].textoReporte();
		archivo << texto << endl;
	}
	archivo<<"RESUMEN"<<endl;
	archivo<<"Cantidad de empleado de tipo 1: "<<p1<<endl;
	archivo<<"Cantidad de empleado de tipo 2: "<<p2<<endl;
	archivo<<"Cantidad de empleado de tipo 3: "<<p3<<endl;
	archivo<<"El importe total de la planilla: "<<imp<<endl;
	archivo<<"El pago promedio por empleado: "<<pagoProm<<endl;
	archivo.close();
}

int main(){
	cargarArchivo();
	proceso();
	reporte();
	cout<<"Listo"<<endl;
	return 0;
}
