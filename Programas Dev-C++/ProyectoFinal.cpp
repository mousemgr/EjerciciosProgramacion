/*Lenguaje C++
Proyecto FINAL
Cajero ATM
*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
//protipos de funciones
int menu(); // prototipo de funcion del menu
float ingresar(float dineroInicial);  // prototipo de funcion de ingresar
float retirar(float dineroInicial);
float deposito(float dineroInicial);
float saldo(float dineroInicial);

//estructuras
struct depositos{
	char nombre[30];
	char no_cuenta[30];
	float deposito;
}BBVA;

//variables globales
float dineroInicial;
float dineroIngresar,dineroRetirar,dineroFinal;

//funcion principal
int main(){
	float dineroIngresar,dineroFinal;
	int opc, contra, pin=1234;
	
	cout<<"Digite su PIN: "; cin>>contra;
	system("cls");
	while(contra!=pin){
		cout<<"Contraseña Incorrecta\n";
		cout<<"Digite su PIN: "; cin>>contra;
		system("cls");
	}
	while(opc!=5){
		opc=menu();
		system("cls");
		if(opc==1){
			dineroInicial=ingresar(dineroInicial);
		}
		if(opc==2){
			dineroInicial=retirar(dineroInicial);
		}
		if(opc==3){
			dineroInicial=saldo(dineroInicial);
		}
		if(opc==4){
			dineroInicial=deposito(dineroInicial);
		}
		if(opc==5){
			cout<<"\nVuelva pronto";
		}
		else{
			cout<<"\n";
		}
	}
	return 0;
}

//definicion de funciones
int menu(){
	int opcion;
	cout<<"\tBIENVENIDO A SU CAJERO ATM\n";
	cout<<"1.- Ingresar\n";
	cout<<"2.- Retirar\n";
	cout<<"3.- Saldo\n";
	cout<<"4.- Deposito\n";
	cout<<"5.- Salir\n";
	cout<<"Digite una opcion: "; cin>>opcion;
	return opcion;
}
float ingresar(float dineroInicial){
	cout<<"Digite la cantidad a ingresar: "; cin>>dineroIngresar;
	dineroFinal=dineroInicial+dineroIngresar;
	cout<<"Su saldo Final es: "<<dineroFinal;
	return dineroFinal;
}
float retirar(float dineroInicial){
	cout<<"Digite la cantidad a retirar: "; cin>>dineroRetirar;
	if(dineroRetirar>dineroInicial){
		cout<<"No cuenta con esa cantidad";
		dineroFinal=dineroInicial;
		return dineroFinal;
	}
	else{
		dineroFinal=dineroInicial-dineroRetirar;
		cout<<"Su saldo Final es: "<<dineroFinal;
		return dineroFinal;
	}
}
float deposito(float dineroInicial){
	int n;
	fflush(stdin);
	cout<<"Digite el nombre: "; cin.getline(BBVA.nombre,30,'\n');
	fflush(stdin);
	cout<<"Digite el No. de cuenta: "; cin.getline(BBVA.no_cuenta,30,'\n');
	n=strlen(BBVA.no_cuenta);
	if(strlen(BBVA.no_cuenta)==16){
		cout<<"Digite la cantida a depositar: "; cin>>BBVA.deposito;
		if(BBVA.deposito>dineroInicial){
			cout<<"No cuenta con esa cantidad";
			dineroFinal=dineroInicial;
			return dineroFinal;
		}
		else{
			dineroFinal=dineroInicial-BBVA.deposito;
			cout<<"Su saldo Final es: "<<dineroFinal;
			return dineroFinal;
		}
	}
	
	else{
		cout<<"No. de cuenta invalido";
	}
}
float saldo(float dineroInicial){
	cout<<"Su saldo es "<<dineroInicial<<endl;
	dineroFinal=dineroInicial;
	return dineroFinal;
}
