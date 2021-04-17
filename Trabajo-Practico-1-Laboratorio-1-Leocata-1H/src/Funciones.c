// TP1-Calculadora

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int calcularFull(int parametroA, int parametroB,int* pResultado, int(*pFuncion)(int, int, int*))
{
	int retorno = -1;

	if(pResultado != NULL && pFuncion != NULL && pFuncion(parametroA, parametroB, pResultado) == 0)
	{
		retorno = 0;
	}


	return retorno;
}
//***********************************************************************************************************************************

int sumar(int parametroA, int parametroB, int* pResultado)
{
	int retorno = -1;
	if(pResultado != NULL)
	{
		*pResultado = parametroA + parametroB;
		retorno = 0;
	}

return retorno;
}
//***********************************************************************************************************************************

int restar(int parametroA, int parametroB, int* pResultado)
{
	int retorno = -1;
	if(pResultado != NULL)
	{
		*pResultado = parametroA - parametroB;
		retorno = 0;
	}
return retorno;
}
//***********************************************************************************************************************************

int multiplicar(int parametroA, int parametroB, int* pResultado)
{
	int retorno = -1;
	if(pResultado != NULL)
	{
		*pResultado = parametroA * parametroB;
		retorno = 0;
	}
return retorno;
}
//***********************************************************************************************************************************

int dividir(int parametroA, int parametroB, int* pResultado)
{
	int retorno = -1;
	if(pResultado != NULL && parametroB != 0)
	{
		*pResultado = parametroA/parametroB;
		retorno = 0;
	}
return retorno;
}
//***********************************************************************************************************************************

int factorizar(int parametroA, int* pResultado)
{
    int retorno = -1;

    if(pResultado != NULL && parametroA >= 0 && parametroA <= 16)
    {
    	if(parametroA == 0)
    	{
    	  *pResultado = 1;
    	  retorno = 0;
    	}

    	else
    	{
    	   *pResultado = 1;

    	   	for(int i = parametroA; i > 0; i--)
    	    {

    	        	*pResultado = *pResultado * i;
    	    }

    	retorno = 0;

    	}

    }

return retorno;
}
//***********************************************************************************************************************************
