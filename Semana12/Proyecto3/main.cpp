#include "Logica.h"
using namespace std;

int main(){
	
	Proyecto3 proyecto3;
	cout << "INICIO DEL PROCESO\n";
	cout << "Cargando archivo...\n";
	proyecto3.cargarArchivo("PROYECTO3-DATOS.TXT");
	cout << "Procesando el archivo...\n";
	proyecto3.procesarDatos();
	cout << "Generando el reporte...\n";
	proyecto3.crearReporte("PROYECTO3-RESULTADO.TXT");
	cout << "INICIO DEL PROCESO\n";
}    
