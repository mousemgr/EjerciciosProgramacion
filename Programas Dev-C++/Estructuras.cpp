/* LENGUAJE C++
ESTRUCTURAS
*/
#include<iostream>
using namespace std;

struct escuelas{
	char nombre[30];
	int alumnos;
	float promedio;
}clubTesla;
int main(){
	cout<<"Digite el nombre de la escuela: "; cin.getline(clubTesla.nombre,30,'\n');
	cout<<"Digite el numero de alumnos: "; cin>>clubTesla.alumnos;
	cout<<"Digite el promedio de la escuela: "; cin>>clubTesla.promedio;
	
	return 0;
}
