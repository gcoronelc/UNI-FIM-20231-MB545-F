/*
En este programa se ilustra la sobre-escritura de metodos.
La clase Cuadrado hereda de la clase Cuadrilatero y sobre-escribe 
los m�todos calcularPerimetro y calculaArea.
La clase Rectangulo hereda de la clase Cuadrilatero 
y sobre-escribe los m�todos calcularPerimetro y calculaArea.
La clase TrapecioRectangulo hereda de la clase Cuadrilatero 
y sobre-escribe los m�todos calcularPerimetro y calculaArea.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Cuadrilatero{
	public:
		Cuadrilatero(){
		}
		virtual float calcularPerimetro() = 0; // m�todo abstracto
		virtual float calculaArea() = 0; // m�todo abstracta
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

int main(){
	
	// Ejemplo del cuadrado
	cout << "\nEJEMPLO DEL CUADRADO\n";
	Cuadrado obj1(7);
	cout << "Lado: " << obj1.getLado() << endl;
	cout << "Perimetro: " << obj1.calcularPerimetro() << endl;
	cout << "Area: " << obj1.calculaArea() << endl;
	
	Cuadrilatero* arreglo[5];
	arreglo[0] = new Cuadrado(6);
	Cuadrado* o = static_cast<Cuadrado*>(arreglo[0]);
	cout << endl;
	cout << "Lado: " << o->getLado() << endl;
	cout << "Perimetro: " << arreglo[0]->calcularPerimetro() << endl;
	cout << "Area: " << arreglo[0]->calculaArea() << endl;
	
	
		
	system("pause");
	return 0;
}
