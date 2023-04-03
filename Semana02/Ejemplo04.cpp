
/*
Elaborar un programa para calcular el promedio de un estudiantes.
Son 2 notas y para aprobar necesita minimo 14.
El sistema de evaluacion es el siguiente:
1: Ambas notas tienen igual peso.
2: La nota 1 tiene peso 2.
3: La nota 2 tiene peso 2.
*/

#include <iostream>

using namespace std;

int main()
{
   // Variables
   int nota1, nota2, promedio, sistema;
   string condicion;
   // Lectura de datos
   cout << "LECTURA DE DATOS\n";
   cout << "==========================================" << endl;
   cout << "Nota 1: "; cin >> nota1;
   cout << "Nota 2: "; cin >> nota2;
   cout << "Sistema: "; cin >> sistema;
   // Proceso
   stch(sistema){
   case 1:
       promedio = (nota1+nota2) / 2;
       break;
   case 2: 
       promedio = ((nota1*2)+nota2)/3;
       break;
   case 3:
       promedio = ((nota1)+(nota2*2))/3;
       break;
   }
    
    if(promedio<14) condicion = "Desaprobado";
    else condicion = "Aprobado";
    // Reporte
    cout << endl;
    cout << "REPORTE\n";
    cout << "==========================================" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Condición: " << condicion << endl;
    
    return 0;
}