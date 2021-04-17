// TP1-Calculadora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"

/** \brief GUARDA UNA CADENA DE CARACTERES
 *	\param char* CADENA INGRESADA
 *	\param int LARGO MAXIMO DE LA CADENA
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
static int myGets(char* cadena, int longitud);

/** \brief INDICA SI UNA CADENA POSEE SOLO NUMEROS
 *	\param char* CADENA A SER EVALUADA
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
static int esNumerica(char* cadena);

/** \brief SOLICITA UN NUMERO ENTERO
 *	\param int* PUNTERO A GUARDAR EL NUMERO SOLICITADO
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
static int getInt(int* pResultado);
//***********************************************************************************************************************************

static int myGets(char* cadena, int longitud)
{
	int retorno = -1;

	if(cadena != NULL && longitud > 0)
	{
		fflush(stdin);
		fgets(cadena, longitud, stdin);
		cadena[strlen(cadena) -1] = '\0'; // SOLUCION PROVISORIA. Elimina el ingreso del enter al ingresar los datos por  la consola.
		retorno = 0;
	}


return retorno;
}
//***********************************************************************************************************************************

static int esNumerica(char* cadena)
{
	int retorno = 0;
	int i = 0;

		if(cadena[0] == '-')
		{
			i = 1;
		}

		for( ; cadena[i] != '\0'; i++)
		{
			if(cadena[i] < '0' || cadena[i] > '9')
			{
				retorno = -1;
				break;
			}
		}

	return retorno;
}
//***********************************************************************************************************************************

static int getInt(int* pResultado)
{
	int retorno=-1;
	char buffer[4096];

	if(pResultado != NULL && myGets(buffer,sizeof(buffer))==0 && esNumerica(buffer)==0)
	{
		*pResultado = atoi(buffer);
		retorno = 0;
	}


return retorno;
}
//***********************************************************************************************************************************

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos > 0)
	{
		retorno = -2;
		do
		{
			printf("%s", mensaje);

			if (getInt(&bufferInt) == 0 && bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}

			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}



		}while(reintentos >=0);


	}

return retorno;
}
//***********************************************************************************************************************************

int utn_menuDeOpciones(char* mensajeOpciones)
{
	int retorno = -1;

	if(mensajeOpciones != NULL)
	{
		printf("%s", mensajeOpciones);
		retorno = 0;
	}

	return retorno;
}
//***********************************************************************************************************************************
