/*Lenguaje C++
Estructura Switch

switch(variable){
	case 1: accion
	break;
	case 2: accion
	break;
	.....
	caso n: accion
	break;
	default; accion

}
*/

#include<iostream>
using namespace std;
int main(){
	float n1,n2;
	int opc;
	
	cout<<"\tCALCULADORA\n";
	//cout<<"Digite un numero: "; cin>>n1;
	//cout<<"Digite otro numero: "; cin>>n2;
	
	cout<<"Digite dos numeros: ";cin>>n1>>n2;
	cout<<"1.- Suma\n";
	cout<<"2.- Resta\n";
	cout<<"3.- Multiplicacion\n";
	cout<<"4.- Division\n";
	cout<<"Digite una opcion: "; cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"La suma es: "<<n1+n2;
		break;
		case 2:
			cout<<"La resta es: "<<n1-n2;
		break;
		case 3:
			cout<<"La multiplicacion es: "<<n1*n2;
		break;
		case 4:
			cout<<"La division es: "<<n1/n2;
		break;
		default:
			cout<<"Opcion no valida";
	}
	return 0;
}
