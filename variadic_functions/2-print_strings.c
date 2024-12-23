#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - imprimes des chaines de caracteres.
 * @n: nombre de chaine transmise a la fonction
 * @separator: caracteres qui separe apres le numero sauf le dernier.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1) /*!= different de / ou n'est pas */
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
