//Invertir un vector e imprimirlo. 
#include <iostream>
using namespace std;
int main(){
	int i, cn, num, j;
	cout<<"Ingrese la cantidad de numeros del arreglo"<<endl;
	cin>>cn;
	int vector[cn];
	int invertidovector[cn];
	for(i=0; i<cn; i++){
		cout<<"Escribe un numero"<<endl;
		cin>>vector[i];
	}
	for(i=cn-1, j=0; i>=0; i--, j++){
		invertidovector[j] = vector[i];
	}
	
	cout<<"ARREGLO INCIAL"<<endl;
	for (i=0; i<cn; i++){
		cout<<vector[i]<<endl;
	}
	
	cout<<"ARREGLO INVERTIDO"<<endl;
	for (i=0; i<cn; i++){
		cout<<invertidovector[i]<<endl;
	}
}
