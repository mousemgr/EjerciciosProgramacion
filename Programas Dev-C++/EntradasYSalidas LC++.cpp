/* LENGUAJE C++
Entradas y Salidas
*/
#include<iostream>

using namespace std; //sirve para utilizar std y no ponerlo en el codigo

int main(){
	char sexo;
	int edad;
	float altura;
	
	cout<<"Digite su sexo: ";
	cin>>sexo;
	cout<<"Digite su edad: ";
	cin>>edad;
	cout<<"Digite su altura: ";
	cin>>altura;
	
	cout<<"\tMostrando datos del usuario\n";
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Altura: "<<altura<<endl;

	//endl -> es para dar espacio como \n
	
	return 0;
}
