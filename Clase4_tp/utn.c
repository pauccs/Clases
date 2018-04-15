#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInt(char mensaje[])
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    return numero;
}

float getFloat(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);
    return numero;
}


char getChar(char mensaje[])
{
    char letra;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &letra);
    return letra;
}

/** \brief Genera un numero aleatorio
 * \param desde - numero aleatorio minimo
 * \param hasta - numero aleatorio maximo
 * \param iniciar - analiza si es el primer numero solicitado
 * \return retorna un numero aleatorio
 */

char getAleatorio (int desde, int hasta ,int iniciar)
{
    if(iniciar)
    {
        srand(time(NULL));
        return desde + (rand() % (hasta + 1 - desde));
    }
}
