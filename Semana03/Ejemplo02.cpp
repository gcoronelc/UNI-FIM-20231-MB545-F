/*
Enunciado:
Mostrar los "n" primeros terminos de la serie: 
3,9,27,81,243
Tambien se debe mostrar la suma.
*/

#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main(){
	
	//Entrada
	int n, suma; //Declarar variables
	
	cout << "Inserte el valor de n: " << endl;
	cin >> n;
	
	//Proceso
	suma = 0;
	cout << "Serie: ";
	for(unsigned i = 1; i <= n; i++){
		int t = pow(3,i);
		cout << t << " ";
		suma += t;
	}
	cout << endl;
	//Salida
	printf("La suma es: %d", suma);
}






