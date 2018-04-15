#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero[5];
    int acumulador = 0;
    float promedio = 0;
    int max = 0;
    int min = 0;
    int aux = 0;
    for(int i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("\n%d", &numero[i]);
        aux++;

        if(aux == 1)
        {
            max = numero[i];
            min = numero[i];
        }
        if(numero[i] > max)
        {
            max = numero[i];
        }
        if(numero[i] < min)
        {
            min = numero[i];
        }
    }
    printf("\n----------------------\n");
    printf("Numeros ingresados son: ");
    for(int i=0;i<5;i++)
    {
        printf("%d, ", numero[i]);
        acumulador = acumulador + numero[i];
    }
    promedio = (acumulador / aux);
    printf("\n----------------------\n");
    printf("El promedio es %f", promedio);
    printf("\nEl maximo es: %d   \nEl minimo es: %d", max,min);
}
