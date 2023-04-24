/*
Desarrollar una función que permita elevar un número a una potencia.
La base y el exponente deben ser números enteros.
Solo con estructuras de control.
*/
#include <iostream> 
using namespace std;

// Creditos:Abigaíl Castañeda 
long potencia1(int base, int exp){
	// Variable
	long potencia;
	// proceso
	potencia=1;
	for (int i=1; i<=exp; i++){
		potencia*=base;
	}
	// reporte
	return potencia;
}
// Creditos:Luis Varas 
long potencia2(int base, int exp){
	/*if (exp == 0){
		return 1;
	}
	else{
		return base*potencia2(base,exp-1);
	}
	*/
	return (exp == 0)?1:base * potencia2(base,exp-1);
}




int main() {
	cout<<"Potencia: "<<potencia1(2,4)<<endl;
	cout<<"Potencia: "<<potencia2(2,4)<<endl;
	return 0;
}
