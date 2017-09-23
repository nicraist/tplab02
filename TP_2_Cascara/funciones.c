#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>
#include <string.h>
#define TAM 20

int obtenerEspacioLibre(EPersona lista[]){
 int i;

    for (i=0;i<TAM;i++)
    {
        if (lista[i].estado==0)
        {
            return i;
        }
    }
    return -1;
}

void cargarPersonas(EPersona lista[], int tam){
    int posicion = obtenerEspacioLibre(lista);
    if(posicion == -1){
        printf("No hay espacio libre!!!\n");
        return;
    }
    EPersona persona;
    printf("\nIngrese nombre: " );
    fflush(stdin);
    gets(persona.nombre);
    printf("\nIngrese edad: ");
    scanf("%d", &persona.edad);
    printf("\nIngrese numero de DNI: ");
    scanf("%d", &persona.dni);
    persona.estado=1;
    lista[posicion] = persona;

}

void mostrarPersona(EPersona lista)
{


    printf("%s--%d--%d\n", lista.nombre, lista.edad, lista.dni);

}

void ordenarPersonas(EPersona lista[], int tam)
{
    int i;
    int j;
    EPersona auxPersona;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if((strcmp(lista[i].nombre, lista[j].nombre)==1)&& lista[i].estado==1)
            {
                auxPersona=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersona;
            }
        }
    }

}

void mostrarTodasLasPersonas(EPersona lista[], int tam)
{
    int i;
    int flag=0;
    for (i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            flag=1;

            mostrarPersona(lista[i]);

        }

    }
    if(flag==0)
    {
        printf("NECESITA CARGAR DATOS PARA MOSTRARLOS\n");
    }

}

int buscarPorDni(EPersona lista[], int dni)
{

    int i;


        for (i=0; i<TAM; i++)
        {
            if(lista[i].dni==dni && lista[i].estado==1)
            {
                 return i;
            }
        }

 return -1;
 }

        void borrarPersonas(EPersona lista[], int dni)
        {
            char rta;
            int posicion=buscarPorDni(lista, dni);

                    if (posicion==-1)
                    {
                        printf("\nNo se ha encontrado el DNI de la persona");
                        return;
                    }

                        printf("Seguro que desea eliminar a esta persona? \n");
                        fflush(stdin);
                        rta=getche();
                        if(rta=='s')
                        {
                            lista[posicion].estado=0;
                        }
                        else
                        {
                            printf("No se ha borrado el dni de la persona que ingreso \n");
                        }

        }

void grafico(EPersona lista[])
{

 int i;
 int rango1=0;
 int rango2=0;
 int rango3=0;

 for (i=0;i<TAM;i++){
    if (lista[i].estado==0){
        continue;
    }

    if (lista[i].edad>0 && lista[i].edad<=18)
    {
        rango1++;
    }
    if (lista[i].edad>18 && lista[i].edad<=35)
    {
        rango2++;
    }
    if (lista[i].edad>35)
    {
        rango3++;
    }
}
rango1=TAM - rango1;
rango2=TAM - rango2;
rango3=TAM - rango3;
 for (i=0;i<TAM;i++){
    if (rango1>0)
    {
     printf("     ");
     rango1--;
    }
    else{
        printf("  *  ");
        }
    if (rango2>0)
    {
        printf("     ");
        rango2--;
    }
    else{
            printf("  *  ");
        }
    if (rango3>0)
    {
        printf("     ");
        rango3--;
    }
    else
       {
           printf("  *  ");
       }
    printf("\n");
 }
 printf(" <=18 19-35 >35 ");

/* PARA ABAJO
 for (i=0;i<TAM;i++){
    if (rango1>0)
    {
     printf("*");
     rango1--;
    }
    else{
        printf(" ");
        }
    if (rango2>0)
    {
        printf("*");
        rango2--;
    }
    else{
            printf(" ");
        }
    if (rango3>0)
    {
        printf("*");
        rango3--;
    }
    else
       {
           printf(" ");
       }
    printf("\n");

}
*/

}


        /*void grafico(EPersona lista[], int tam)
        {
         int i;
         int j;
         rango1=0;
         rango2=0;
         rango3=0;

         if (lista[i].estado==1)&& ((lista[i].edad>0)&&(lista[i].edad<=18))
         {
             rango1++;
         }
         else
        if (lista[i].edad>18)&&(lista[i].edad<=35)
        {
            rango2++;
        }
        else
            rango3++;

        }*/

        /*void grafico(EPersona lista[], int tam)

        {
            int vector[]= {2,3,5,6,1};
            int i;
            int j;
            int max;

            max = 0;
            for (i = 0; i < 5; i++)
            {

                if (vector[i] > max)
                {
                    max = vector[i];
                }
            }

            for (i = max; i > 0; i--)
            {
                for (j = 0; j < tam; j++)
                {
                    if (vector[j].edad >= i)
                    {
                        printf(" *");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                putchar('\n');
            }


        }




        /*void grafico(EPersona lista[], int tam)

        {

           int i;
           int j;
           int max;

           max = 0;
           for (i = 0; i < tam; i++)
           {

                if (lista[i].edad > max)
                {
                    max = lista[i].edad;
                }
           }

           for (i = max; i > 0; i--)
           {
               for (j = 0; j < tam; j++)
               {
                 if (lista[j].edad >= i)
                 {
                    printf(" *");
                 }
                 else
                 {
                    printf("  ");
                 }
               }
              putchar('\n');
           }


        }



        }
        */
