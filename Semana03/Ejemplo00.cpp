/*
Desarrollar un programa que les numeros enteros
positivos, la lectura finaliza cuando se ingresa 
un numero negativo o cero.
Luego debe mostrar el promedio de los numeros leidos.
*/
#include <iostream> 
#include <sstream>
#include <locale> 
using namespace std; 
int main() {
	setlocale(LC_ALL,"spanish");
	// Variables
	int num, prom, cantNum, suma;
	stringstream datos;
	// Lectura
	cantNum = 0;
	suma = 0;
	do{
		cout << "Numero: "; cin >> num;
		if(num>0){
			cantNum++;
			suma += num;
		}
	}while(num > 0);
	// Proceso
	prom = suma / cantNum;
	// Reporte
	printf("El promedio es: %d \n",prom);
	return 0;
}
