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
#include <cmath>
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

class Trapecio : public Cuadrilatero{
	private:
		
		float base1;
		float base2;
		float altura;
	
	public:
		Trapecio(float _base1,float _base2,float _altura){
			base1 = _base1;
			base2 = _base2;
			altura = _altura;
		}
		float getBase1(){
			return base1;
		}
		float getBase2(){
			return base2;
		}
		float getAltura(){
			return altura;
		}
		float calcularPerimetro(){
			float hipotenusa;
			hipotenusa=sqrt(pow(base2-base1,2)+pow(altura,2));
			return base1+base2+altura+hipotenusa;
		}
		float calculaArea(){
			return (base1+base2)/2*altura;
		}
};

int main(){
	
	// Ejemplo del cuadrado
	cout << "\nEJEMPLO DEL TRAPECIO\n";
	Trapecio obj1(4,8,3);
	cout << "Base1: " << obj1.getBase1() << endl;
	cout << "Base2: " << obj1.getBase2() << endl;
	cout << "Altura: " << obj1.getAltura() << endl;
	cout << "Perimetro: " << obj1.calcularPerimetro() << endl;
	cout << "Area: " << obj1.calculaArea() << endl;
	
	/*Cuadrilatero* arreglo[5];
	arreglo[0] = new Cuadrado(6);
	Cuadrado* o = static_cast<Cuadrado*>(arreglo[0]);
	cout << endl;
	cout << "Lado: " << o->getLado() << endl;
	cout << "Perimetro: " << arreglo[0]->calcularPerimetro() << endl;
	cout << "Area: " << arreglo[0]->calculaArea() << endl;
	*/
	
		
	system("pause");
	return 0;
}
