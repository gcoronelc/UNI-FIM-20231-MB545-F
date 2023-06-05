#include <iostream>
#include "ClassMate.h";
using namespace std;


int main(){
	
	
	for(int i=1; i<=10; i++){
		long f = Mate::factorial(i);
		cout << "Factorial de " << i << " es " << f << endl;
	}
}
