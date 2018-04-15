#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int [], int);
void cargarVector(int [], int);

int main()
{
    int vector[5]={};
    printf("Antes de cargar\n");
    cargarVector(vector, 5);
    printf("Despues de cargar\n");
    mostrarVector(vector, 5);

    return 0;
}


void mostrarVector(int vector [], int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        printf("\n%d", vector[i]);
    }
}


void cargarVector(int vector[], int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        printf("Ingrese un numero");
        scanf("%d", &vector[i]);
    }
}
