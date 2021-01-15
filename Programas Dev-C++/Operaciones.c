/* Lenguaje C
Operaciones
*/

#include<stdio.h>
int main (){
	float n1, n2, suma, resta, multiplicacion, division;
	
		
	printf("Digite un numero: ");
	scanf("%f", &n1);
	printf("Digite otro numero: ");
	scanf("%f", &n2);
	
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	division=n1/n2;
	
	printf("\tMostrando resultados de operaciones\n");
	printf("La suma es: %.2f\n", suma);
	printf("La resta es: %.2f\n", resta);
	printf("La multiplicacion es: %.2f\n", multiplicacion);
	printf("La division es: %.2f", division);
	
	
	return 0;
}
