// TP1-Calculadora

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/** \brief REALIZA EL CALCULO DE DOS NUMEROS ENTEROS
 *	\param int PRIMER OPERANDO
 * 	\param int SEGUNDO OPERANDO
 * 	\param int* PUNTERO AL RESULTADO
 * 	\param int* PUNTERO A LA FUNCION ESPECIFICA DE LA OPERACION A CALCULAR
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int calcularFull(int parametroA, int parametroB,int* pResultado, int(*pFuncion)(int, int, int*));

/** \brief REALIZA LA SUMA DE DOS NUMEROS ENTEROS
 *	\param int PRIMER OPERANDO
 * 	\param int SEGUNDO OPERANDO
 * 	\param int* PUNTERO AL RESULTADO
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int sumar(int parametroA, int parametroB, int* pResultado);

/** \brief REALIZA LA RESTA DE DOS NUMEROS ENTEROS
 *	\param int PRIMER OPERANDO
 * 	\param int SEGUNDO OPERANDO
 * 	\param int* PUNTERO AL RESULTADO
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int restar(int parametroA, int parametroB, int* pResultado);

/** \brief REALIZA EL PRODUCTO DE DOS NUMEROS ENTEROS
 *	\param int PRIMER OPERANDO
 * 	\param int SEGUNDO OPERANDO
 * 	\param int* PUNTERO AL RESULTADO
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int multiplicar(int parametroA, int parametroB, int* pResultado);

/** \brief REALIZA LA DIVISION DE DOS NUMEROS ENTEROS
 *	\param int PRIMER OPERANDO
 * 	\param int SEGUNDO OPERANDO
 * 	\param int* PUNTERO AL RESULTADO
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int dividir(int parametroA, int parametroB, int* pResultado);

/** \brief REALIZA EL FACTORIAL DE UN NUMERO ENTERO ENTRE EL 0 Y EL 16 COMO RESTRICCION
 *	\param int NUMERO A FACTORIZAR
 * 	\param int* PUNTERO AL RESULTADO
 * 	\return int INDICA SI LA FUNCION SALIO BIEN(0)/MAL(-1).
 */
int factorizar(int parametroA, int* pResultado);

#endif /* FUNCIONES_H_ */



