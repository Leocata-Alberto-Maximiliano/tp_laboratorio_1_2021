// TP1-Calculadora

#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"
#include "Funciones.h"

#define MIN -1000000
#define MAX 1000000

int main(void)
{
int option;
int valorA;
int valorB;
int res_suma;
int res_resta;
int res_multp;
int res_div;
int res_fact_A;
int res_fact_B;

setbuf(stdout, NULL); // Estoy en Eclipse
printf("\n*****< BIENVENIDO A LA CALCULADORA >*****\n");

	do
    {

	utn_menuDeOpciones("\n\n1-Ingrese primer operando\n2-Ingrese segundo operando\n3-Calcular operaciones\n4-Informar resultados\n5-Salir");

	utn_getNumero(&option,"\n\nELIJA LA OPCION: ", "\nERROR, ELIJA UNA OPCION VALIDA: ",1,5,2);

		switch(option)
        {

        case 1:
        	if(utn_getNumero(&valorA,"\n\nINGRESE UN NUMERO: ", "\nERROR, REINGRESE UN NUMERO: ",MIN,MAX,2)==0)
        	{
        		printf("\n\nINGRESASTE EL %d", valorA);
        	}
        	else
        	{
        		printf("\n\nNO INGRESASTE UN  NUMERO VALIDO");
        	}
        	break;

        case 2:
        	if(utn_getNumero(&valorB,"\n\nINGRESE UN NUMERO: ", "\nERROR, REINGRESE UN NUMERO: ",MIN,MAX,2)==0)
        	{
        		printf("\n\nINGRESASTE EL %d", valorB);
        	}
        	else
        	{
        		printf("\n\nNO INGRESASTE UN  NUMERO VALIDO");
        	}
        	break;

        case 3:
        	printf("\n*****CALCULANDO OPERACIONES...*****\n");
        	break;

        case 4:
        	printf("\n*****INFORME DE RESULTADOS...*****\n");

        	if(calcularFull(valorA, valorB,&res_suma, sumar)==0)
        	{
        		printf("\nEL RESULTADO DE LA SUMA ES: %d", res_suma);
        	}

        	if(calcularFull(valorA, valorB,&res_resta, restar)==0)
        	{
        	   printf("\nEL RESULTADO DE LA RESTA ES: %d", res_resta);
        	}

        	if(calcularFull(valorA, valorB,&res_multp, multiplicar)==0)
        	{
        	   printf("\nEL RESULTADO DE LA MULTIPLICACION ES: %d", res_multp);
        	}

        	/***********************************************************/

        	if(calcularFull(valorA, valorB,&res_div, dividir)==0)
        	{
        	   printf("\nEL RESULTADO DE LA DIVISION ES: %d", res_div);
        	}
        	else
        	{
        		 printf("\nERROR, NO SE PUEDE DIVIDIR POR CERO.");
        	}

        	/***********************************************************/

        	if(factorizar(valorA, &res_fact_A)== 0)
        	{
        		printf("\nEL RESULTADO DEL FACTORIAL DE %d ES: %d",valorA, res_fact_A);
        	}
        	else
        	{
        		printf("\nERROR, NO SE PUEDE REALIZAR EL FACTORIAL.");
        	}

        	if(factorizar(valorB, &res_fact_B)== 0)
        	{
        	    printf("\nEL RESULTADO DEL FACTORIAL DE %d ES: %d",valorB, res_fact_B);
        	}
        	else
        	{
        	    printf("\nERROR, NO SE PUEDE REALIZAR EL FACTORIAL.");
        	}

        	break;

        case 5:

            printf("\n*****ESTA SALIENDO DE LA CALCULADORA, HASTA PRONTO :)*****\n");
            break;


        }

    	}while(option != 5);


return 0;
}

