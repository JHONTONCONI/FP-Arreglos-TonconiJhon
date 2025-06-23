//Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido
//pertenece a esa persona.
#include <iostream>
using namespace std;

bool Apellido(char nombrecompleto[], char apellido[]){
	int i=0, j=0;
	while(nombrecompleto[i]!=0){
		if(nombrecompleto[i]==apellido[0]){
			j=0;
			while(nombrecompleto[i+j]==apellido[j] and apellido[j]!=0){
				j++;
			}
			if (apellido[j]==0){
				return true;
			}
		}
		i++;
	}
	return false;
}
int main(){
	int cantpalabra, i, j, k;
	char palabra[30];
	char nombrecompleto[100]="";
	char apellido[30];
	cout<<"Ingrese la cantidad de palabras que contiene su nombre"<<endl;
	cin>>cantpalabra;
	cout<<"Ingrese su nombre completo(una palabra a la vez)"<<endl;
	j=0;
	for(int i=0; i<cantpalabra; i++){
		cin>>palabra;

	k=0;
	while(nombrecompleto[j]!=0){
		j++;
	}
	while(palabra[k]!=0){
		nombrecompleto[j]=palabra[k];
		j++;
		k++;
	}
	if(i!=cantpalabra-1){
		nombrecompleto[j]= ;
		j++;
	}
	
	}
	nombrecompleto[j]=0;
	cout<<"Ingrese el apellido a buscar: ";
	cin>>apellido;
	cout<<endl;
	if(Apellido(nombrecompleto, apellido)){
		cout<<"El apellido pertenece a la persona. "<<endl;
	}else{
		cout<<"El apellido no pertenece a la persona. "<<endl;
	}
	return 0;
}
