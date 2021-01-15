/*Lenguaje C++
Cadenas de Caracteres o String
Ejercicio 1: 
Hacer un programa que pida al usuario que digite una cadena de caracteres, luego
verificar la longitud de la cadena, y si ésta supera a 10 caracteres mostrarla en 
pantalla, caso contrario no mostrarla
*/
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
	char cadena[30];
	int tamano;
	
	cout<<"Digite una palabra: ";
	cin.getline(cadena,30,'\n');
	tamano=strlen(cadena);//cuenta cuantos caracteres tiene la cadena
	if(tamano>10){
		cout<<"Su palabra es: "<<cadena<<endl;
		cout<<"La cadena tiene: "<<tamano<<" caracteres";
	}
	else{
		cout<<"La cadena no supera los 10 caracteres"<<endl;
		cout<<"La cadena tiene: "<<tamano<<" caracteres";
	}
	
	getch();
	return 0;
}
