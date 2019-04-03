#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 9999

int main()
{
    system("COLOR F5");
    menu();

    return 0;
}


int menu(){

    int num1 = 0;
    int num2 = 0;
    int resul1,resul2,resul3,resul4,resul5;


    char auxA[MAX];
    char auxB[MAX];
    float opA;
    float opB;

    char seguir='s';
    int opcion;

    while(seguir=='s')
    {


        system("cls");
        printf("    ***   MENU DE OPCIONES   ***    \n\n");
        printf("\n1_Ingresar primer numero a operar: (A=%d)",num1);
        printf("\n2_Ingresar segundo numero a operar: (B=%d)",num2);
        printf("\n\n ***   Elegir operacion que desee realizar  ***\n\n");
        printf("3_ Suma (A+B)\n");
        printf("4_ Resta (A-B)\n");
        printf("5_ Multiplicacion (A*B)\n");
        printf("6_ Division (A/B)\n");
        printf("7_ Factorial (A!)\n");
        printf("8_ Calcular todas las operaciones\n");
        printf("9_ Salir\n");
        printf("Elija una opcion: ");

        opcion = valOpMen(error,1,9);




        if(opcion==-1)
        {
            return 0;
        }

        switch(opcion)
        {
        case 1:

            system("cls");
            printf("\nIngrese el primer operando: ");

            fflush(stdin);
            scanf("%d",&num1);
            system("cls");
            printf("\n1- Ingresar 1er operando (A=%d)\n2- Ingresar 2do operando (B=%d)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operaciones\n9- Salir\n",num1,num2);
            //system("pause");
             while(!funcion_getStringNumFlotantes("ERROR solo puedes ingresar numeros\n"))
            {
                printf("",auxA);
                system("pause");

            }


            opA=atof(auxA);


            break;
        case 2:
            system("cls");

            printf("\nIngrese el segundo operando: ");

            fflush(stdin);

            scanf("%d",&num2);

            printf("\n1- Ingresar 1er operando (A=%d)\n2- Ingresar 2do operando (B=%d)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operaciones\n9- Salir\n",num1,num2);

                while(!funcion_getStringNumFlotantes("ERROR solo puedes ingresar numeros\n"))
                {
                    printf("",auxB);
                    system("pause");

                }
                opB=atof(auxB);


            break;
        case 3:
            system("cls");
            resul1 = suma(num1,num2);
            printf("\n El resultado de la suma es: %d \n",resul1);
            system("pause");
            break;
        case 4:
            system("cls");
            resul2 = resta(num1,num2);
            printf("\n El resultado de la resta es: %d \n",resul2);
            system("pause");
            break;
        case 5:
            system("cls");

            if(num2==0)
            {
                printf("No se puede dividir por 0, vuelva a\ningresar un segundo operando que sea distinto a 0 \n");
                system("pause");
                break;
            }

            resul3 = division(num1,num2);
            printf("\n El resultado de la division es: %d \n",resul3);
            system("pause");
            break;
        case 6:
            system("cls");
            resul4 = multiplicacion(num1,num2);
            printf("\n El resultado de la multiplicacion es: %d \n",resul4);
            system("pause");
            break;
        case 7:
            system("cls");
            if (num1<1)
            {
                printf("Si desea calcular un factorial, debe ser de un\nnumero mayor que 0 y no debe ser negativo\n");
                system("pause");
                break;
            }
            resul5 = factorial(num1);
            printf("\n El resultado del factorial del primer operando es: %d \n",resul5);
            system("pause");
            break;
        case 8:
            system("cls");
            resul1 = (float) suma(num1,num2);
            resul2 = (float) resta(num1,num2);
            resul3 = (float) division(num1,num2);
            resul4 = (float) multiplicacion(num1,num2);
            resul5 = (float) factorial(num1);

            printf("El resultado de la suma es: %d",resul1);
            printf("\nEl resultado de la resta es: %d",resul2);
            printf("\nEl resultado de la division es: %d",resul3);
            printf("\nEl resultado de la multiplicacion es: %d",resul4);
            printf("\nEl resultado del factorial es: %d\n",resul5);
            system("pause");

            break;
        case 9:
            seguir = 'n';
            break;

        }
    }
}
