//Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h 
#include <iostream>
using namespace std;

void mistrcpy(char str1[], char str2[]){
	int i=0;
	while (str2[i]!=0){
		str1[i]=str2[i];
		i++;
	}
	str1[i]=0;
}
int main (){
	char cadena1[100], cadena2[100];
	cout<<"Ingrese una cadena: "<<endl;
	cin >> cadena2;
	mistrcpy(cadena1, cadena2);
	cout<<"Cadena copiada en cadena1: "<<cadena1<<endl;
	return 0;
}
