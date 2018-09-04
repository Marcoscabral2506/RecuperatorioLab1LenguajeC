#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int opcion;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMult;
    float resultadoDiv;
    float resultadoFac;
    float a;
    float b;
    int flag=0;
    int flag2=0;

    do
    {
        printf("1. Ingresar 1er operando (A=%.1f)\n",a);
        printf("2. Ingresar 2do operando (B=%.1f)\n",b);
        printf("3. Calcular todas las operaciones\n");

        printf("4. Informar resultados\n");
        printf("5. Salir\n");

        scanf("%d", &opcion);


        switch(opcion)
        {
        case 1:
            flag=1;
            a=pedirNumero('a');
            printf("\nSu primer numero es %.2f\n", a);
            break;

        case 2:
            flag2=1;
            b=pedirNumero('b');
            printf("\nSu segundo numero es %.2f\n", b);

            break;

        case 3:
            if(flag==1 && flag2==1)
            {
                resultadoSuma=sumar(a,b);
                resultadoResta=restar(a,b);
                resultadoMult=validarDivision(a,b);
                resultadoDiv=multiplicar(a,b);
                resultadoFac=validarFactorial(a);
                if(resultadoFac==1)
                {
                  printf("Erorr! Introduzca un numero entero positivo para calcular el factorial\n");
                }
                printf("Operaciones finalizadas\n");
            }
            else
            {
                printf("Usted no ingreso un numero para operar\n");
            }

            break;

        case 4:
            if(flag==1 && flag2==1)
            {
                mostrarResultados(a,b);

            }
            else
            {
                printf("Usted no a realizado ninguna operacion para mostrar su resultado\n");
            }
            break;

        case 5:
            break;

        default:

            printf("Ingrese una opcion valida!!!");

        }

        system("pause");
        system("cls");

    }
    while(opcion!=5);

    return 0;
}
