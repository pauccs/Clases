#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,j;
    int auxiliar;
    float auxfloat;
    int legajo [3];
    int nota1 [3];
    int nota2 [3];
    float promedio [3];
    char nombre [3][10]; //[cantidad de nombres a guardar] [cantidad de caracteres]
    char caraux [15];

    for(i=0;i<3;i++)
    {
        printf("Legajo: ");
        scanf("%d", &legajo[i]);

        printf("Nombre: ");
        fflush(stdin);
        gets(nombre[i]);

        printf("Primera nota: ");
        scanf("%d", &nota1[i]);

        printf("Segunda nota: ");
        scanf("%d", &nota2[i]);
        printf("\n");

        promedio[i]=(float)(nota1[i]+nota2[i])/2;
        //system("cls");
    }
    for(i=0;i<3-1;i++)
    {
        for(j=i+1; j<3;j++)
        {
            if(promedio[i]<promedio[j]) //criterio de ordenamiento
            {
                auxfloat = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = auxfloat;

                auxiliar = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = auxiliar;

                auxiliar = nota1[i];
                nota1[i] = nota1[j];
                nota1[j] = auxiliar;

                auxiliar = nota2[i];
                nota2[i] = nota2[j];
                nota2[j] = auxiliar;

                strcpy(caraux, nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],caraux);
            }
        }
    }

    for(i=0;i<3;i++)
    {
        printf("\nLos resultados son: ");
        printf("\n%d %s %d %d %.2f", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i]);
    }

    return 0;
}
