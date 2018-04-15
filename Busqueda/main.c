#include <stdio.h>
#include <stdlib.h>
void ordenar(int [], int);
void cargarVector(int [], int);
void mostrarVector(int [], int);

// mostrar, cargar, ordena.

int main()
{
    int vector[5]={1,6,4,9,7};

    printf("Carga, ordena y muestra\n");
    cargarVector(vector, 5);
    ordenar(vector,5);
    mostrarVector(vector, 5);

    return 0;
}

void cargarVector(int vector[], int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        //printf("Ingrese un numero: ");
        //scanf("%d", &vector[i]);
        printf("%d\n", vector[i]);
    }
}


void mostrarVector(int vector [], int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        printf("\n%d", vector[i]);
    }
}

void ordenar(int vector [], int tam)
{
    int i,j,auxiliar;
    for(i=0; i<tam-1;i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vector[i]<vector[j]) //criterio de ordenamiento
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }

    }
}
