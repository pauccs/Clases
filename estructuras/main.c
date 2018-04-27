#include <stdio.h>
#include <stdlib.h>


typedef struct
{
        char apellido[50];
        char calle[50];
        int altura;
        int piso;
        char dpto;
        int cp;
        char localidad[50];
    }eDomicilio;


typedef struct
{
        int legajo;
        char nombre[50];
        eDomicilio direccion;
    }eAlumno;

typedef struct
{
    int legajo;
    char nombre[50];
       eDomicilio direccion;
    }eProfesor;

int main()
{

    eAlumno a;
    a.direccion.cp=1948;


    printf("%d",a.direccion.cp);

    return 0;
}
