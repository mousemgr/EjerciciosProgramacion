/*LENGUAJE C
Condicionales IF
Ejercicio: Determinar si un numero es par o impar
*/

#include<stdio.h>
int main(){
/*
	printf("La división de 5/2= %f\n",5.0/2.0);
	printf("El modulo de 5/2= %d",5%2);
*/

	int n,r;
	
	printf("Digite un numero: "); scanf("%d",&n);
	r=n/2;
	if(r==0){
		printf("El numero es par");
	}
	else{
		printf("El numero es impar");
	}
	
	return 0;
}
