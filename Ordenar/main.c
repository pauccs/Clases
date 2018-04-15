#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vector[5]={1,6,4,9,7};
    int auxiliar;
    int i, j;
    for(i=0; i<5-1;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(vector[i]<vector[j]) //criterio de ordenamiento
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }

    }
    printf("Ordenado: ");
    for(i=0;i<5;i++)
    {
       printf("\n%d", vector[i]);
    }

    return 0;
}


