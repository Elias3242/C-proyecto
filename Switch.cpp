#include <iostream>

using namespace std;

int main() {
	int edad;
	cout<< "ingrese su edad: ";
	cin>> edad;
	
	if (edad <= 18 && edad >= 14) { 
	
		cout<< "usted es adolecente"; 
		
	 } 
	else if (edad >= 19 && edad <= 25) { 
	
		cout<< "usted es un joven"; 
	 	
	 
	 } 
	 else if (edad <= 13 && edad > 0) { 
	 	cout<< "usted es un nino" ; 
		 
		 }
	 
	 else { 
	 	cout<< "usted es un adulto"; 
		 
		 } 
	 
	 
	
	return 0;
}

