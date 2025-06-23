//Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones. 
#include <iostream>
using namespace std;

int main(){
	int cn, mayor, menor, contadormenor, contadormayor;
	cout<<"Ingrese la cantidad de numeros"<<endl;
	cin>>cn;
	int numeros[cn];
	
	for(int i=0; i<cn; i++){
		cout<<"Ingrese un numero"<<endl;
		cin>>numeros[i];
	}
	mayor=numeros[0];
	menor=numeros[0];
	
	for(int i=0; i<cn; i++){
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
		if (numeros[i] < menor){
			menor = numeros[i];
		}	
	}
	for (int i=0; i<cn; i++){
		if(numeros[i]==mayor){
			contadormayor++;
		}
		if(numeros[i]==menor){
			contadormenor++;
		}
	}
	cout<<"El mayor numero del arreglo es: "<<mayor<<" y dentro del arreglo se repite: "<<contadormayor<<" veces"<<endl;
	cout<<"El menor numero del arreglo es: "<<menor<<" y dentro del arreglo se repite: "<<contadormenor<<" veces"<<endl;
}
