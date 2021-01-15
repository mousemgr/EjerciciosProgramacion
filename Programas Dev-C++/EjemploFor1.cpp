/*Lenguaje C
For
*/

#include<stdio.h>
int main(){
	for(int i=0; i<10; i++){    //Salto de linea
		for(int j=0; j<=i; j++){
			printf("* ");	//Rellenando por renglon
		}
		
		printf("\n");
		
	}
	return 0;
}
