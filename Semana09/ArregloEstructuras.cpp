#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

struct Estudiante{
	string nombre;
	int nota1;
	int nota2;
	int promedio;
	string condicion;
};

int main(){
	
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	wstring strW = L"ARREGLO DE ESTRUCTURAS";
	//SetConsoleTitle(strW.c_str());
	
	
	// Variables
	ofstream archivo;
	string nombArchivo = "notas1.txt";
	Estudiante lista[100];
	int contador;
	char rpta;
	
	
	// Inicializar variables
	contador = 0;
	
	
	// Leer estudiantes
	do{
		
		cout << endl;
		cout << "ESTUDIANTE " << (contador + 1) << endl;
		cout << "=================================" << endl;
		cout << "Nombre: "; cin >> lista[contador].nombre;
		cout << "Nota 1: "; cin >> lista[contador].nota1;
		cout << "Nota 2: "; cin >> lista[contador].nota2;
		contador++;
		
		cout << endl;
		cout << "Hay otro estudiante (S/N): "; cin >> rpta; 
		
	} while( rpta == 'S' || rpta == 's');
	
	
	// Proceso
	for(int i=0; i<contador; i++){
		lista[i].promedio = (lista[i].nota1 + lista[i].nota2) / 2;
		if (lista[i].promedio>=10) lista[i].condicion="aprobado";
		else lista[i].condicion="desaprobado";
	}
	
	// Reporte
	cout << endl;
	cout << "PROGRAMACION ORIENTADA A OBJETOS " << endl;
	cout << "Nro \tNombre \tNota 1 \tNota 2 \tPromedio \tCondicion " << endl;
	cout << "-------------------------------------------------------------" << endl;
	for(int i=0; i<contador; i++){
		cout << i+1 << "\t";
		cout << lista[i].nombre << "\t";
		cout << lista[i].nota1 << "\t";
		cout << lista[i].nota2 << "\t";
		cout << lista[i].promedio << "\t\t";
		cout << lista[i].condicion << endl;
	}
	
	// Reporte al archivos NOTAS1.TXT
	archivo.open(nombArchivo, ios::out);
	archivo << endl;
	archivo << "PROGRAMACION ORIENTADA A OBJETOS " << endl;
	archivo << "Nro \tNombre \tNota 1 \tNota 2 \tPromedio \tCondicion " << endl;
	archivo << "-------------------------------------------------------------" << endl;
	for(int i=0; i<contador; i++){
		archivo << i+1 << "\t";
		archivo << lista[i].nombre << "\t";
		archivo << lista[i].nota1 << "\t";
		archivo << lista[i].nota2 << "\t";
		archivo << lista[i].promedio << "\t\t";
		archivo << lista[i].condicion << endl;
	}
	archivo.close();
	
	
	// Reporte a un archivo CSV: NOTAS.CSV
	archivo.open("Notas.CSV", ios::out);
	archivo << "Nro;Nombre;Nota 1;Nota 2;Promedio;Condicion" << endl;
	for(int i=0; i<contador; i++){
		archivo << i+1 << ";";
		archivo << lista[i].nombre << ";";
		archivo << lista[i].nota1 << ";";
		archivo << lista[i].nota2 << ";";
		archivo << lista[i].promedio << ";";
		archivo << lista[i].condicion << endl;
	}
	archivo.close();
	
	
	return 0;
	
}
