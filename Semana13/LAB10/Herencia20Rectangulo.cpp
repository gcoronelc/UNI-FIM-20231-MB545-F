/*
En este programa se ilustra la sobre-escritura de metodos.
La clase Cuadrado hereda de la clase Cuadrilatero y sobre-escribe 
los métodos calcularPerimetro y calculaArea.
La clase Rectangulo hereda de la clase Cuadrilatero 
y sobre-escribe los métodos calcularPerimetro y calculaArea.
La clase TrapecioRectangulo hereda de la clase Cuadrilatero 
y sobre-escribe los métodos calcularPerimetro y calculaArea.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Cuadrilatero{
	public:
		Cuadrilatero(){
		}
		virtual float calcularPerimetro() = 0; // método abstracto
		virtual float calculaArea() = 0; // método abstracta
};

class Cuadrado : public Cuadrilatero{
	private:
		
		float lado;
	
	public:
		Cuadrado(float _lado){
			lado = _lado;
		}
		float getLado(){
			return lado;
		}
		float calcularPerimetro(){
			return 4*lado;
		}
		float calculaArea(){
			return lado * lado;
		}
};

class Rectangulo : public Cuadrilatero{
	private:
		
		float largo;
		float ancho;
	
	public:
		Rectangulo(float _largo,float _ancho){
			largo = _largo;
			ancho = _ancho;
		}
		float getLargo(){
			return largo;
		}
		float getAncho(){
			return ancho;
		}
		float calcularPerimetro(){
			return 2*largo+2*ancho;
		}
		float calculaArea(){
			return largo * ancho;
		}
};
int main(){
	
	// Ejemplo del rectangulo
	cout << "\nEJEMPLO DEL RECTANGULO\n";
	Rectangulo obj1(5,6);
	cout << "Largo: " << obj1.getLargo() << endl;
	cout << "Ancho: " << obj1.getAncho() << endl;
	cout << "Perimetro: " << obj1.calcularPerimetro() << endl;
	cout << "Area: " << obj1.calculaArea() << endl;
	
	Cuadrilatero* arreglo[5];
	arreglo[0] = new Rectangulo(6,9);
	Rectangulo* o = static_cast<Rectangulo*>(arreglo[0]);
	cout << endl;
	cout << "Largo: " << o->getLargo() << endl;
	cout << "Ancho: " << o->getAncho() << endl;
	cout << "Perimetro: " << arreglo[0]->calcularPerimetro() << endl;
	cout << "Area: " << arreglo[0]->calculaArea() << endl;
	
	
		
	system("pause");
	return 0;
}
