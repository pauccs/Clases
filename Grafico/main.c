#include <stdio.h>
#include <stdlib.h>
#define T 4
int main()
{
   int valor[T]={};
   int i;
   int j;
   int max = 0;

   int entre = 5;
   int menor = 4;
   int mayor = 11;

   //pasas los valores que tenes del contador al array que va a mostrar el grafico
   valor[1] = entre;
   valor[2] = menor;
   valor[3] = mayor;

   for (i = 0; i < 4; i++)
      if (valor[i] > max)
         max = valor[i];

   for (i = max; i > 0; i--){
      for (j = 0; j < 4; j++)
         if (valor[j] >= i)
            printf("*");
         else
            printf(" ");

      putchar('\n');
   }
    return 0;
}
