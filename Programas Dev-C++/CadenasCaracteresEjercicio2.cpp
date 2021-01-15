/*Lenguaje C++
Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo 
su contenido hacia otro arreglo de caracteres.*/
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
	char cadena1[30], cadena2[30];
	
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(cadena1,30,'\n');
	
	strcpy(cadena2,cadena1);
	
	cout<<"Cadena: "<<cadena2;
	
	return 0;
}
