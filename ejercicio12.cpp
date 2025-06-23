//Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado,
//false en caso contrario
#include <iostream>
using namespace std;
bool Orden(int vector[], int longitud){
	int i;
	for(i=0; i<longitud-1; i++){
		if(vector[i]>vector[i+1]){
			return false;
		}
	}
	return true;
}

int main() {
    int cant;
    cout << "Ingrese la cantidad de numeros del arreglo: ";
    cin >> cant;
    int numeros[cant];
    for (int i = 0; i < cant; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];	
	}
	if(Orden(numeros, cant)){
		cout<<"El arreglo esta correctamente ordenado"<<endl;
	}else{
		cout<<"El arreglo no esta ordenado"<<endl;
	}
	return 0;
}
