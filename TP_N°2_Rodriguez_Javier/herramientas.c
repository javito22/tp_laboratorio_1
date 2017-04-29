#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int obtenerEspacioLibre(EPersona lista[], int cantidad)
{
    int i;
    int bandera=0;
    int resp;
    for(i=0; i<cantidad; i++)
    {
        if(lista[i].estado == 0)
        {
            resp = i;
            bandera = 1;
            break;
        }
    }
    if(bandera==0)
    {
        resp = -1;
    }
    return resp;
}
void ingresarPersona(EPersona lista[], int cantidadLista, int pos)
{
    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(lista[pos].nombre);

    printf("\nIngrese edad: ");
    scanf("%d", &lista[pos].edad);

    printf("\nIngrese dni: ");
    scanf("%d", &lista[pos].dni);

    lista[pos].estado = 1;
}
int buscarPorDni(EPersona lista[], int dni, int cantidad)
{
    int  i;
    int indice;

    for(i=0; i<cantidad; i++)
    {
        if(lista[i].dni == dni && lista[i].estado == 1)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
void baja(EPersona lista[], int cantidad)
{
    int borrar, pos;
    int flag=0;
    char opcion;
    printf("\nIngrese el dni de la persona que solicita borrar: ");
    scanf("%d", &borrar);

    pos = buscarPorDni(lista, borrar, cantidad);


    printf("Esta seguro que desea borrar esta persona? (s/n)\n%d - %s", lista[pos].dni, lista[pos].nombre);
    scanf("%s", &opcion);

    if(opcion=='s')
    {
        lista[pos].estado = 0;
        printf("\nPersona borrada.\n", 130);
        flag = 1;
    }
    else
    {
        printf("\nUsted ha cancelado y no borro la persona.\n");
        flag = 1;
    }
    if(flag == 0)
    {
        printf("\nNo existe el DNI solicitado\n", 162);
    }
}
void listaDePersonas(EPersona lista[], int cantidad)
{
    int i, j;
    EPersona auxiliar;

    for(i=0; i<cantidad-1; i++)
    {
        for(j=i+1; j<cantidad; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
            {
                auxiliar = lista[i];
                lista[i] = lista[j];
                lista[j] = auxiliar;
            }
        }
    }
    printf("\nNombre\tEdad\tDNI\n");

    for(i=0; i<cantidad; i++)
    {
        if(lista[i].estado==1)
        {
            printf("%s\t%d\t%d\n", lista[i].nombre, lista[i].edad, lista[i].dni);
        }
    }
}
void graficar(int menores, int de19Hasta35, int masDe35)
{
    int i, j;
    int max=0;
    int filas[3] = {menores, de19Hasta35, masDe35};

    for(i=0; i<3; i++)
    {
        if(filas[i] > max)
        {
            max = filas[i];
        }
    }
    for(i=max; i>0; i--)
    {
        printf("%d",i);
        for(j=0; j<3; j++)
        {
            if(filas[j] >= i)
            {
                printf("\t*");
            }
            else
            {
                printf("\t ");
            }
        }
        printf("\n");
    }
    printf("\t<18\t19-35\t>35\n");
}
void iniciarEstados(EPersona lista[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        lista[i].estado = 0;
    }
}
