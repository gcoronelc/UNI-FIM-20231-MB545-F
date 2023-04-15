#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main() {
	// Vriables
	int cantNumeros, numero;
	int sumaPares = 0;
	int sumaImpares = 0;
	stringstream datos, pares, impares;	
	// Lectura de datos
	cout << "Ingrese el numero de datos: "; cin >> cantNumeros;
	// Generar numeros
	//srand((unsigned)time(NULL));
	for (int i = 1; i <= cantNumeros; i++) {
		numero = rand() % 16 + 15;
		datos << " " << numero;
	}
	// Proceso
	sumaPares = 0;
	sumaImpares = 0;
	pares << "Numeros pares: ";
	impares << "Numeros impares: ";
	for (int i = 1; i <= cantNumeros; i++) {
		datos >> numero;
		if (numero % 2 == 0) {
			pares << " " << numero;
			sumaPares += numero;
		} else{
			impares << " " << numero;
			sumaImpares += numero;
		}
	}
	// Reporte
	cout << "\n";
	cout << pares.str() << "\n";
	cout << "Suma de pares: " << sumaPares << "\n";
	cout << impares.str() << "\n";
	cout << "Suma de impares: " << sumaImpares << "\n";
	return 0;
}
