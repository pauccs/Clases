#include <stdio.h>
#include <stdlib.h>

/*Escribir  un programa que realice las siguientes acciones
1. Limpie la pantalla
2. Asigne a 2 variables numero1 y numero2 valores distintos de cero
3. Efect�e el producto de dichas variables
4. Muestre el resultado pos pantalla
Obtenga el cuadrado de numero1 y lo muestre par pantalla*/


int main(int argc, char *argv[]) {

	int a;
	int b;
	int producto;
	int cuadrado;

	system("cls");

	do{
	printf("\nIngrese 1 numero: ");
	scanf("%d",&a);
	printf("El numero ingresado es: %d \n", a);
		if(a==0)
		{
            printf("\nIngrese numero mayor a 0\n");
            scanf("%d", &a);
		}
    }while(a==0);

	do{
	printf("\nIngrese 2\247 numero: ");
	scanf("%d",&b);
	printf("El numero ingresado es: %d \n", b);
		if(b==0)
		{
		printf("\nIngrese numero mayor a 0\n");
		scanf("%d", &b);
		}
    }while(b==0);

	producto=a*b;
	cuadrado=a*a;

	printf("\nEl valor 1\247: %d\n El valor 2\247: %d\n\n   El producto es: %d\n\n El cuadrado del 1\247 valor %d es: %d \n",a,b,producto,a,cuadrado);
	printf("\n\n\n\n");



	return 0;
}
