#include <iostream>
#include "LogicaProyecto2.h"

using namespace std;

int main(){
	float respuesta;
	
	LogicaProyecto2 obj;
	obj.generaDatos();
	obj.resolverArea();
	
	cout << "Base: " <<obj.getBase()<< endl;
	cout << "Altura: " <<obj.getAltura()<< endl;
	cout << "Inserte su respuesta: ";cin>>respuesta;
	cout << "Area: " <<obj.getArea()<< endl;
	bool resp=obj.validarRespuesta(respuesta);
	cout << "Validacion: " << boolalpha << resp << endl;
	return 0;
}
