
/*
Numeros aletorios entre 1 y 20.
*/

#include <cstdlib>  // biblioteca de propósito general de C
#include <ctime>    // biblioteca de tiempo de C
#include <iostream>

using namespace std;

int main()
{
    srand(time(nullptr));  // usamos de semilla la hora
    int nro = 1 + rand()%20;
    cout << nro << endl;  // generamos un número aleatorio
    return 0;
}