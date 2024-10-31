#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères à l'envers,
 * suivie d'une nouvelle ligne.
 * @s: Pointeur sur la chaîne de caractères à afficher en inverse.
 *
 * Cette fonction prend une chaîne de caractères et l'affiche à l'envers,
 * suivie d'un caractère de nouvelle ligne.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

		while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
