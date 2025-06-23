//Leer una línea de entrada. Descartar todos los símbolos excepto los dígitos. Convertir la cadena de dígitos en
//un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones atoi y isdigit te pueden
//ayudar para este propósito) Ejemplo: “En aproximadamente 120 días llegaremos al año 2022 y festejaremos”
//1202022 -> 1202024
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main(){
	char palabra[100];
	char digitos[100];
	int j=0;
	int i, n;
	
	cout<<"Ingrese una palabra(para terminar escriba fin "<<endl;
	while (true){
		cin>>palabra;
		if (palabra[0] == f and palabra[1] == i and palabra[2] == n and palabra[3] == 0){
			break;
		}
		for(i=0; palabra[i]!=0; i++){
			if(isdigit(palabra[i])){
				digitos[j]=palabra[i];
				j++;
			}
		}			
	}
	digitos[j]=0;
	n=atoi(digitos);
	n=n+2;
	cout<<"El numero resultante del texto es: "<<n<<endl;
	return 0;
}
