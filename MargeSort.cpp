#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arreglo,int inicio, int mitad, int final){
    int i,j,k; //Variables para ciclos
    int elementosIzq = mitad - inicio + 1; //N elementos parte izquierda
    int elementosDer = final - mitad; //N elementos parte derecha

    //Crear vectores izquierdo y derecho con sus respectivo tamaño
    vector<int>izquierda(elementosIzq);
    vector<int>derecha(elementosDer);

    //Ciclos para recorrer nuestros vectores izq y der
    for(int i = 0; i < elementosIzq; i++){
        izquierda[i] = arreglo[inicio+i]; //Asignamos valores
    }
    for(int j = 0; j < elementosDer; j++){
        derecha[j] = arreglo[mitad + 1 + j]; //Asignamos valores
    }

    //Inicializamos nuestra variables
    i = 0;
    j = 0;
    k = inicio;

    //Mezclamos nuestros vectores ordenándolos
    while(i < elementosIzq && j < elementosDer){
	  //Todos los elementos de la izquierda deben ser menores que al de la derecha
        if(izquierda[i] <= derecha[j]){
            arreglo[k] = izquierda[i]; //Los valroes de nuestro arreglo izquierdo corresponderá al nuevo arreglo
            i++;
        }else{
            arreglo[k] = derecha[j]; //Si las posiciones del lado izquierdo son mayores, entonces las posiciones del derecho se copiarán al arreglo
            j++;
        }
        k++;
    }

    //Ciclos While para vaciar los elementos de ser necesario
    while(j < elementosDer){
        arreglo[k] = derecha[j];
        j++;
        k++;
    }

    while(i < elementosIzq){
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }

}

//Función Recursiva
void mergeSort(vector<int>&arreglo,int inicio, int final){
    //Caso base
    //Si nuestro inicio es menor al final, seguir la recursividad
    if(inicio < final){
        int mitad = inicio + (final - inicio)/2;
        mergeSort(arreglo,inicio,mitad); //Dividir las partes izquierdas de nuestro vector
        mergeSort(arreglo,mitad+1,final); //Dividir las partes derechas de nuestro vector
        merge(arreglo,inicio,mitad,final); //Llamamos la función marge
    }
}//Fin función recursiva

void imprimirArreglo(vector<int>arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> prueba1 = {{12,0,6,2,9,34,1}};
    //int prueba1[] = {12,0,6,2,9,34,1};
    imprimirArreglo(prueba1);
    mergeSort(prueba1,0,prueba1.size()-1);
    imprimirArreglo(prueba1);
    return 0;
}
