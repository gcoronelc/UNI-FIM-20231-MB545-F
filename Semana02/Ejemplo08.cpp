
/*
Numeros aletorios entre 31 y 50.
*/

#include <cstdlib>  // biblioteca de propósito general de C
#include <ctime>    // biblioteca de tiempo de C
#include <iostream>

using namespace std;

int main()
{
    srand(time(nullptr));  // usamos de semilla la hora
    for(int i=0; i<=30; i++){
        int nro = 31 + rand()%20;
        cout << nro << "\t";
    }
    
      // generamos un número aleatorio
    return 0;
}