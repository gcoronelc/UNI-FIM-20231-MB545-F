
/*
Numeros aletorios
*/

#include <cstdlib>  // biblioteca de propósito general de C
#include <ctime>    // biblioteca de tiempo de C
#include <iostream>

using namespace std;

int main()
{
    srand(time(nullptr));  // usamos de semilla la hora
    cout << rand() << endl;  // generamos un número aleatorio
    return 0;
}