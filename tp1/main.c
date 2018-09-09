#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0,flagA=0,flagB=0;
    float a=0,b=0;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",a);
        printf("2- Ingresar 2do operando (B=%.2f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:
                printf("Ingrese A: ");
                scanf("%f", &a);
                while(a==0)
                    {
                        printf("error, ingrese numero distinto de '0': ");
                        scanf("%f",&a);
                    }
                flagA=1;
                break;
            case 2:
                printf("Ingrese B: ");
                scanf("%f", &b);
                while(b==0)
                    {
                        printf("error, ingrese numero distinto de '0': ");
                        scanf("%f",&b);
                    }
                flagB=1;
                break;
            case 3:
                if(flagA==1 && flagB==1)
                {
                    printf("La suma es igual a %.2f.\n",suma(a,b));
                }
                break;
            case 4:
                if(flagA==1 && flagB==1)
                {
                     printf("El total es: %.2f.\n",resta(a,b));
                }
                break;
            case 5:
                if(flagA==1 && flagB==1)
                {
                    printf("El resultado es: %.2f\n",division(a,b));
                }
                break;
            case 6:
                if(flagA==1 && flagB==1)
                {
                 printf("El producto es: %.2f\n",multiplicacion(a,b));
                }
                break;
            case 7:
                if(flagA==1)
                {
                 printf("El factorial es: %.2f\n",factorial(a));
                }
                break;
            case 8:
                if(flagA==1 && flagB==1)
                {
                    printf("La suma es igual a %.2f.\n",suma(a,b));
                    printf("El total es: %.2f.\n",resta(a,b));
                    printf("El resultado es: %.2f\n",division(a,b));
                    printf("El producto es: %.2f\n",multiplicacion(a,b));
                }
                if(flagA==1)
                {
                    printf("El factorial es: %.2f\n",factorial(a));
                }

                break;
            case 9:
                seguir = 'n';
                break;
            }

    }
    return 0;
}
