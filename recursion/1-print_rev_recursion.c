#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères à l'envers,
 * suivie d'une nouvelle ligne.
 * @s: Pointeur sur la chaîne de caractères à afficher en inverse.
 * Cette fonction prend une chaîne de caractères et l'affiche à l'envers,
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	
		i--;
	
	for (; i >= 0; i--)
		_putchar(s[i];
}

