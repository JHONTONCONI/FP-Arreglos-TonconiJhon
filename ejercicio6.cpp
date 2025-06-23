//Calcular la suma de componentes de índice par e impar en un vector. 
#include <iostream>
using namespace std;
int main(){
	int i, cantidadnum, sumapar, sumaimpar;
	sumapar=0;
	sumaimpar=0;
	cout<<"Ingrese la cantidad de numeros del arreglo(vector)"<<endl;
	cin>>cantidadnum;
	int vector[cantidadnum];
	
	for(i=0; i<cantidadnum; i++){
		cout<<"Ingrese un numero"<<endl;
		cin>>vector[i];
	}
	
	for(i=0; i<cantidadnum; i++){
		if(i%2==0){
			sumapar=sumapar+vector[i];
		}else{
			sumaimpar=sumaimpar+vector[i];
		}
	}
	cout<<"La suma de los componentes pares del arreglo es: "<<sumapar<<endl;
	cout<<"La suma de los componentes impares del arreglo es: "<<sumaimpar<<endl;
}
