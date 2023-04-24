/*
Desarrollar una función para calcular el factorial de N.
*/
#include <iostream> 
using namespace std;

// Creditos:Cristhian Porras 
long factorial1(int n){
	// Variable
	long fact;
	// proceso
	fact=1;
	for (int i=1; i<=n; i++){
		fact*=i;
	}
	// reporte
	return fact;
}

// Creditos:Ricardo Roman
long factorial2(int n){
	return (n == 0)?1:n * factorial2(n-1);
}

int main() {
	cout<<"Factorial de 5: "<<factorial1(15)<<endl;
	cout<<"Factorial de 5: "<<factorial2(15)<<endl;
	return 0;
}

