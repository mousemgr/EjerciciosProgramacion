/*Lenguaje C++
TABLA DE MULTIPLICAR
*/
#include<stdio.h>
int main(){
	int n;
	
	printf("Digite un numero del 1 al 10: "); scanf("%d",&n);
	if(n<10 && n>0){
		for(int i=1; i<=100; i++){
			printf("%d * %d = %d\n",n,i,n*i);
		}
	}
	else{
		printf("El valor NO esta dentro del rango");
	}
	return 0;
}
