/*LENGUAJE C++
VECTORES 
Promedio de salon
*/
#include<iostream>
using namespace std;
int main(){
	int calificaciones[100];
	int n;
	float suma=0, promedio;
	
	cout<<"Digite el numero de alumnos: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite la califacion del alumno "<<i+1<<": "; cin>>calificaciones[i];
		while(calificaciones[i]<0 || calificaciones[i]>10){
			cout<<"La calificacion no esta dentro del rango\n";
			cout<<"Digite otra calificacion del alumno "<<i+1<<": "; cin>>calificaciones[i];
			
		}
		suma=suma+calificaciones[i];
	}
	promedio=suma/n;
	
	cout<<"El promedio del grupo es: "<<promedio;
	
	return 0;
}
