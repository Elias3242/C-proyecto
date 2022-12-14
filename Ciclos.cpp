#include <iostream>

using namespace std;

int main(){
	string letra[3] = {"uno", "dos", "tres"};
	int vector[5] = {1, 2, 5, 6, 8};
	int chicharron = ( sizeof(vector)/ sizeof(vector[0])); 
	int matriz[3][2]={{3,5},{4,6},{1,2}};
	int mod;
	//cout<< chicharron <<endl <<endl;
	int fila= (sizeof(matriz)/ sizeof(matriz[0]));
	int columna= (sizeof(matriz[0])/ sizeof(matriz[0][0]));
	//cout<< "filas: " << fila << " columnas: " << columna <<endl <<endl;
	
	 
	//ciclo for 
	/*for (int i=0; i<chicharron; i++  ){
		cout<< vector[i] <<endl; //recorriendo el vector
	}*/
	
	/*for (int c=0; c<fila; c++ ) {
		for (int s=0; s<columna; s++) { 
			
			
			
			if (s==(columna-1)){
				cout<< matriz[c][s]<<endl ;
			}
			else{
				cout<< matriz[c][s]<< " " ;
			}
			
			
		}
	}*/
	
	//inicia el ciclo while
	
	/*int contador = 0;
	
	while (contador < 10){
		cout<< contador <<" cont" <<endl;
		contador++;
				
	}*/
	
	int numero;
	
	do{
		cout<< "escriba un numero: ";
		cin>>numero;
	} while(numero);

	return 0;

}
