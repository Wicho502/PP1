#include<iostream>
using namespace std;

class Estudiante{
	//atributos
	protected: string nombres,apellidos,direccion;
				int telefono;
	//constructor
	protected :
		Estudiante(){
		}
		Estudiante(string nom,string ape,string dir,int tel){
			nombres = nom;
			apellidos=ape;
			direccion=dir;
			telefono=tel;
		}
		
	//metodo
	void mostrar();
};