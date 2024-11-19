#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fonction qui renvoie la somme
 * de tout ses parametres
 * @n: nombre
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i = 0;
	va_list app;

	if (n == 0)
		return (0);

	va_start(app, n);
	while (i < n)
	{
		result += va_arg(app, int);
		i++;
	}
	va_end(app);

	return (result);
}
