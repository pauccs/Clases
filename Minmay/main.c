#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[10];

    printf("Nombre: ");
    fflush(stdin);
    gets(nombre);

    strlwr(nombre);
    nombre[0]=toupper(nombre[0]);

    puts(nombre);



    return 0;
}
