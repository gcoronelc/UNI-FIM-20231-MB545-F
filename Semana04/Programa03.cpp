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
	// Suma de cada fila: Credito => Porras y Varas
	int num = 0;
	for(int i=0; i < 4; i++){
		for(int j=0; j< 4; j++){
			num = ventas[i][j]+num;
		}
		cout << "Fila " << i +1<< ": " << num << endl;
		num=0;
	}
	
	return 0;
}
