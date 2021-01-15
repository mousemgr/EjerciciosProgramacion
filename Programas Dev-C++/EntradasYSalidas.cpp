/*LENGUAJE C
Entradas y Salidas
*/
//Comentario por linea

#include<stdio.h> 

int main(){ 
	char sexo;
	int edad;
	float altura;
	
	//si el tipo de dato en la funcion scanf es entero se ocupa la letra d
	//si el tipo de dato en la funcion scanf es flotante se ocupa la letra f
	//si el tipo de dato en la funcion scanf es char se ocupa la letra c
		
	printf("Digite su sexo: ");
	scanf("%c",&sexo);
	printf("Digite su edad: ");
	scanf("%d",&edad);
	printf("Digite su altura: ");
	scanf("%f",&altura);
		
	// \t ->genera una sangria
	// \n ->sirve para un salto de linea
	
	printf("\tMostrando datos del usuario\n");
	printf("\tSexo: %c\n",sexo);
	printf("\tEdad: %d\n",edad);
	printf("\tAltura: %.2f\n",altura);
	
	//.2 solo muestra dos decimales en flotante
	
	return 0;
	
}
