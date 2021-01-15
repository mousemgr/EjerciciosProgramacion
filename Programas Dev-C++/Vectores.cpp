/*Lenguaje C++
Vectores
*/
#include<iostream>
using namespace std;

int main(){
	int vector[5]; //Vector No esta inicializado
	int vector1[]={1,2,3,4,5};
	
	for(int i=0; i<5; i++){  //Rellena Vector
		cout<<"Digite un numero: "; cin>>vector[i];
	}
/*	
	cout<<"Digite un numero: "; cin>>vector[0];
	cout<<"Digite un numero: "; cin>>vector[1];
	cout<<"Digite un numero: "; cin>>vector[2];
	cout<<"Digite un numero: "; cin>>vector[3];
	cout<<"Digite un numero: "; cin>>vector[4];
*/

	for(int i=0; i<5; i++){     //Mostras Vector
		cout<<vector[i]<<" ";
	}	
	
/*
	cout<<vector[0];
	cout<<vector[1];
	cout<<vector[2];
	cout<<vector[3];
	cout<<vector[4];
	
	cout<<endl<<vector1[0];
	cout<<vector1[1];
	cout<<vector1[2];
	cout<<vector1[3];
	cout<<vector1[4];
*/		
	return 0;
}
