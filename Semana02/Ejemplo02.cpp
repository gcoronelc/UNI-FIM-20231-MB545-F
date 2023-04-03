
/*
Elaborar un programa para calcular el promedio de un estudiantes.
Son 2 notas y para aprobar necesita minimo 14.
*/

#include <iostream>

using namespace std;

int main()
{
    // Variables
    int nota1, nota2, promedio;
    string condicion;
    // Lectura de datos
    cout << "LECTURA DE DATOS\n";
    cout << "==========================================" << endl;
    cout << "Nota 1: "; cin >> nota1;
    cout << "Nota 2: "; cin >> nota2;
    // Proceso
    promedio = (nota1 + nota2) / 2;
    condicion = "Aprobado"; // Valor por defecto o condicion inicial
    if(promedio<14) condicion = "Desaprobado";
    // Reporte
    cout << endl;
    cout << "REPORTE\n";
    cout << "==========================================" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Condición: " << condicion << endl;
    
    return 0;
}