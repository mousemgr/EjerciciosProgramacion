/*LENGUAJE C
MATRICES
*/
#include<stdio.h>
int main(){
	int matriz[100][100];
	int filas, columnas;
	int i,j;
	
	printf("Digite el numero de filas: "); scanf("%d",&filas);
	printf("Digite el numero de columnas: "); scanf("%d",&columnas);
	
	for(i=0; i<filas; i++){//filas
		for(j=0; j<columnas; j++){//columnas
			printf("Digite un numero para la posicion %d,%d: ",i+1,j+1); scanf("%d",&matriz[i][j]);
		}
		printf("\n");	
	}
	
	for(i=0; i<filas; i++){//filas
		for(j=0; j<columnas; j++){//columnas
			printf("%d ",matriz[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}
