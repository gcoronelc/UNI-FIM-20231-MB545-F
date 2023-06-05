#include <iostream>
using namespace std;

class Mate{
	
	private:
		
		Mate(){ // Constructor privado
		}
		
	public:
		
		static long factorial(int n){ // Metodo de clase
			if(n==0 || n==1) return 1;
			else return n * factorial(n-1);	
		}
		
};
