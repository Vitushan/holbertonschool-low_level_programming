#include "main.h"

/**
* puts_half - Imprime la seconde moitié d'une chaîne
* @str: La chaîne de caractères à traiter
* Description: Cette fonction imprime la seconde moitié de la chaîne.
* Si la longueur est impaire,
* elle imprime les (longueur - 1) / 2 derniers caractères.
*/
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
