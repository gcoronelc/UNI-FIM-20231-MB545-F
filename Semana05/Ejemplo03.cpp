/*
Desarrollar una función que permita encontrar el termino N de la serie de Fibonacci.
*/
#include <iostream> 
using namespace std;

long fibonacci(int n){
	// Variables
	long fibo, a, b, c;
	// Proceso
	a = 1;
	b = 1;
	fibo = 1;
	for(int i=3; i <= n; i++){
		c = a + b;
		fibo = c;
		a = b;
		b = c;
	}
	// Reporte
	return fibo;
}

long fib(int n){
	return (n <= 2)?1:fib(n-1)+fib(n-2);
}


int main() {
	for(int i = 1; i<=10; i++){
		cout << fib(i) << "\t" << fibonacci(i) << endl;
	}
	
	return 0;
}
