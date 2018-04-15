#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int porcentajeAumento;
    float sueldo;
    float nsueldo;
    int i;
    char nombre;
    char letra= '%';

    printf("Ingrese nombre: ");
    fflush(stdin);
    nombre=getche();//gets(nombre) <-- se utiliza en string;
    printf("\nIngrese sueldo: ");
    scanf("%f", &sueldo);
    printf("Ingrese aumento: ");
    scanf("%d",&i);

    porcentajeAumento = (sueldo *i)/100;
    nsueldo = sueldo + porcentajeAumento;

    printf("\nEl nombre es: %c  \nSueldo es %.2f  \nAumento de sueldo: %d  \nSueldo con sueldo: %.2f  \n%d%c",nombre, sueldo, porcentajeAumento, nsueldo, i,letra); //el porcentaje tambien puede mostrarse como %%
    return 0;
}
