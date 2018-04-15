#include <stdio.h>
#include <stdlib.h>

/** \brief pide un numero entero y lo valida
 *
 * \param texto del mensaje a mostrar
 * \param el valor minimo del intervalo
 * \param el valor maximo del intervalo
 * \return un numero entero validado
 *
 */

int pedirEntero(char [], int, int);
int validarEntero(int, int, int);

int main()
{
    int edad;
    int legajo;
    edad=pedirEntero("Edad: ", 1, 60);

    legajo=pedirEntero("Legajo: ", 1, 1500);

    printf("\nLa edad es: %d\n", edad);
    printf("El legajo es: %d", legajo);
    return 0;
}

int pedirEntero(char mensaje[], int min, int max)
{
    int numero;

    printf("%s", mensaje);
    scanf("%d",&numero);
    numero = validarEntero(numero, min, max);

    return numero;
}

int validarEntero(int dato, int min , int max)
{
     while(dato < min || dato > max)
    {
       printf("Error, reingrese entre %d y %d", min, max);
       scanf("%d",&dato);
    }
    return dato;
}

//validar elementos con caracteres.
