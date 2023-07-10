#include <iostream>
using namespace std;

class CDemo1{
	
	static int nota;
	
	public:
		
		CDemo1(int);
			
		void show(string);
		
};

int CDemo1::nota = 20;

CDemo1::CDemo1(int _nota){
	nota = _nota;
}

void CDemo1::show(string mensage){
	cout << this->nota << endl;
	cout << mensage;
}


int main(){
	CDemo1 obj1(100);
	obj1.show("Hola todos.\n");
	
	CDemo1 obj2(200);
	obj1.show("Hola todos.\n");
	return 0;
}
