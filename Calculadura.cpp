#include <iostream>
#include <math.h>
using namespace std;
class Calculadora{
	private:
		double primern, segundn;
		
	public:
		Calculadora(double, double);
		
		double suma();
		double resta();
		double multiplicacion();
		double division();
		double Residuo();
		double potenciacion();
			
};

Calculadora::Calculadora (double _primern, double _segundn){
	primern=_primern;
	segundn=_segundn;
}

double Calculadora::suma(){
	return primern+segundn;
}

double Calculadora::resta(){
	return primern-segundn;
}

double Calculadora::multiplicacion(){
	return primern*segundn;
}

double Calculadora::division(){
	return primern/segundn;
}

double Calculadora::Residuo(){
	return (int)primern%(int)segundn;
}

double Calculadora::potenciacion(){
	return pow(primern, segundn);
}

int main (){
	double primeronum, segundonum;
	char signo=' ';
	//char signo[1];
	//char suma[1]="+", resta[1]="-", multiplicacio="*", division="/", residuo="%", potenciacion="$";
	do{
		
	
	cout<< "ingrese el primer numero: ";
	cin>> primeronum;
	
	cout<< " ingrese el simbolo: ";
	cin>> signo;
	
	cout<< " ingrese el segundo numero: ";
	cin>> segundonum;
	
	Calculadora calculo(primeronum, segundonum);
	
	switch(signo){
		case '+':
			cout<<"suma: " <<calculo.suma();
		break;
		
		case '-':
			cout<<"resta: " <<calculo.resta();
		break;
		
		case '*':
			cout<<"multiplicacion: " <<calculo.multiplicacion();
		break;
		
		case '/':
			cout<<"division: " <<calculo.division();
		break;
		
		case '%':
			cout<<"residuo: "<<calculo.Residuo();
		break;
		
		case '$':
			cout<<"potenciacion: "<<calculo.potenciacion();
		break;
		
		default:
		cout<< "simbolo desconocido";
		break;	
	}
	
	}while(segundonum); //fin de do
/*	
	if (strcmp(&signo, &'+')){
	
	cout<< "suma";	
	}
	else if(signo == '-'){
	cout<< "resta";	
	}
	else if (signo == '*'){
	cout<< "multiplicacion";	
	}
	else if(signo == '/'){
	cout<< "division";	
	}
	else if (signo == '%'){
	cout<< "residuo";	
	}
	else if (signo == '$'){
	cout<< "potenciacion";	
	}*/
	
	
	
	
	
	return 0; 
}
