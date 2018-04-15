#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contpos = 0;
    int contneg = 0;

    for(int i=0; i<10;i++)
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &numero);
        if(numero>0)
        {
            contpos++;
        }
        else{
            contneg++;
        }
        system("cls");
    }
    printf("La cantidad de positivos son : %d \n La cantidad de negativos son: %d", contpos, contneg);





    return 0;
}
