#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//Variables
	int n, cont;
	//Entrada
	cout << "Verifique si el numero es primo, inserte numero: ";
	cin >> n;
	
	// Proceso
	cont = 0;
	for(unsigned i = 1; i <= n; i++){
		if(n%i == 0){
			cont++;
		}
	}
	
	//Salida
	if(cont == 2)
		cout << "Es primo";
	else
		cout << "No es primo";
		
	return 0;
}
