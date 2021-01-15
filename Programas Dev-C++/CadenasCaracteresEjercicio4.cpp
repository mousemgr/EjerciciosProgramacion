/* Lenguaje
Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, 
convertir su nombre a minusculas, caso contrario no convertirlo
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	char nombre[30];
	int n;
	
	cout<<"Digite su nombre en MAYUSCULAS: "; cin.getline(nombre,30,'\n');
	
	n=strncmp(nombre,"A",1); //strncmp - > devuelve la distancia de la letra a la posición requerida
	
	if(n==0){
		strlwr(nombre); //strlwr -> combierte la cadena a minusculas
		cout<<nombre<<endl;
	}
	else{
		cout<<nombre<<endl;
	}
	
	return 0; 
}
