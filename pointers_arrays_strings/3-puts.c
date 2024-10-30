#include "main.h"
/**
 *void _puts est une fonction
 *qui imprimes les chaines de caracteres
 dans le pointeur str
 *
 * avec une boucle en incremantant i.
 *return: void
**/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
