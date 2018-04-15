#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char texto1[10];
    char texto2[10];
    char texto3[4];

    printf("Texto: ");
    fflush(stdin);
    gets(texto1);

    strcpy(texto2,texto1);
    fflush(stdin);

    strncpy(texto3,texto1,3);
    fflush(stdin);
    strupr(texto3);
    puts(texto3);


    //strlwr(nombre); //minuscula
    //strupr(nombre); // mayuscula
    return 0;
}
