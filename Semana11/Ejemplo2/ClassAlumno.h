#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Libreria2023.h"
using namespace std;

class Alumno{
	
	private:
		
		int id;
		string nombre;
		int nota1;
		int nota2;
		int prom;
	
	public:
		
		// constructor por defecto
		Alumno(){
			this->id = 1000;
			this->nombre = "Gustavo";
			this->nota1 = 20;
			this->nota2 = 18;
			this->prom = 19;
		}
	
	
		// Constructuor con parametros
		Alumno(int id, string nombre, int nota1, int nota2){
			this->id = id;
			this->nombre = nombre;
			this->nota1 = nota1;
			this->nota2 = nota2;
			this->prom = 0;
		}
		
		// Calcular promedio
		void calcularPromedio(){
			int pr = (this->nota1+this->nota2)/2;
			this->prom = pr;
		}
	
		// Reporte del registro
		void reporte(){
			cout << endl;
			cout << "ID: " << this->id << endl;
			cout << "NOMBRE: " << this->nombre << endl;
			cout << "NOTA 1: " << this->nota1 << endl;
			cout << "NOTA 2: " << this->nota2 << endl;
			cout << "PROMEDIO: " << this->prom << endl;
		}
		
		// Cargar registro
		void cargarRegistro(string regTexto,char flag){
			vector<string> arreglo = split(regTexto,flag);
			this->id = stoi(arreglo[0]);
			this->nombre = arreglo[1];
			this->nota1 = stoi(arreglo[2]);
			this->nota2 = stoi(arreglo[3]);
			this->prom = 0.0;
		}
		
		// Genera el texto para el reporte
		string textoReporte(){
			string texto = "";
			texto += to_string(this->id) + "|";
			texto += this->nombre + "|";
			texto += to_string(this->nota1)  + "|";
			texto += to_string(this->nota2)  + "|";
			texto += to_string(this->prom);
			return texto;
		}
		
};
