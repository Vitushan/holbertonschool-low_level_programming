#include "main.h"

/**
* puts2 - Imprime un caractère sur deux d'une chaîne
* @str: La chaîne de caractères à traiter
*
* Description: Cette fonction parcourt la chaîne et imprime
* les caractères aux positions paires (0, 2, 4, etc.),
* suivis d'un retour à la ligne.
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
