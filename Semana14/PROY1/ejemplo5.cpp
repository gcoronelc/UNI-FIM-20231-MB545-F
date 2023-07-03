#include <iostream>
#include "Logica2.h"

using namespace std;

int main(){
	float temperatura = 0;
	cout << LogicaProyecto1<float>::convCelToFah(temperatura) << endl;
	
	double temperatura2 = 0;
	cout << LogicaProyecto1<double>::convCelToFah(temperatura2) << endl;
	return 0;
}
