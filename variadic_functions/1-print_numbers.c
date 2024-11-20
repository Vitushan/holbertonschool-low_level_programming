#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned i;
	va_list ptr;
	
	va_start(ptr, n);

	if (separator == NULL)
		printf("%s", separator);
	
	for (i = 0; i < n; i++)
		va_arg(ptr, int);

		va_end(ptr);

			printf("\n");
}
