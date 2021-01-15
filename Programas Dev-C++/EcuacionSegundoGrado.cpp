/*Lenguaje C++
Ecuacion de segundo grado
*/

#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float a,b,c,x1,x2,d;
	
	cout<<"\tEcuacion de Segundo Grado\n";
	cout<<"Digite el valor de a: ";
	cin>>a;
		cout<<"Digite el valor de b: ";
	cin>>b;
		cout<<"Digite el valor de c: ";
	cin>>c;
	
	d=pow(b,2)-4*a*c;
	
	if(d<0){
		cout<<"La ecuacion no tiene solucion en los reales";
	}
	else if(a==0){
		cout<<"No es una ecuacion de segundo grado";
	}
	else{
		x1=(-b+sqrt(pow(b,2) - 4*a*c))/(2*a);
		x2=(-b-sqrt(pow(b,2) - 4*a*c))/(2*a);
	
		cout<<"El valor de x1 es: "<<x1<<endl;
		cout<<"El valor de x2 es: "<<x2<<endl;	
	}
	
	return 0;
}
