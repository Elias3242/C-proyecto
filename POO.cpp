#include <iostream>

using namespace std;
class Persona{
	//atributos
	private:
		int edad;
		string nombre;
		
	public:
		//constructor que pide atributos
		Persona(int, string);
		//constructor vacio
		//Persona();
		void caminar();
		void comer(); 
		int getEdad();
		string getNombre();
		
};
//se inicializa el constructor de la clase Persona que recibe parametros
Persona::Persona(int _edad, string _nombre){
	edad=_edad;
	nombre=_nombre;
}
//se inicializa el constructor vacio
/*Persona::Persona(){
}*/
//se define los metodos o procedimientos
void Persona::caminar(){
	cout<<"el personaje " << nombre<< "camina segun la dirección que se le indica " <<endl;
	
}
void Persona::comer(){
	cout<<"el personaje " << nombre<< "ha conseguido comida " <<endl;
}
int Persona::getEdad(){
	return edad;
}
string Persona::getNombre(){
	return nombre;
}
//aplicacion de herencia con la clase Persona
class Player: public Persona{
	private: 
		string nickname;
		int puntos;
	public:
		Player(int, string);
		void verDatos();
		void setNickname(string sobrenombre);
		void setPuntos(int puntuacion);
		string getNickname();
		int getPuntos();					
};
Player::Player(int _edad, string _nombre):Persona(_edad, _nombre){
}
void Player::verDatos(){
	cout<<"sobrenombre: " <<nickname << "los puntos son: " <<puntos <<endl;
}
void Player::setNickname(string _nickname){
	nickname = _nickname;	
}
void Player::setPuntos(int _puntos){
	puntos = _puntos;
}
string Player::getNickname(){
	return nickname;
}
int Player::getPuntos(){
	return puntos;
}



int main(){
	//se instancia un objeto de la clase persona
	/*Persona player1 = Persona(15,"Elias");
	player1.caminar();
	Persona player2(25,"Wilmer");
	player2.comer();*/
	Player p1(15, "Elias");
	p1.setNickname("maestrodeobra");
	p1.setPuntos(50);
	cout<< "nombre: " << p1.getNombre() << "edad: " << p1.getEdad() <<endl;
	p1.verDatos();
	
	//player1.edad; no se puede acceder a la variables privadas
	
	return 0;
}
