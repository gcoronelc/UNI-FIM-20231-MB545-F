// Creditos: Roman Ricardo

#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

// Variables globales

int n = 0;
int* m1 = NULL;
int* m2 = NULL;
int d;
int cd = 0;

// Rutinas de apoyo

void limpiarMemoria(){
	delete[] m1; m1 = NULL;
	delete[] m2; m2 = NULL;
}

int leerEntero(string etiqueta, int valorMin, int valorMax) {
	// Variables
	int valor;
	// Proceso
	do {
		cout << etiqueta; cin >> valor;
		if (valor<valorMin || valor>valorMax)
			cout << "Valor ingresado es incorrecto!!\n";
	} while (valor<valorMin || valor>valorMax);
	// Reporte
	return valor;
}

void mostrarArreglo(int* arreglo, string etiqueta) {
	cout << etiqueta;
	for (int i = 0; i < n; i++) {
		if (arreglo[i] == -1) break;
		cout << arreglo[i] << " ";
	}
	cout << "\n";
}

void agregarElemento(int* arreglo, int elemento) {
	for (int i = 0; i < n; i++) {
		if (arreglo[i] == elemento) break;
		if (arreglo[i] == -1) {
			arreglo[i] = elemento;
			break;
		}
	}
}

// RUTINAS DEL PROGRAMA 

void menu01() {
	// Limpiar menoria
	if (m1 != NULL) limpiarMemoria();
	// Lectura de datos
	cout << "OPCION 1: GENERAR ARREGLOS\n";
	n = leerEntero("Numero de elementos [5,30]: ", 5, 30);
	// Proceso
	m1 = new int[n];
	m2 = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		m1[i] = rand() % 20;
		m2[i] = rand() % 20;
	}
	// Reporte
	printf("Generados exitosamente\n");
	mostrarArreglo(m1, "Arreglo 1: ");
	mostrarArreglo(m2, "Arreglo 2: ");
}

void menu02() {
	cout << "OPCION 2: ARREGLOS GENERADOS\n";
	mostrarArreglo(m1, "Arreglo 1: ");
	mostrarArreglo(m2, "Arreglo 2: ");
}

void menu03() {
	// Crear el nuevo arreglo
	int* dsp = new int[n];
	for (int i = 0; i < n; i++) {
		dsp[i] = -1;
	}
	// Proceso
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (m1[i] == m2[j]) {
				agregarElemento(dsp, m1[i]);
			}
		}
	}
	if (dsp[0] == -1)
		cout << "\nNo hay elementos en comun...\n";
	else {
		mostrarArreglo(m1, "Arreglo 1: ");
		mostrarArreglo(m2, "Arreglo 2: ");
		mostrarArreglo(dsp, "Arreglo comun: ");
	}
	delete[] dsp;
	cout << endl;
}

void menu04() {
	int* sm = new int[n];
	for (int i = 0; i < n; i++) {
		sm[i] = m1[i] + m2[i];
		cout << sm[i] << " ";
	}
	cout << endl;
}

void menu() {
	system("cls");
	printf("Trabajando con arreglos\n");
	printf("Menu de opciones\n");
	printf("============================\n");
	printf("1.- Generar arreglos\n");
	printf("2.- Mostrar arreglos\n");
	printf("3.- Mostrar elementos comunes\n");
	printf("4.- Mostrar arreglo suma\n");
	printf("5.- Salir\n");
	printf("============================\n");
}

int main() {
	// Variables del programa
	int op;
	// Control del programa
	do {
		// Menu
		menu();
		op = leerEntero("Opcion: ",1,5);
		// Proceso del menu
		system("cls");
		switch (op)
		{
		case 1:
			menu01();
			break;
		case 2:
			menu02();
			break;
		case 3:
			menu03();
			break;
		case 4:
			menu04();
			break;
		case 5:
			cout << "\nFin del programa, nos vemos luego...\n";
			break;
		}
		system("pause");
	} while (op != 5);
	limpiarMemoria();
	return 0;
}