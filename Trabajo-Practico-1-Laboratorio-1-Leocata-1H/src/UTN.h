// TP1-Calculadora

#ifndef UTN_H_
#define UTN_H_

/** \brief REALIZA EL INGRESO POR CONSOLA DE UN NUMERO ENTERO
 *	\param int* PUNTERO DONDE SE INGRESARA EL NUMERO
 * 	\param char* MENSAJE PARA INGRESAR
 * 	\param char* MENSAJE DE ERROR INDICANDO SI NO SE INGRESO UN NUMERO VALIDO
 * 	\param int RANGO MINIMO
 * 	\param int RANGO MAXIMO
 * 	\param int REINTENTOS EN CASO DE NO INGRESAR CORRECTAMENTE UN NUMERO
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/** \brief MUESTRA UN MENU DE OPCIONES AL USUARIO
 *	\param char* MENSAJE A MOSTRAR
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int utn_menuDeOpciones(char* mensajeOpciones);

#endif /* UTN_H_ */
