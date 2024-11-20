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
	int result = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
	return (0);

		va_start(ptr, n);

			for (i = 0; i < n; i++)
			result += va_arg(ptr, int);

				va_end(ptr);

					return (result);
}
