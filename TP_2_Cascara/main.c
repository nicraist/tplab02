#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"
#include <conio.h>
#include <string.h>
#define TAM 20


int main()
{
    char seguir='s';
    int opcion=0;
    int i;
    int dni;

    EPersona listaPersonas[TAM];


    for(i=0; i<TAM; i++)
    {
        listaPersonas[i].estado=0;
    }


    while(seguir=='s')
    {
        printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
        printf("\n         บ               ABM  by: Nicolas Villalba                 บ");
        printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");

        printf("\n1- Agregar una persona\n");
        printf("\n2- Borrar persona\n");
        printf("\n3- Mostrar lista ordenada por  nombre\n");
        printf("\n4- Mostrar grafico de edades\n\n");
        printf("\n5- Salir\n");


        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
        case 1:
            cargarPersonas(listaPersonas, TAM);

            system("cls");
            break;
        case 2:

            printf("\nIngrese dni a borrar: ");
            scanf("%d", &dni);
            borrarPersonas(listaPersonas, dni);

            break;
        case 3:
            ordenarPersonas(listaPersonas, TAM);
            mostrarTodasLasPersonas(listaPersonas, TAM);

            break;
        case 4:
             grafico(listaPersonas);
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}







