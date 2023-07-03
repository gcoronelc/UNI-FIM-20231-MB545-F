#include <iostream>

using namespace std;

//C to F

class LogicaProyecto1{
	public:
		//Ricardo Román
		static float convCelToFah(float valor){
			float resultado;
			resultado = 32 + 9 * valor / 5;
			return resultado;
		}
		//Cristhian Porras
		static float convCelToKel(float valor){
			float resultado;
			resultado = valor +273;
			return resultado;
		}
		//Jean Carlos Tellez
		static float convFahToKel(float valor){
			float resultado;
			resultado = ((valor -32)*5)/9 +273;
			return resultado;
		}
		//Pedro Chumacero
		static float convFahToCel(float valor){
			float resultado;
			resultado = ((valor -32)*9)/5;
			return resultado;
		}
};



