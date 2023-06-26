/*
En este programa se ve la herencia en un ejemplo sencillo.
La clase hija puede crear sus propios metodos ampliando la funcionalidad.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Clase1{
	
	private:
		
		string nombre;
	
	public:
		
		Clase1(){
			this->nombre = "Gustavo Coronel";
		}
		
		void setNombre(string nombre){
			this->nombre = nombre;
		}		
		
		int sumar(int n1, int n2){
			return (n1+n2);
		}
		
		void mostrarDatos(){
			cout << "Nombre: " << nombre << endl;
		}
	
};

class Clase2 : public Clase1{
	
	private:
		
		int edad;
	
	public:
		
		Clase2(){
		}
		
		Clase2(string nombre, int edad){
			this->setNombre(nombre);
			this->edad = edad;
		}
		
		int producto(int n1, int n2){
			return (n1*n2);
		}
		
		void mostrarDatos(){
			Clase1::mostrarDatos(); 
			cout << "Edad: " << edad << endl;
		}
	
};

int main(){

	Clase2 objeto("Abigail",24);
	
	cout << "6 + 7 = " << objeto.sumar(6,7) << endl;
	cout << "6 * 7 = " << objeto.producto(6,7) << endl;
	objeto.mostrarDatos();
	
	system("pause");
	return 1;
}
