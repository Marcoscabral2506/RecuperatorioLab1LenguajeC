#include <stdio.h>
#include "funciones.h"

float sumar(float a, float b)
{
    float resultado;
    resultado=a+b;
    return resultado;
}

float restar(float a, float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}

float dividir(float a, float b)
{
    float resultado;
    resultado=a/b;
    return resultado;
}

float validarDivision(float a, float b)
{
    float retorno;
    if(b==0)
    {
        retorno=1;
        printf("No se puede dividir por 0\n");
    }
    else
    {
        dividir(a,b);
        retorno=0;
    }
    return retorno;
}

float multiplicar(float a, float b)
{
    float resultado;
    resultado=a*b;
    return resultado;
}

float pedirNumero(char letra)
{
    float numero;
    printf("\nIngrese un numero %c\n", letra);
    scanf("%f", &numero);
    return numero;

}

void mostrarResultados(float a, float b)
{
    int aux1;
    int aux2;
    float retorno;

    printf("El resultado de %.1f+%.1f es: %.1f\n",a,b,sumar(a,b));
    printf("El resultado de %.1f-%.1f es: %.1f\n",a,b,restar(a,b));

    retorno=validarDivision(a,b);
    if(retorno==0)
    {
        printf("El resultado de %.1f/%.1f es: %.1f\n",a,b,dividir(a,b));
    }

    printf("El resultado de %.1f*%.1f es: %.1f\n",a,b,multiplicar(a,b));

    aux1=validarFactorial(a);
    aux2=validarFactorial(b);

    if(aux1==0 && aux2==0)
    {
        printf("el factorial de %.1f es %d y el factorial de %.1f es %d\n", a,factorial(a),b,factorial(b));


    }
    else
    {

        printf("Erorr! Introduzca un numero entero positivo para calcular el factorial\n");

    }
}

int validarFactorial(int a)
{
    int retorno=0;
    if(a<0)
    {

        retorno=1;
    }
    else
    {
        factorial(a);
    }
    return retorno;
}

int factorial(int numero)
{
    int a;
    int fact=1;
    for(a=1; a<=numero; a=a+1)
    {
        fact=fact*a;
    }
    return fact;


}
