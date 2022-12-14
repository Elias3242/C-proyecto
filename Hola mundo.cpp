#include <iostream>
//#include <conio.h>
#include <string>

using namespace std;

int main(){ 
	int edad;
	string tez, color_de_pelo, nombre;
	double peso, altura;
	const string genero = "masculino" ;
	 
	cout<<"ingrese su edad: "; 
	cin>>edad;
	
	cout<<"ingrese su tez: ";
	cin>>tez;
	
	cout<<"ingrese su color de pelo: ";
	cin>>color_de_pelo;
	
	cout<<"ingrese su nombre: ";
	cin>>nombre;
	
	cout<<"ingrese su peso: ";
	cin>>peso;
	
	cout<<"ingrese su altura";
	cin>>altura;
	
	//cout<< "hola que tal " << nombre << "tu edad es " << edad << "tu tez es " << tez << "tu color de pelo es" << color_de_pelo << "tu peso es " << peso << "tu altura es " << altura << "tu genero es" << genero ;
	
	cout<< "hola que tal " << nombre << endl;
	cout<< "tu edad es " << edad << endl;
	cout<< "tu tez es " << tez << "\n tu color de pelo es" << color_de_pelo << "\ntu peso es " << peso << "\n tu altura es " << altura << "\n tu genero es" << genero ;
	return 1; 
}

