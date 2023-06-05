#include <iostream>
#include "ClassAlumno.h"
using namespace std;

int main(){
	
	Alumno alu;
	alu.cargarRegistro("500|Carla|17|16",'|');
	alu.calcularPromedio();
	alu.reporte();
	
	return 0; 
}

