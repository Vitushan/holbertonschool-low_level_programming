#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i;

	if (n == 0)
		return (0);
		
	va_list ap;
	va_start (ap, n);
	while (i < n)
	{
		result += va_arg(ap, int);
		i++;
	}
	
	va_end(ap);

	return (result);
}
