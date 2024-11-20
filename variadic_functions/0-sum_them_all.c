#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - fonction qui renvoie la somme
 * de tout ses parametres
 * @n: nombre
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0; /*stock la somme des nombres (resultat)*/
	unsigned int i;
	va_list ptr; /*permet de gerer les arguments variadiques*/

	if (n == 0)
	return (0);

		va_start(ptr, n); /*initialise ptr pr qu'il pointe vers les arguments apres n*/

			for (i = 0; i < n; i++) /*boucle pour parcourir tout les arguments*/
			result += va_arg(ptr, int); /* va_arg(ptr, int) ajoute chaque argument a la somme (resultat) dans result*/

				va_end(ptr); /*fin de lecture des arguments, lorsque les arguments sont traités on libere ptr (Libère la mémoire de la liste) */

					return (result);
}
