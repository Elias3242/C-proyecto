#include <iostream>

using namespace std;
//se declara funciones
int division(int dividendo, int divisor);
string saludo();
int suma(int cambio1, int cambio2);
void material(string nombre);
int main(){
	int problema, resultado;
	cout<< "ingrese un numero: ";
	cin>> problema;
	cout<< "ingrese otro numero: ";
	cin>> resultado;
	//se invocan las funciones con sus respectivos parametros	
	cout<< suma(problema, resultado) <<endl;
	cout<< saludo() <<endl;
	cout<< division(problema, resultado);
	
	material("Elias");
	return 0;
}
//se define las funciones
string saludo(){
	return "despedida";
}

int suma(int cambio1, int cambio2){
	return cambio1 + cambio2;
}
int division(int dividendo, int divisor){
	
	return dividendo / divisor;
}
//metodo o procedimiento
void material(string nombre){
	cout<< "bienvenido " << nombre;
	
	return;
}
