#include <iostream>
#include <cstdlib>
#include <ctime>
#include<locale>

using namespace std;

// Variables globales
int opcion;
int N;
int* arreglo1 = NULL;
int* arreglo2 = NULL;

// Rutinas utiles

void generarArreglos(int* arreglo1, int* arreglo2, int N) {
	for (int i = 0; i < N; ++i) {
		arreglo1[i] = rand() % 20 + 11;
		arreglo2[i] = rand() % 20 + 11;
	}
}

void mostrarArreglos(int* arreglo1, int* arreglo2, int N) {
	cout << "Arreglo 1: ";
	for (int i = 0; i < N; ++i) {
		cout << arreglo1[i] << " ";
	}
	cout << endl;

	cout << "Arreglo 2: ";
	for (int i = 0; i < N; ++i) {
		cout << arreglo2[i] << " ";
	}
	cout << endl;
}

void mostrarElementosComunes(int* arreglo1, int* arreglo2, int N) {
	cout << "Elementos comunes: ";
	cout << endl;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (arreglo1[i] == arreglo2[j]) {
				cout << arreglo1[i] << " ";
				break;
			}
		}
	}
	cout << endl;
}

void mostrarArregloSuma(int* arreglo1, int* arreglo2, int N) {
	int* arregloSuma = new int[N];
	for (int i = 0; i < N; ++i) {
		arregloSuma[i] = arreglo1[i] + arreglo2[i];
	}

	cout << "Arreglo suma: ";
	for (int i = 0; i < N; ++i) {
		cout << arregloSuma[i] << " ";
	}
	cout << endl;
}

// Rutinas del programa

void menu() {
	cout << "====================" << endl;
	cout << "TRABAJO CON ARREGLOS" << endl;
	cout << "Menú de opciones" << endl;
	cout << "====================" << endl;
	cout << "1. Generar arreglos" << endl;
	cout << "2. Mostrar arreglos" << endl;
	cout << "3. Mostrar elementos comunes" << endl;
	cout << "4. Mostrar el arreglo suma" << endl;
	cout << "5. Salir" << endl;
	cout << "=====================" << endl;
	cout << "Opción: "; cin >> opcion;
	cout << endl;
}

void menu1() {
	cout << "Ingrese el valor de N: "; cin >> N;
	cout << endl;
	arreglo1 = new int[N];
	arreglo2 = new int[N];
	generarArreglos(arreglo1, arreglo2, N);
	cout << "Arreglos generados correctamente" << endl;
	cout << endl;
}

void menu2() {
	if (arreglo1 && arreglo2) {
		mostrarArreglos(arreglo1, arreglo2, N);
	}
	else {
		cout << "Primero debes generar los arreglos." << endl;
		cout << endl;
	}
}

void menu3() {
	if (arreglo1 && arreglo2) {
		mostrarElementosComunes(arreglo1, arreglo2, N);
	}
	else {
		cout << "Primero debes generar los arreglos." << endl;
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "");

	do {
		menu();
		switch (opcion) {
		case 1: menu1(); break;
		case 2: menu2(); break;
		case 3: menu3(); break;
		case 4:
			if (arreglo1 && arreglo2) {
				mostrarArregloSuma(arreglo1, arreglo2, N);
			}
			else {
				cout << "Primero debes generar los arreglos." << endl;
				cout << endl;
			}
			break;
		case 5:
			cout << "Saliendo del programa..." << endl;
			cout << endl;
			break;
		default:
			cout << "Opción inválida. Inténtalo nuevamente." << endl;
			break;
		}
	} while (opcion != 5);

	delete[] arreglo1;
	delete[] arreglo2;

	return 0;
}