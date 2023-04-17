#include <iostream> 
#include <sstream>
using namespace std;

int main() { 
	// Matriz
	int ventas[][4] = {
		{600,780,345,980},
		{760,890,785,860},
		{656,723,877,687},
		{803,689,798,768}
	}; 
	stringstream reporte;
	int suma;
	// Suma de cada fila
	for(int i=0; i < 4; i++){
		suma = 0;
		for(int j=0; j< 4; j++){
			suma += ventas[i][j];
		}
		reporte << "Fila " << i << ": " << suma << endl;
	}
	// Reporte
	cout << reporte.str();	
	return 0;
}
