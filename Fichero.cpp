#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Fichero{
	private:
		string nombre_fichero, texto;
		
	public:
		
		Fichero(string,string);
		
		void crear();
		void actualizar();
		void leer();
		void eliminar();
		

};

Fichero::Fichero(string nom_fich, string _texto){
	nombre_fichero=nom_fich;
	texto=_texto;
}

void Fichero::crear(){
	ofstream archivo;
	
	archivo.open(nombre_fichero.c_str(),ios::out);
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		//exit(1);
	}
	else {
		archivo<< texto;
		archivo.close();
		cout<<"el archivo se ha creado, consulte la carpeta raíz";
		
	}
	
		
}

void Fichero::actualizar(){
	ofstream archivo;
	
	archivo.open(nombre_fichero.c_str(),ios::app);
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
	}
	else {
		archivo<<endl;
		archivo<< texto<<endl;
		archivo.close();
		cout<<"el archivo se ha actualizado, consulte la carpeta raíz";
		
	}
	
}

void Fichero::leer(){
	ifstream archivo;
	archivo.open(nombre_fichero.c_str(),ios::in);
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		
	}
	else {
		while(!archivo.eof()){
			getline(archivo, texto);
			cout<<texto<<endl;
		}
		archivo.close();
		
	}
	
	
}

void Fichero::eliminar(){
	remove(nombre_fichero.c_str());
	cout<<"el archivo se ha eliminado";
	
}



int main(){
	string nombr_fiche;
	string text;
	
	int op;
		cout<< "1.crear" <<endl << "2.actualizar" <<endl<< "3.leer"  <<endl<< "4.eliminar" <<endl<<"-->";	
	cin>> op;
	
	
	switch(op){
		
		case 1:
			{
			cout<< "ingrese el nombre del archivo: ";
			cin.ignore();
			getline(cin,nombr_fiche);
			cout<<"ingrese el contenido del archivo: ";
			cin.ignore();
			getline(cin, text);
	
			Fichero ficha(nombr_fiche, text);
			ficha.crear();
		break;
		}
		case 2:{
			
			cout<< "ingrese el nombre del archivo que desea actualizar: ";
			cin.ignore();
			getline(cin,nombr_fiche);
			cout<<"ingrese el contenido que desea agregar al archivo: ";
			cin.ignore();
			getline(cin, text);
	
			Fichero factu(nombr_fiche, text);
			factu.actualizar();
			
			
		break;
		}
		
		case 3:
			{
			cout<<"ingrese el nombre del archivo que desea leer: ";
			cin.ignore();
			getline(cin,nombr_fiche);
			Fichero fleer(nombr_fiche," ");
			fleer.leer();
		break;
		}
		
		case 4:
		{
			cout<<"ingrese el nombre del archivo que desea eliminar: ";
			cin.ignore();
			getline(cin,nombr_fiche);
			Fichero felim(nombr_fiche," ");
			felim.eliminar();	
			
		break;
		}
		
	} 
	
	return 0;
}

