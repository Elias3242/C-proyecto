#include<iostream>

using namespace std;

int main(){
		
	int *p;
	int numero=15;
	int num, X;
	
	do{
		cout<<"ingrese un numero: ";
		cin>>num;
		//X=numero+num;
		p=&numero;
		//cout<<"valor del numero: " <<numero <<endl;
		//cout<<"direccion en memoria: " <<p <<endl;
		cout<<"valor de la direccion de la memoria: " <<p << " " <<*p <<endl;
		cout<<"sumando el valor de la direccion: " <<*p+num <<endl <<endl;
	}
 	while(numero);
	
	return 0;
}
