#include <iostream> 
using namespace std; 
int main() { 
	// Configuración 
	setlocale(LC_ALL, "Spanish");
	// Variables
	int notas[] = {16,17,12,18,20,14};
	int longitud;
	// Longitud del arreglo
	longitud = sizeof(notas) / sizeof(notas[0]);
	// Mostrar arreglo: Acceso indexado
	for(int i=0;i<longitud;i++){
		cout << notas[i] << " ";
	}
	cout << endl;
	// Mostrar arreglo: Acceso tipo coleccion
	for(int num: notas){
		cout << num << " ";
	}
	cout << endl;
	
	return 0;	
}
	
