/*Lenguaje C++
Suma de matrices
*/
#include<iostream>
using namespace std;
int main(){
	int filas, columnas, matriz1[100][100], matriz2[100][100], suma[100][100];
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
	cout<<"\nRellenando la matriz 1:\n";
	for(int i=0; i<filas; i++){//filas
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero en la posicion "<<i+1<<","<<j+1<<": "; cin>>matriz1[i][j];
		}
	}
	cout<<"\nRellenando la matriz 2:\n";
	for(int i=0; i<filas; i++){//filas
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero en la posicion"<<i+1<<","<<j+1<<": "; cin>>matriz2[i][j];
		}
	}
	for(int i=0; i<filas; i++){//filas
		for(int j=0; j<columnas; j++){
			suma[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	cout<<"\nResultado de la Suma de Matrices:\n";
	for(int i=0; i<filas; i++){//filas
		for(int j=0; j<columnas; j++){
			cout<<suma[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
