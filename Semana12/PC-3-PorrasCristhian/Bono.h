#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Libreria2023.h"
using namespace std;


class Bono{
	private:
		int id;
		int horaDia;
		int dia;
		int hijo;
		int bonoHijo;
		int pagoHora;
		int ingreso;
		int bono1;
		
	public:
		int tipo;
		int neto;
		int hora;
		int bono2;
		Bono(){
			this->id=1;
			this->tipo=1;
			this->horaDia=1;
			this->dia=1;
			this->hijo=1;
			this->bonoHijo=1;
			this->pagoHora=1;
			this->ingreso=1;
			this->bono1=1;
			this->neto=1;
			this->bono2=1;
		}
		Bono(int id,int tipo,int horaDia,int dia,int hijo){
			this->id=id;
			this->tipo=tipo;
			this->horaDia=horaDia;
			this->dia=dia;
			this->hijo=hijo;
			this->bonoHijo=0;
			this->pagoHora=0;
			this->ingreso=0;
			this->bono1=0;
			this->neto=1;
			this->bono2=0;
		}
		void procesar(){
			this->bono2=0;
			switch(this -> tipo){
				case 1:this->pagoHora=150;this->bonoHijo=80;break;
				case 2:this->pagoHora=120;this->bonoHijo=70;break;
				case 3:this->pagoHora=100;this->bonoHijo=60;break;
			}
			this->hora=(this->horaDia*this->dia);
			this->ingreso= (this->pagoHora*this->hora);
			this->bono1=(this->bonoHijo * this->hijo);
			this->neto=(this->ingreso + this->bono1 + this->bono2);
		}
		void cargarRegistro(string regTexto,char flag){
			vector<string> arreglo = split(regTexto,flag);
			this->id = stoi(arreglo[0]);
			this->tipo = stoi(arreglo[1]);
			this->horaDia = stoi(arreglo[2]);
			this->dia = stoi(arreglo[3]);
			this->hijo = stoi(arreglo[4]);
			this->bonoHijo=0.0;
			this->pagoHora=0.0;
			this->ingreso=0.0;
			this->bono1=0.0;
			this->neto=0.0;
			this->bono2=0.0;
		}
		string textoReporte(){
			string texto = "";
			texto += to_string(this->id) + "|";
			texto += to_string(this->tipo) + "|";
			texto += to_string(this->horaDia)  + "|";
			texto += to_string(this->dia)  + "|";
			texto += to_string(this->hijo)+ "|";
			texto += to_string(this->ingreso) + "|";
			texto += to_string(this->bono1)  + "|";
			texto += to_string(this->bono2)  + "|";
			texto += to_string(this->neto);
			return texto;
		}
};


