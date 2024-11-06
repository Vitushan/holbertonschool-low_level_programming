#include "main.h"

/**
 * _puts_recursion affiche une chaine de caractere
 * suivis d'une nouvelle ligne.
 * @*s pointe sur s
 * return: void
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

