//Calcular la suma de elementos positivos y negativos en un arreglo. 
#include <iostream>
using namespace std;
int main(){
	int i, cant, sumapositivo, sumanegativo;
	sumapositivo=0;
	sumanegativo=0;
	cout<<"Escribe la cantidad de numeros del arreglo"<<endl;
	cin>>cant;
	int numeros[cant];
	for(i=0; i<cant; i++){
		cout<<"Escribe un numero, puede ser positivo o negativo"<<endl;
		cin>>numeros[i];
	}
	for(i=0; i<cant; i++){
		if(numeros[i]>0){
			sumapositivo=sumapositivo+numeros[i];
		}else{
			sumanegativo=sumanegativo+numeros[i];
		}
	}
	cout<<"La suma de los elementos positivos del arreglo es: "<<sumapositivo<<endl;
	cout<<"La suma de los elementos negativos del arreglo es: "<<sumanegativo<<endl;
	return 0;
}
