//Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int cantnombres;
	cout<<"Ingrese la cantidad de nombres a leer"<<endl;
	cin>>cantnombres;
	cout<<endl;
	char nombres[100][30];
	for (int i=0; i<cantnombres; i++){
		cout<<"Escriba un nombre"<<endl;
		cin>>nombres[i];
	}
	
	for (int i = 0; i < cantnombres - 1; i++) {
        for (int j = i + 1; j < cantnombres; j++) {
            if (strcmp(nombres[i], nombres[j]) > 0) {
                char temp[30];
                strcpy(temp, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], temp);
            }
        }
    }
	cout<<"Los nombres ordenados alfabeticamente: "<<endl;
	for(int i = 0; i<cantnombres; i++){
		cout<< nombres[i] <<endl;
	}
	return 0;
}
