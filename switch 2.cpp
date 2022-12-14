#include <iostream>

using namespace std;

int m() {
	int num1, num2, opcion, r;
	
	cout<< "ingrese la numero 1: "; 
	cin>> num1;
	
	cout<< "ingrese el numero 2: ";
	cin>> num2;
	
	cout<< "1.suma" <<endl << "2.resta" <<endl<< "3.multiplicar"  <<endl<< "4.dividir";	
	cin>> opcion;
	
	switch(opcion) {
	
		case 1: 
			r=num1+num2;
			cout<<"la suma es: " << r;
		 break;
		 
		 case 2: 
			r=num1-num2;
			cout<<"la resta es: " << r;
		 break;
		 
		 case 3: 
			r=num1*num2;
			cout<<"la multiplicacion es: " << r;
		 break;
		 
		 case 4: 
			r=num1/num2;
			cout<<"la division es: " << r;
		 break;
			 
		
	}
	return 0;
}

