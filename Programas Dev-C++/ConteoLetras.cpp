/*LENGUAJE C:
EJERCICIO: REalice un programa que lea todos los caracteres, pero que al digitar la letra "X" o "x" haga el conteo de cuantas letras se pusieron antes de esa.*/ 

#include <stdio.h>

 //variables globales
 
void pedirLetra(int letra);
char letra;
	
	int main () {
		
		pedirLetra(letra);
		int i=0;
		return 0; 
	}
	
	//variables locales 
	
	void pedirLetra(int letra) {
	int i=0;

	do{
		printf("Digite un valor: \n");
		scanf("%c",&letra);
		fflush(stdin);
		
		if (letra!= 'x' && letra!='X'){
			i++;
		} 
	} while(letra!= 'x' && letra!='X');
	printf("total de letras leidas: %d", i);      //operadores "!=" comparacion
	
}
