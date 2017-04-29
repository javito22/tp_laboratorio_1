#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "herramientas.c"

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona lista[20];
    int estado=0;
    int lugar;
    int i;
    int menosde18, desde19Hasta35, masDe35;


    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                if(estado==0)
                {
                    iniciarEstados(lista, 20);
                    estado=1;
                }
                lugar = obtenerEspacioLibre(lista, 20);
                if(lugar==-1)
                {
                    printf("No hay mas espacio");
                    break;
                }
                ingresarPersona(lista, 20, lugar);
                break;
            case 2:
                system("cls");
                baja(lista, 20);
                system("pause");
                break;
            case 3:
                system("cls");
                listaDePersonas(lista,20);
                system("pause");
                break;
            case 4:
                system("cls");
                int menosde18=0;
                int desde19Hasta35=0;
                int masDe35=0;
                for (i=0;i<20;i++)
                {
                    if(lista[i].estado==1)
                    {
                        if(lista[i].edad<18)
                        {
                            menosde18++;
                        }
                        else if (lista[i].edad<36)
                        {
                            desde19Hasta35++;
                        }
                        else
                        {
                            masDe35++;
                        }
                    }
                }
                graficar(menosde18,desde19Hasta35,masDe35);
                system("pause");
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
