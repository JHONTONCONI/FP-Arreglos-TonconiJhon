// Rotar las componentes de un vector una posición hacia la derecha.
#include <iostream>
using namespace std;
int main(){
	int cantidadnum, i, aux;
	cout<<"Ingrese la cantidad de numeros del vector"<<endl;
	cin>>cantidadnum;
	int vector[cantidadnum];
	for(i=0; i<cantidadnum; i++){
		cout<<"Escribe un numero"<<endl;
		cin>>vector[i];
	}
	
	aux = vector[cantidadnum-1];
	for (i = cantidadnum-1; i > 0; i--) {
    vector[i] = vector[i-1];
	}
	
	vector[0] = aux;

	for (i=0; i<cantidadnum; i++){
		cout<<vector[i]<<" ";
	}
	return 0;
}
