/*2. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál 
de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

#include<iostream>
using namespace std;

struct datosAlumnos{
	char nombre[30];
	int edad;
	float promedio;
}alumnos1A[30],alumnos1B[30];
int main(){
	float promedioMax=0;
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"\nDigite el nombre del Alumno: "; cin.getline(alumnos1A[i].nombre,30,'\n');
		cout<<"Digite la edad del Alumno: "; cin>>alumnos1A[i].edad;
		cout<<"Digite el promedio del Alumno: "; cin>>alumnos1A[i].promedio;
		if(alumnos1A[i].promedio>promedioMax){
			promedioMax=alumnos1A[i].promedio;
		}
	}
	cout<<"\nEl promedio más alto del grupo es: "<<promedioMax<<endl;
	
	for(int i=0; i<3; i++){
		cout<<"\nEl nombre del alumno es: "<<alumnos1A[i].nombre<<endl;
		cout<<"La edad del alumno es: "<<alumnos1A[i].edad<<endl;
		cout<<"El promedio del alumno es: "<<alumnos1A[i].promedio<<endl;
	}
	return 0;
}
