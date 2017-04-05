#include <stdio.h>
#include <stdlib.h>


int suma(int x, int y)
{
    printf("La suma de los numeros es: %d \n", x+y);
    return 0;
}

int resta(int x, int y)
{
    printf("La resta de los numeros es: %d \n", x-y);
    return 0;
}

float division(int x, int y)
{
    if(y==0)
    {
        printf("Ingrese nuevamente el 2do operando, no se puede dividir por 0\n");
    }
    if(y!=0)
    {
    printf("La division de los numero es:%f \n", (float)x/(float)y);
    }
    return 0;
}

int mult(int x, int y)
{
    printf("La multiplicacion de los numeros es: %d \n", x*y);
    return 0;
}

int fact(int x, int y)
{
    int factorial=1;

    for(y=x ; y>1 ; y--)
    {
        factorial=factorial*y;
    }
    printf("El factorial es de: %d \n", factorial);
    return 0;
}
