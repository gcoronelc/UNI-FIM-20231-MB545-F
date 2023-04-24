/*
Desarrollar las siguientes funciones:

- Función promedioFinal
  Calcula el promedio de un estudiante en base a la siguiente formula:
  PF = PP * 0.30 + EP * 0.30 + EF * 0.4

- Función condicionFinal
  Determina la condición del estudiante en base a su promedio final:
  -----------------------------------
  |  PROMEDIO FINAL | CONDICION     |
  -----------------------------------
  |     [18,20]     | EXCELENTE     |
  -----------------------------------
  |     [11.18>     | APROBADO      |
  -----------------------------------
  |     [0,11>      | DESAPROBADO   |
  -----------------------------------
*/
#include <iostream> 
using namespace std;
//Creditos: Matias Mamani 
int promedioFinal (int PP, int EP, int EF) {
	//Variables
	int PF;
	//Proceso
	PF = PP*0.30 + EP*0.30 + EF*0.40;
	//Reporte
	return PF;
}

//Creditos: Farith Huaman 
string condicionFinal (int PF) {
	//Variables
	string condicion;
	//Proceso
	condicion="alegre";
	if(PF>=18 ) condicion="EXCELENTE";
	else if(PF>=11)condicion="APROBADO";
	else condicion="DESAPROBADO";
	//Reporte
	return condicion;
}

int main() {
	int PF=promedioFinal(15,16,17);
	cout<<"PROMEDIO FINAL: "<< PF<<endl;
	cout<<"CONDICION FINAL: "<< condicionFinal(PF) <<endl;
	return 0;
}
