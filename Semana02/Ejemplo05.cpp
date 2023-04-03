
/*
Elaborar un programa encontrar los dias de un mes.
*/

#include <iostream>

using namespace std;

int main()
{
   // Variables
   int nroMes, dias;
   // Lectura de datos
   cout << "LECTURA DE DATOS\n";
   cout << "==========================================" << endl;
   cout << "Nro de mes: "; cin >> nroMes;
   // Proceso
   switch(nroMes){
   case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      dias = 31;
      break;
   case 4: case 6: case 9: case 11: 
       dias = 30;
       break;
   case 2:
       dias = 28;
       break;
   }
    // Reporte
    cout << endl;
    cout << "REPORTE\n";
    cout << "==========================================" << endl;
    cout << "Nro de mes: " << nroMes << endl;
    cout << "Dias: " << dias << endl;
    
    return 0;
}