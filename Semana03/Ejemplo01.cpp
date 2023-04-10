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
	do{
		cout << "Número " << (cantNum + 1) << ": ";
		cin >> num;
		if(num>0){
			cantNum++;
			datos << " " << num;
		}
	}while(num > 0);
	// Proceso
	suma = 0;
	for(int i = 1; i <= cantNum; i++){
		datos >> num;
		suma += num;
	}
	prom = suma/cantNum;
	// Reporte
	printf("El promedio es: %d \n",prom);
	return 0;
}
