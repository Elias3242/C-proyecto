#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
	int opcion; 
	cout<< "1. crear archivo" <<endl << "2. listar archivo" <<endl << "3. eliminar archivo" <<endl << "4. salir" <<endl<<endl;
	cout<< "Elija una opcion: "; 
	cin>> opcion;
	
	switch(opcion) {
		case 1:
			cout<< "usted a elejido crear un archivo";	
		break;
		
		case 2:
			cout<< "usted a elejido listar un archivo";
		break;
		
		case 3:
			cout<< "usted a elejido eliminar un archivo";
		break;
		
		case 4:
			exit(0); 
		break;
		
		default: 
			cout<<"no ha elejido ninguna de las opciones de la lista";
		 break;
	}
	return 0;
}
