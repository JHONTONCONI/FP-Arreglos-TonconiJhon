//Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas
//son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de String.h 
#include <iostream>
using namespace std;
char mistrcmp(char str1[], char str2[]){
	int i=0;
	while(str1[i]!=0 and str2[i]!=0){
		if (str1[i]>str2[i]){
			return 1;
		}else{
			if (str1[i]<str2[i]){
				return -1;
			}
		}
		i++;
	}
	if(str1[i]==0 and str2[i]==0){
		return 0;
	}else{
		if (str1[i]==0){
			return -1;
		}else{
			return 1;
		}
	}
}
int main(){
	char cadena1[100], cadena2[100];
	int resultado;
	cout<<"Ingrese la primera cadena: ";
	cin>>cadena1;
	cout<<"Ingrese la segunda cadena: ";
	cin>>cadena2;
	resultado= mistrcmp(cadena1, cadena2);
	
	if (resultado==0){
		cout<<"Las cadenas son iguales"<<endl;
	}else{
		if (resultado == 1){
			cout<<"La primera cadena es mayor"<<endl;
		}else{
			cout<<"La segunda cadena es mayor"<<endl;
		}
	}
	return 0;
}

