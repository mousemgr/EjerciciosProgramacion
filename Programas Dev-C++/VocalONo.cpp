/*Lenguaje C++
Ejercicio: Determinar si una letra es vocal o no
*/

#include<iostream>
using namespace std;
int main(){
	char vocal;
	
	cout<<"Digite una letra: "; cin>>vocal;
	
	switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Es vocal";
		break;
		default:
			cout<<"No es una vocal";

	}
	
	return 0;
}
