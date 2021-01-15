/*Lenguaje C++
Numero Magico
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main(){
	int dato, n, errores=0;
	
	srand(time(NULL));
	dato=1+rand()%(100); // generando el numero aleatorio
	//cout<<"El numero aleatorio es: "<<dato;
	cout<<"\tJuego del NUMERO MAGICO\n";
	cout<<"Digite un numero: "; cin>>n;
	while(n!=dato){
		if(n<dato){
			cout<<"El numero magico es mas grande\n";
			cout<<"Digite otro numero: "; cin>>n;
		}
		else{
			cout<<"El numero magico es menor\n";
			cout<<"Digite otro numero: "; cin>>n;
		}
		errores++;
	}
	if(n==dato){
		cout<<"FELICIDADES!!!\nEl numero magico es: "<<dato<<endl;
		cout<<"Te equivocaste :"<<errores+1;
	}
	return 0;
}
