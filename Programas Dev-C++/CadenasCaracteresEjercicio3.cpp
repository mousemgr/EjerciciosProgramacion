/*
Ejercicio: Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
convertirlos a sus respectivos valores y por ultimo sumarlos
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	char cadena1[5], cadena2[5];
	float suma, valorEntero, valorFlotante;
	
	cout<<"Digite un valor entero: "; cin.getline(cadena1,5,'\n');
	cout<<"Digite otro valor flotante: "; cin.getline(cadena2,5,'\n');
	
	valorEntero=atoi(cadena1);//atoi -> pasar de cadena de caracteres a int
	valorFlotante=atof(cadena2);// atof -> pasar de cadena de caracteres a float
	
	suma=valorEntero+valorFlotante;
	
	cout<<"La suma es igual a: "<<suma;
	
	return 0;
}
