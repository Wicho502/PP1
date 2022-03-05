#include"estudiante.cpp"
#include<iostream>
using namespace std;

class Notas:Estudiante{
	//atributos
	private:int nota1,nota2,nota3,nota4;
	
	//Constructor
	public:
		Notas(){
		}
		
	Notas(string nom,string ape,string dir,int tel,int nota1,int nota2,int nota3,int nota4):Estudiante(nom,ape,dir,tel){
		nota1=nota1;
		nota2=nota2;
		nota3=nota3;
		nota4=nota4;
	}
	void mostrar(){
		cout<<"\n___________"<<endl;
		cout<<nota1<<nota2<<nota3<<nota4<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;

	}
};