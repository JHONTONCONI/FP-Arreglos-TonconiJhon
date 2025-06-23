//Generar la función mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de String.h 
#include <iostream>
using namespace std;
void mistrcat(char str1[], char str2[]){
	int i, j;
	while(str1[i]!=0){
		i++;
	}
	while (str2[j]!=0){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]= 0;
}

int main(){
	char cadena1[100], cadena2[100];
	cout<<"Ingrese la primera cadena"<<endl;
	cin>>cadena1;
	cout<<"Ingrese la segunda cadena"<<endl;
	cin>>cadena2;
	
	mistrcat(cadena1, cadena2);
	cout<<"Cadena unida: "<<cadena1<<endl;
	return 0;
}
