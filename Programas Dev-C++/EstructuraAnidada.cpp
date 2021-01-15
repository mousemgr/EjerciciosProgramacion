/* Lenguaje C++
Estructura Anidada
Ejercicio: Realizar un codigo para el registro de una carrera, los datos a solicitar seran los siguientes: 
Nombre, Apellido, edad, peso y direccion
*/
#include<iostream>
using namespace std;

struct datosNombres{
	char nombre[30];
	char apellidos[30];
};

struct datosDireccion{
	char calle[30];
	int numero;
	char colonia[30];
};

struct datosCorredores{
	struct datosNombres nombres;
	int peso;
	float edad;
	struct datosDireccion direccion;
}carrera21k[1000], carrera10k[1000], carrera5k[1000];

int main(){
	cout<<"\tRegistro de Corredores\n";
	for(int i=0; i<5; i++){
		cout<<"\n\tNombre\n";
		cout<<"Digite su nombre: "; cin.getline(carrera21k[i].nombres.nombre,30,'\n');
		cout<<"Digite su apellido: "; cin.getline(carrera21k[i].nombres.apellidos,30,'\n');
		cout<<"Digite su peso: "; cin>>carrera21k[i].peso;
		cout<<"Digite su edad: "; cin>>carrera21k[i].edad;
		cout<<"\n\tDireccion\n";
		cout<<"Digite su calle: "; cin.getline(carrera21k[i].direccion.calle,30,'\n');
		cout<<"Numero: "; cin>>carrera21k[i].direccion.numero;
		cout<<"Colonia: "; cin.getline(carrera21k[i].direccion.colonia,30,'\n');	
	}
	
	return 0;
}
