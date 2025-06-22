// Contar la ocurrencia de una letra específica en una cadena de entrada
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char cadena[100];
	char letra;
	cout<<"Ingrese una palabra"<<endl;
	cin>>cadena;
	cout<<"Ingrese la vocal o consonante a buscar su cantidad de veces que hace presencia en la oracion"<<endl;
	cin>>letra;
	int contador=0;
	int n=0;
	while (cadena[n] != 0){
		n++;
	}
	
	for(int i=0; i<n; i++){
		if(cadena[i]==letra){
			contador++;
		}	
	}
	cout<<"La cantidad de veces que se repite la letra "<<letra<<" es: "<<contador<<endl;
	return 0;
}
