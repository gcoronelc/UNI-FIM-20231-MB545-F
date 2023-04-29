#include <iostream>
using namespace std;

char leerChar(string etiqueta) {
	// Variables
	char respuesta;
	// Proceso
	cout << etiqueta; cin >> respuesta;
	// Reporte
	return respuesta;
}

float leerFloat(string etiqueta) {
	// Variables
	float respuesta;
	// Proceso
	cout << etiqueta; cin >> respuesta;
	// Reporte
	return respuesta;
}

float obtenerPorcDescuento(char categoria, char colegio) {
	// Variables
	float respuesta;
	// Proceso
	respuesta = 0.0; // Valor inicial
	// Categoria A
	respuesta = (categoria=='A' && colegio=='N')?5:respuesta;
	respuesta = (categoria=='A' && colegio=='P')?0:respuesta;
	// Categoria B
	respuesta = (categoria == 'B' && colegio == 'N') ? 15 : respuesta;
	respuesta = (categoria == 'B' && colegio == 'P') ? 4 : respuesta;
	// Categoria C
	respuesta = (categoria == 'C' && colegio == 'N') ? 25 : respuesta;
	respuesta = (categoria == 'C' && colegio == 'P') ? 8 : respuesta;
	// Reporte
	return respuesta;
}

int main() {
	// Variables
	char categoria, colegio;
	float pensionActual, porcDescuento, valorDescuento, valorPension;
	// Lectura
	categoria = leerChar("Ingrese la categoria (A/B/C): ");
	colegio = leerChar("Ingrese el colegio (N/P): ");
	pensionActual = leerFloat("Pension actual: ");
	// Proceso
	porcDescuento = obtenerPorcDescuento(categoria, colegio);
	valorDescuento = pensionActual * porcDescuento * 1.0 / 100.0;
	valorPension = pensionActual - valorDescuento;
	// Reporte
	cout << endl;
	cout << "Pension actual: " << pensionActual << endl;
	cout << "Porcentaje de descuento: " << porcDescuento << "%" << endl;
	cout << "Valor del descuento: " << valorDescuento << endl;
	cout << "Nuevo valor pension: " << valorPension << endl;
	return 0;
}