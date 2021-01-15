/* Lenguaje C++
Estructura Anidada
Ejercicio: Realizar un codigo para el registro de una carrera, los datos a solicitar seran los siguientes: 
Nombre, Apellido, edad, peso y direccion
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
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
	char categoria;
}carrera21k[1000], carrera10k[1000], carrera5k[1000];

int main(){
	int km;
	for(int i=0; i<5; i++){
	cout<<"Digite la cantidad de KM a correr: "; cin>>km;
	if(km==21){
		cout<<"\tRegistro de Corredores\n";
		cout<<"\n\tCoredor No."<<i+1<<endl;
		cout<<"\n\tNombre\n";
		fflush(stdin);
		cout<<"Digite su nombre: "; cin.getline(carrera21k[i].nombres.nombre,30,'\n');
		cout<<"Digite su apellido: "; cin.getline(carrera21k[i].nombres.apellidos,30,'\n');
		cout<<"Digite su peso: "; cin>>carrera21k[i].peso;
		cout<<"Digite su edad: "; cin>>carrera21k[i].edad;
		cout<<"\n\tDireccion\n";
		fflush(stdin);
		cout<<"Digite su calle: "; cin.getline(carrera21k[i].direccion.calle,30,'\n');
		fflush(stdin);
		cout<<"Numero: "; cin>>carrera21k[i].direccion.numero;
		fflush(stdin);
		cout<<"Colonia: "; cin.getline(carrera21k[i].direccion.colonia,30,'\n');	
		if(carrera21k[i].edad<18){
			carrera21k[i].categoria='J';
		}
		else if(carrera21k[i].edad>18 && carrera21k[i].edad<=50){
			carrera21k[i].categoria='S';
		}
		else if(carrera21k[i].edad>50){
			carrera21k[i].categoria='V';
		}
	}
	if(km==10){
		cout<<"\n\tCoredor No."<<i+1<<endl;
		cout<<"\n\tNombre\n";
		fflush(stdin);
		cout<<"Digite su nombre: "; cin.getline(carrera10k[i].nombres.nombre,30,'\n');
		cout<<"Digite su apellido: "; cin.getline(carrera10k[i].nombres.apellidos,30,'\n');
		cout<<"Digite su peso: "; cin>>carrera10k[i].peso;
		cout<<"Digite su edad: "; cin>>carrera10k[i].edad;
		cout<<"\n\tDireccion\n";
		fflush(stdin);
		cout<<"Digite su calle: "; cin.getline(carrera10k[i].direccion.calle,30,'\n');
		fflush(stdin);
		cout<<"Numero: "; cin>>carrera10k[i].direccion.numero;
		fflush(stdin);
		cout<<"Colonia: "; cin.getline(carrera10k[i].direccion.colonia,30,'\n');	
		if(carrera10k[i].edad<18){
			carrera21k[i].categoria='J';
		}
		else if(carrera10k[i].edad>18 && carrera10k[i].edad<=50){
			carrera10k[i].categoria='S';
		}
		else if(carrera21k[i].edad>50){
			carrera10k[i].categoria='V';
		}
	}
}
	
	return 0;
}
