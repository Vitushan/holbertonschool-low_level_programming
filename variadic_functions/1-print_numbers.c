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
		printf("\n");
	
	for (i = 0; i < n; i++)
		va_arg(ptr, int);

		va_end(ptr);
}

/**
Écrire une fonction qui imprime des nombres, suivis d'une nouvelle ligne.
où séparateur est la chaîne de caractères à imprimer entre les nombres
et n est le nombre d'entiers transmis à la fonction
Vous êtes autorisé à utiliser printf
Si le séparateur est NULL, il n'est pas imprimé
Imprimez une nouvelle ligne à la fin de votre fonction
*/
