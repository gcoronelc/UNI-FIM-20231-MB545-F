#include <iostream>
#include <cmath>
#include <locale>
#include <sstream>
using namespace std;

int main(){
	
	//Variables
	int n, fact; //Declarar variables
	stringstream serie;
	// Lectura
	cout << "Inserte el valor de n: ";
	cin >> n;
	//Validación
	if(n<0){
		cout <<"no existe factorial.\n";
		return 0;
	}
	// Proceso
	fact = 1;
	while(n>0){
		fact=fact*n;
		n=n-1;
	}
	//Salida
	cout << "El factorial es: " << fact << "\n";
	return 0;
}
