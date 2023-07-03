#include <iostream>

using namespace std;

//C to F

template <typename T> class LogicaProyecto1{
	public:
		//Ricardo Román
		static T convCelToFah(T valor){
			T resultado;
			resultado = 32 + 9 * valor / 5;
			return resultado;
		}
		//Cristhian Porras
		static T convCelToKel(T valor){
			T resultado;
			resultado = valor +273;
			return resultado;
		}
		//Jean Carlos Tellez
		static T convFahToKel(T valor){
			T resultado;
			resultado = ((valor -32)*5)/9 +273;
			return resultado;
		}
		//Pedro Chumacero
		static T convFahToCel(T valor){
			T resultado;
			resultado = ((valor -32)*9)/5;
			return resultado;
		}
};



