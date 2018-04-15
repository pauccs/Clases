#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float promedio = 0;
    int contador = 0;
    int max = 0;
    int min = 0;
    int aux = 0;

    for(int i=0;i<5;i++)
    {
       printf("Ingrese un numero: ");
       scanf("%d", &numero);
       contador = contador + numero;
       aux++;

       if(aux == 1)
       {
          max = numero; //le asigno al primer numero un comparativo
          min = numero;
       }

       if(numero > max)
       {
          max = numero;
       }

       if(numero < min)
       {
          min = numero;
       }

       promedio = contador / 5;

    }
    printf("El promedio es %f", promedio);
    printf("\nEl maximo es: %d \nEl minimo es %d", max,min);

    return 0;
}
