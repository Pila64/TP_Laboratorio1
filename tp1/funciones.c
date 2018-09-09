#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


double suma(double a,double b)
{
    double suma;
    suma=a+b;
    return suma;
}
double resta(double a, double b)
{
    double resto;
    resto=a-b;
    return resto;
}
double division(double a, double b)
{
    double resultado;
    if(b==0)
    {
        printf("Error, no puede ser dividido por 0, reingrese los numeros.");
        return 0;
    }
    else
    {
        resultado=a/b;
        return resultado;
    }

}
double multiplicacion(double a, double b)
{
    double producto;
    producto=a*b;
    return producto;
}
double factorial(double a)
{
   double resultado;
   if(a==1)
    return 1;
   resultado=a*factorial(a-1);
   return resultado;

}
