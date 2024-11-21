#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - imprime des nombres
 * @separator: chaine de caractere.
 * @n: nombre d'argument pris en compte.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
