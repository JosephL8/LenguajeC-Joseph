#include<stdio.h>
main ()
{
    int opcion;
    float num1;
    float num2;
    float resultado;
    printf("\t\tMENU DE OPCIONES\n");
    printf("INGRESE LOS NUMEROS QUE DESEA OPERAR:\n");
    printf("1-Sumar\n");
    printf("2-Restar\n");
    printf("3-Multiplicar\n");
    printf("4-Dividir\n");
    printf("ELIGA UNA OPCION:");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("ingresa el primer numero:");
        scanf("%f", &num1);
        printf("ingresa el segundo numero:");
        scanf("%f", &num2);
        resultado = num1 + num2 ;
        printf("El resultado es:%.2f", resultado);
        break;
    case 2:
        printf("ingresa el primer numero:");
        scanf("%f", &num1);
        printf("ingresa el segundo numero:");
        scanf("%f", &num2);
        resultado = num1 - num2 ;
        printf("El resultado es:%.2f", resultado);
        break;
    case 3:
        printf("ingresa el primer numero:");
        scanf("%f", &num1);
        printf("ingresa el segundo numero:");
        scanf("%f", &num2);
        resultado = num1 * num2;
        printf("El resultado es:%.2f", resultado);
        break;
    case 4:
        printf("ingresa el primer numero:");
        scanf("%d", &num1);
        printf("ingresa el segundo numero:");
        scanf("%d", &num2);
        resultado = num1 / num2;
        printf("El resultado es:%.2f", resultado);
        break;
    default:
    printf("OPCION NO VALIDA");
    }
}
