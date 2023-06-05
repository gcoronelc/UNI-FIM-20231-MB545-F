#include <iostream>
#include "ClassAlumno.h"
using namespace std;

int main(){
	
	
	Alumno alu = Alumno(1000,"Cristhian",20,16);
	alu.calcularPromedio();
	alu.reporte();	
	
	
}
