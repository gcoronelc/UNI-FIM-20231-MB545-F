#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Libreria2023.h"
using namespace std;

class Proyecto3{
	
	private:
	
	struct Sueldo{
		int id = 0;
		int tipo = 0;
		int horasxdia = 0;
		int dias = 0;;
		int hijos = 0;
		double ingresos = 0;
		double bono1 = 0;
		double bono2 = 0;
		double neto = 0;
	};
	
	vector<Sueldo> lista;
	int contEmplTipo1 = 0;
	int contEmplTipo2 = 0;
	int contEmplTipo3 = 0;
	double importePlanilla = 0.0;
	double sueldoPromedio = 0.0;
	
	double calcularIngreso(Sueldo  o){
		double pagoHora = 0;
		pagoHora = (o.tipo==1)?150.0:pagoHora;
		pagoHora = (o.tipo==2)?120.0:pagoHora;
		pagoHora = (o.tipo==3)?100.0:pagoHora;
		double ingresos = pagoHora * o.horasxdia * o.dias;
		return ingresos;
	}
	
		
	public:
	
	int cargarArchivo(string nombArchivo){
		// Variable
		ifstream archivo;
		string texto;
		int n=1;
		// Abrir el archivo en modo lectura
		archivo.open(nombArchivo,ios::in);
		// Validar
		if(archivo.fail()){
			return -1;
		}
		// Reporte desde el archivo
		while(!archivo.eof()){
			getline(archivo,texto);
			if(n==1){
				n = 0;
				continue;
			}
			vector<string> rec = split(texto,'|');
			Sueldo obj;
			obj.id = stoi(rec[0]);
			obj.tipo = stoi(rec[1]);
			obj.horasxdia = stoi(rec[2]);
			obj.dias = stoi(rec[3]);
			obj.hijos = stoi(rec[4]);
			lista.push_back(obj);
		}
		// Cerrar el archivo
		archivo.close();
		// Fin
		return 1;
	}
	
	int procesarDatos(){
		cout << "Datos procesados\n";
		// Grabar archivo
		for(int i=0;i<lista.size();i++){
			lista[i] = calcularIngreso(lista[i]);
		}
		return 1;
	}
	
	int crearReporte(string nombArchivo){
		// Variable
		ofstream archivo;
		// Crea y abre el archivo
		archivo.open(nombArchivo, ios::out);
		// Validar
		if (archivo.fail()) {
			return -1;
		}
		// Grabar archivo
		archivo << "ID|TIPO|HORASXDIA|DIAS|HIJOS|INGRESOS|BONO1|BONO2|NETO\n";
		for(Sueldo o: lista){
			archivo << o.id << "|" << o.tipo << "|" << o.horasxdia;
			archivo << "|" << o.dias << "|" << o.hijos << "|";
			archivo << o.ingresos << "|" << o.bono1 << "|";
			archivo << o.bono2 << "|" << o.neto << "\n"; 
		}
		
		// Cerrar el archivo
		archivo.close();
		return 1;
	}
	
};
