#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroUno=0;
    int numeroDos=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero:");
                scanf("%d", &numeroUno);
                break;
            case 2:
                printf("Ingrese un numero:");
                scanf("%d", &numeroDos);
                break;
            case 3:
                system("cls");
                suma(numeroUno, numeroDos);
                system("pause");
                break;
            case 4:
                system("cls");
                resta(numeroUno, numeroDos);
                system("pause");
                break;
            case 5:
                system("cls");
                division(numeroUno,numeroDos);
                system("pause");
                break;
            case 6:
                system("cls");
                mult(numeroUno, numeroDos);
                system("pause");
                break;
            case 7:
                system("cls");
                fact(numeroUno, numeroDos);
                system("pause");
                break;
            case 8:
                system("cls");
                suma(numeroUno, numeroDos);
                resta(numeroUno, numeroDos);
                division(numeroUno,numeroDos);
                mult(numeroUno, numeroDos);
                fact(numeroUno, numeroDos);
                system("pause");
                break;
            case 9:
                system("cls");
                seguir = 'n';
                break;
        }


}
 return 0;
}
