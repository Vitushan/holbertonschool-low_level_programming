#include "main.h"

/**
* _puts_recursion - Imprime une chaîne de caractères 
* suivie d'une nouvelle ligne.
* @s: Pointeur vers la chaîne de caractères à imprimer
* Return: Aucun (void)
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		s++;
		_putchar('\n');
	}
}

