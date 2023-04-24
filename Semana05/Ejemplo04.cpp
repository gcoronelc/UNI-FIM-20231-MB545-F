/*
Desarrollar las siguientes funciones:
- Función fnMcd: Calcula el MCD de 2 numeros enteros.
- Función fnMcm: Calcula el MCM de 2 números enteros.
*/
#include <iostream> 
#include <cmath>
#include <vector>

using namespace std;

//Creditos: Gabriel Davila
int fnMcd(int m,int n){
	// Variable
	int mcd;
	// Proceso
	while(m!=n){
		if(m>n) m=m-n;
		else n=n-m;
	}
	mcd=m;
	// Reporte
	return mcd;
}

//Creditos: Aldonate José
int fnMcm(int m,int n){
	// Variable
	int mcm;
	// Proceso
	mcm=(m*n)/fnMcd(m, n);
	// Reporte
	return mcm;
}

// Creditos: Ricardo Roman
int fnMcd2(int a,int b){
	//Variable
	vector<int> m;
	//Proceso
	for(unsigned i = 1; i <= min(a,b);i++){
		if(a % i + b % i == 0){
		m.push_back(i);
		}
	}
	//Salida
	return m.back();
}

// Creditos: Ricardo Roman
int fnMcm2(int a, int b){
	return a * b / fnMcd2(a,b);
}


// Creditos: Ricardo Roman y Profe
int fnMcd3(int a,int b){
	//Variable
	int mcd;
	//Proceso
	mcd = 1;
	for(unsigned i = 1; i <= min(a,b);i++){
		if(a % i + b % i == 0){
		 	mcd = i;
		}
	}
	//Salida
	return mcd;
}

int main() {
    cout<<"MCD: "<<fnMcd(15,20)<<endl; 
    cout<<"MCM: "<<fnMcm(15,20)<<endl;
    
    cout<<"MCD 2: "<<fnMcd3(15,20)<<endl; 
    cout<<"MCM 2: "<<fnMcm2(15,20)<<endl;
	return 0;
}
