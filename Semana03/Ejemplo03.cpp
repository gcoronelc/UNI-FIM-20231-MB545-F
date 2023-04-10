/*
Enunciado:
Mostrar los "n" primeros terminos de la serie: 
3,9,27,81,243
Tambien se debe mostrar la suma.
*/

#include <iostream>
#include <cmath>
#include <locale>
#include <sstream>
using namespace std;

int main(){
	
	//Variables
	int n, suma; //Declarar variables
	stringstream serie;
	// Lectura
	cout << "Inserte el valor de n: ";
	cin >> n;
	
	// Proceso
	suma = 0;
	serie << "Serie: ";
	for(unsigned i = 1; i <= n; i++){
		int t = pow(3,i);
		serie << t << " ";
		suma += t;
	}
	//Salida
	cout << serie.str() << "\n";
	cout << "La suma es: " << suma << "\n";
	return 0;
}






