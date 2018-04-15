#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numeroIngresado;
    int numerOculto;
    char letra = 's';
    int jugar;

    while(letra == 's')
    {
       numerOculto = getAleatorio(1,100,1); // LLAMA A LA FUNCION "ALEATORIO" DANDOLE LOS PARAMETROS Y LO GUARDA EL NUMERO EN UNA VARIABLE
       jugar = 1;

       while(jugar == 1)
       {
           numeroIngresado = getInt("Ingrese un numero: ");

           if(numeroIngresado < 0)
           {
               jugar = 0;
           }
           else if(numeroIngresado == numerOculto)
           {
               printf("\nFelicidades ganaste!\n");
               jugar = 0;
           }
           else if(numeroIngresado < numerOculto)
           {
               printf("\nAun te falta\n");
           }
           else if(numeroIngresado > numerOculto)
           {
               printf("\nTe pasaste, intentalo de nuevo\n");
           }
       }

       letra = getChar("\nDesea continuar?\n");
    }
    return 0;
}
