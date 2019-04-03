#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float suma(float num1, float num2){

    float result;

    result=num1+num2;
    return result;

}

float resta( float num1, float num2){

    float result;

    result=num1-num2;
    return result;
}

float multiplicacion( float num1, float num2){

    float result;

    result=num1*num2;
    return result;
}

float division( float num1, float num2){

    float result;;

    if(num2 ==0)
    {

        return -1;

    }
    else
    {
        result=num1/num2;
        return result;
    }
}

float factorial( float num){

    int val;

    if(num==0)
    {
        return 1;
    }
    val=num*factorial(num-1);
    return val;
}

int valOpMen(char error[], int desde, int hasta)
{
    int op;
    char rta;

    do
    {

        scanf("%d",&op);

        if(op <= hasta && op >= desde)
        {
            rta='n';
        }
        else
        {

            printf("%s",error);
            fflush(stdin);
            scanf("%c",&rta);
            op=-1;
        }

     }
        while(rta=='s');

         return op;



}

void funcion_getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    gets(input);
}


int funcion_getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    funcion_getString(mensaje,aux);
    if(funcion_ValidarNumero(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


int funcion_ValidarNumero(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}


int funcion_validarNumeroFlotante(char str[])
{
    int i=0;
    int cantidadPuntos=0;
    while(str[i] != '\0')
    {
        if ((str[i] == '.' && cantidadPuntos == 0)|| str[i] == '-')
        {
            cantidadPuntos++;
            i++;
            continue;

        }
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}


int funcion_getStringNumFlotantes(char mensaje[],char input[])
{
    char aux[256];
    funcion_getString(mensaje,aux);
    if(funcion_validarNumeroFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

