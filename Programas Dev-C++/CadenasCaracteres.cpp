/*Lenguaje C++
Cadenas de Caracteres o String
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char nombre[30];
	
	cout<<"Digite su nombre: ";
	cin.getline(nombre,30,'\n');
	
	cout<<"Su nombre es: "<<nombre;
	
	return 0;
}
