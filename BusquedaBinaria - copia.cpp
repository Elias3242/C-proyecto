#include <iostream>

using namespace std;

int main(){

int numeros[] = {1,2,3,4,5};
int search = 2;
bool found = false;

int inf = 0;
int sup = 5;
int m;

while(inf <= sup){
	m = (inf+sup)/2;

	if(numeros[m] == search){
		found = true;
		break;
	}
	if(numeros[m] > search){
		sup = m;
		m = (inf+sup)/2;
	}
	if(numeros[m] < search){
		inf = m;
		m = (inf+sup)/2;
	}
}

if(found == true){
	cout<< "se encontro el número "<<search <<" en la posición: "<<m;}
else
	{
	cout<< "numero no encontrado";}

return 0;	
}
