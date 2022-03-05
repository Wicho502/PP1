#include"notas.cpp"
#include<iostream>
using namespace std;

main(){
	string nombres,apellidos,direccion;
	int telefono,nota1,nota2,nota3,nota4;
	float promedio;
	
	cout<<"\nINGRESE NOMBRES: ";cin>>nombres;
	cout<<"\nINGRESE APELLIDOS: ";cin>>apellidos;
	cout<<"\nINGRESE DIRECCION: ";cin>>direccion;
	cout<<"\nINGRESE TELEFONO: ";cin>>telefono;
	cout<<"\nINGRESE NOTA 1: ";cin>>nota1;
	cout<<"\nINGRESE NOTA 2: ";cin>>nota2;
	cout<<"\nINGRESE NOTA 3: ";cin>>nota3;
	cout<<"\nINGRESE NOTA 4: ";cin>>nota4;
	promedio=(nota1+nota2+nota3+nota4)/4;
	cout<<"\n"<<endl;
	cout<<"PROMEDIO OBTENID ES: "<<promedio<<endl;
	if (promedio>=61){  
           cout<<endl;  
           cout<<"APROBADO TU CALIFICACION ES DE: "<<promedio;  
      }  
      else  
      {  
           cout<<endl;  
           cout<<"REPROBADO TU CALIFICACION ES DE: "<<promedio;  
      }  
    
    //instancia de un objeto
    Notas obj=Notas(nombres,apellidos,direccion,telefono,nota1,nota2,nota3,nota4);
    obj.mostrar();
	
	system("pause");
	
}