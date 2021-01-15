/*Lenguaje C++
Tarea Vector Invertido
*/
#include<iostream>
using namespace std;
int main(){
	int n, vector[100];
	cout<<"Digite el tamaño de su vector: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Digite un numero para la posicion "<<i+1<<": "; cin>>vector[i];
	}
	for(int i=0; i<n; i++){
		cout<<vector[i]<<" ";
	}
	cout<<endl;
	for(int i=n-1; i>=0; i--){
	cout<<vector[i]<<" ";
	}
	
	
	return 0;
}
