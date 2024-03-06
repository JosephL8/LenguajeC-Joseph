#include<stdio.h>
main()
{

   int opcion;
   float num1;
   float num2;
   float resultadoPP;
float resultadoSP;
   float resultadoTP;
   float promedio;
   float promedioPARCIAL;

    do{
       system("cls");
    //clear SCREEN

        printf("\t\t--Calcular Promedio--\n");
        printf("1.-Primer Parcial\n2.-Segundo Parcial\n3.-Tercer Parcial\n4.-Calcular Promedio\n5.-Salir del programa\n");
        printf("selecciona una opcion:");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            printf("ingresa la calificacion del examen:");
            scanf("%f",&num1);
            printf("ingresa la calificacion de evaluacion continua:");
            scanf("%f",&num2);
            resultadoPP=(num1 * .3 )+(num2 * .7);
            printf("calificacion de primer parcial:%f\n",resultadoPP);
            break;
        case 2:
            printf("ingresa la calificacion del proyecto:");
            scanf("%f",&num1);
            printf("ingresa la calificacion de evaluacion continua:");
            scanf("%f",&num2);
            resultadoSP=(num1 * .3)+(num2 * .7);
            printf("calificacion de segundo parcial:%f\n",resultadoSP);
            break;
        case 3:
            printf("ingresa la calificacion del examen:");
            scanf("%f",&num1);
            printf("ingresa la calificacion de evaluacion continua:");
            scanf("%f",&num2);
            resultadoTP=(num1 * .3)+(num2 * .7);
            printf("calificacion de tercer parcial:%f\n",resultadoTP);
            break
        case 4:

            promedioPARCIAL=(resultadoPP + resultadoSP + resultadoTP)/3;
            printf("calificaion final:%f\n",promedioPARCIAL);


            break;

        case 5:
            printf("GRACIAS POR UTILIZAR MI PROGRAMA\n");
            break;
        default:
            printf("opcion no valida\n");
            break;
        }
        system("pause");
        }while(opcion!=5);
    }
