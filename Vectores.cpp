#include <iostream>

using namespace std;

int main () {
	
	//formas de  declarar un vector 
	string letra[3] = {"uno", "dos", "tres"};
	int vector[5] = {1, 2, 5, 6, 8};   
	int numero[10];
	
	//formas de declarar una matriz 
	int matriz[3][2]={{3,5},{4,6},{1,2}};
	string motor[4][3];
	//asignarle valores a una matriz
	
	motor[0][0]= "t";
 	motor[0][1]= "d";
	motor[0][2]= "c";
	motor[1][0]= "n";
 	motor[1][1]= "o";
	motor[1][2]= "s";	
	motor[2][0]= "di";
 	motor[2][1]= "cu";
	motor[2][2]= "s";
	motor[3][0]= "u";
 	motor[3][1]= "dc";
	motor[3][2]= "cin";
				
	//asnigarle valores a las posciciones de un vector 
	numero[0]= 9;
	numero[1]= 7;
	numero[2]= 20;
	numero[3]= 12;
	numero[4]= 3;
	numero[5]= 24;
	numero[6]= 6;
	numero[7]= 19;
	numero[8]= 1;
	numero[9]= 30;
	
	//imprimir valores de un vector
	
	cout<< vector[4] << " " << numero[2] << " " << letra[2] <<endl;
	
	//imprimir valores de una matriz
	
	cout<< matriz[2][1] << " " << motor[0][1];
	
	return 0;
	} 
