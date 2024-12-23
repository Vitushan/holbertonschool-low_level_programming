#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)

		str = "(nil)";
	printf("%s", str);
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_all(const char * const format, ...)
{
	const char *separator = "";
	int i = 0, j;
	va_list args;

	type_f tableau[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};

va_start(args, format);

while (format && format[i])
{
	j = 0;

	while (tableau[j].s != NULL)
	{
		if (format[i] == *(tableau[j].s))
		{
			printf("%s", separator);
			tableau[j].f(args);
			separator = ", ";
			break;
		}
		j++;
	}
	i++;

}

va_end(args);
	printf("\n");
}
