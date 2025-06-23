//Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
//tendencia central media, mediana y moda.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int numeros[30];
	int i, j, temp, maxrepeticiones, suma, moda, repeticiones;
	float media, mediana;
	suma=0;
	maxrepeticiones=0;
	repeticiones=1;
	moda=numeros[0];
	srand(time(0));
	for (i=0; i<30; i++){
		numeros[i]= 100+ rand()%901;
	}
	cout<<"Los numeros son: "<<endl;
	for(i=0; i<30; i++){
		cout<<numeros[i]<<endl;
	}
	for(i=0; i<30; i++){
		suma=suma+numeros[i];
	}
	media=suma/30;
	cout<<"La media es: "<<media<<endl;
	for(i=0; i<30-1; i++){
		for ( j=i+1; j<30; j++){
			if (numeros[i]>numeros[j]){
				temp= numeros[i];
				numeros[i]=numeros[j];
				numeros[j]= temp;
			}
		}
	}
	mediana= (numeros[14]+numeros[15])/2;
	cout<<"Mediana: "<<mediana<<endl;
	for(i=0; i<30; i++){
		for(j=i+1; j<30; j++){
			if (numeros[i]==numeros[j]){
				repeticiones++;
			}
		}
		if (repeticiones>maxrepeticiones){
			maxrepeticiones=repeticiones;
			moda=numeros[i];
		}
	}
	if(maxrepeticiones>1){
		cout<<"Moda: "<<moda<<" se repite "<<maxrepeticiones<<" veces "<<endl;
	}else{
		cout<<"No hay moda"<<endl;
	}
	return 0;
}
