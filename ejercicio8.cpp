//Comprobar si un número de 10 cifras es capicúa usando un vector
#include <iostream>
using namespace std;
int main(){
	int vector[10];
	long numero, i;
	bool esCapicua=true;
	
	cout<<"INGRESE UN NUMERO DE 10 CIFRAS"<<endl;
	cin>>numero;
	if (numero < 1000000000 or numero > 9999999999){
		cout<<"El numeral no tiene 10 cifras"<<endl;
		return 0;
	}
	for(i=9; i>=0; i--){
		vector[i]=numero%10;
		numero=numero/10;
	}
	
	for (i=0; i<5; i++){
		if(vector[i]!=vector[9-i]){
			esCapicua=false;
			break;
		}
	}
	if(esCapicua){
		cout<<"El numero es capicua"<<endl;
	}else{
		cout<<"El numero no es capicua"<<endl;
	}
	return 0;
}
