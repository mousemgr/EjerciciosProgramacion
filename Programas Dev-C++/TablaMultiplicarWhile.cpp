/*Lenguaje C
TABLA DE MULTIPLICAR
*/
#include<stdio.h>
int main(){
	int n, i, conta=0;
	printf("Digite un numero del 1 al 10: "); scanf("%d",&n);
	while((n>10 || n<=0) && conta<2){		
		printf("El valor NO esta dentro del rango\n");
		printf("Digite otro numero del 1 al 10: "); scanf("%d",&n);
		conta++;
	}
	if(n<=10 && n>0){
		for(i=1; i<=10; i++){
			printf("%d * %d = %d\n",n,i,n*i);
		}
	}
	else if(n>10 || n<=0){
		printf("Te quivocaste muchas veces");
	}
	else{
		printf("NO RECONOCIDO");
	}

	return 0;
}
