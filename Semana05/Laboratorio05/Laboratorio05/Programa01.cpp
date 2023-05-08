#include <iostream>
using namespace std;

long factorial1(int n) {
	if (n == 0) return 1;
	else return n * factorial1(n - 1);
}

long factorial2(int n) {
	// Variables
	long f;
	int i;
	// Proceso
	for (i = 1, f = 1; i <= n; f *= i++);
	// Reporte
	return f;
}

long factorial3(int n) {
	// Variables
	long f;
	// Proceso
	f = 1;
	for (int i = 2; i <= n; i++) {
		f *= i;
	}
	// Reporte
	return f;
}

int main01() {
	// Variables
	int n;
	long f1, f2, f3;
	// Lectura
	n = 5;
	// Proceso
	f1 = factorial1(n);
	f2 = factorial2(n);
	f3 = factorial3(n);
	// Reporte
	cout << "Factorial de " << n << " es " << f1 << endl;
	cout << "Factorial de " << n << " es " << f2 << endl;
	cout << "Factorial de " << n << " es " << f3 << endl;
	return 0;
}