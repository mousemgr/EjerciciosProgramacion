/*LENGUAJE C: Realice un programa que contenga un menú y pueda elegir entre dos figuras (cuadrado y triangulo)*/

#include<stdio.h>

//variables globales

void cuadrado (void);
//void triangulo (void);

int main () {
	int n, opcion;
	do
	{
		 //OPCIONES
		 printf("FIGURAS DISPONIBLES");
		 printf("1.- CUADRADO");
		 printf("2.- TRIANGULO");
		 printf("Selecciona una figura: \n ");
		 scanf("%d",&opcion);
		 
		 switch (opcion) 
		 {
		 	case 1:
		 		cuadrado ();
		 		break;
		 	/*case 2: 
		 		triangulo ();
		 		break;*/
		 }
		 if(opcion>2){
		 	printf("OPCION NO DISPONIBLE\n ");
		 }
		 
		 //Regresar a menu
		 printf("DESEA INGRESAR OTRA FIGURA?");
		 printf("1.-SI     2.-NO");
		 scanf("%d",&n);
	
	} while (n==1);
	return 0;
}

void cuadrado (void){
	int a,b=1, i=1;
	printf("Digite la dimension de la figura: ");
	scanf("%d",&a);
	
	while (i<=a)
	{
		while (b<=a)
		{
		printf("0\t");
		b++;
		}
	printf("\n");
	b=1;
	i++;
}
//void triangulo (void)
 }
