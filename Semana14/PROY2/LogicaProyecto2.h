#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;



class LogicaProyecto2{
	private:
		float base;
		float altura;
		float area;
	public:
		void generaDatos(){
			srand(time(NULL));
			this->base= rand()%10+1; 
			this->altura= rand()%10+1;
		}
		float getBase(){
			return this->base;
		}
		float getAltura(){
			return this->altura;
		}
		float getArea(){
			return this->area;
		}
		void resolverArea(){	
			this->area =(this->base*this->altura)/2; 
		}
		bool validarRespuesta(float resp){
			return (this->area==resp);
		}
};
