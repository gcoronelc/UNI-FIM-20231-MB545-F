#include <iostream> 
using namespace std;

int main() { 
	// Configuración 
	setlocale(LC_ALL, "Spanish");
	// Variables
	int notas[] = {16,17,12,18,20,14};
	int longitud, temp, promedio;
	// Longitud del arreglo
	longitud = sizeof(notas) / sizeof(notas[0]);
	// Ordenar el arreglo
	for (int i = 0; i < longitud - 1; i++) {
		for (int j = i + 1; j < longitud; j++) {
			if (notas[i] < notas[j]) {
				temp = notas[i];
				notas[i] = notas[j];
				notas[j] = temp;
			}
		}
	}
	// Promedio
	promedio = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
	// Mostrar arreglo: Acceso tipo coleccion
	for(int num: notas){
		cout << num << " ";
	}
	cout << endl;
	cout << "Promedio: " << promedio << "\n";
	return 0;	
}
