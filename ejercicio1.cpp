//Convertir palabras a mayúsculas iniciales: "caceres patrimonio de la humanidad" ? "Caceres Patrimonio De
//La Humanidad"
#include <iostream>
#include <string.h>
using namespace std;

char* PonerMayusculas(char cadena[]){
	int n=0;
	while (cadena[n] != 0){
		n++;  //cuento caracteres
		
	}
	
	for (int i=0; i<n; i++){
		
		if(i==0){
			cadena[i]=toupper (cadena[i]);
		}
		
		if(cadena[i]== ){
			
			cadena[i+1]= toupper(cadena[i+1]);
		}
		
	}
	return cadena;
}

int main (){
	char arreglopalabras[]= "caceres patrimonio de la humanidad";
	cout << PonerMayusculas(arreglopalabras);
	return 0;
}
