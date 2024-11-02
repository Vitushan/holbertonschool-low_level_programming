#include "main.h"

/**
* rev_string - Inverse une chaîne de caractères
* @s: la chaîne de caractères à inverser
*
* Cette fonction prend un pointeur vers une chaîne de caractères
* et inverse l'ordre des caractères dans cette chaîne.
* Elle ne retourne rien, car elle modifie directement la chaîne en place.
*/
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	int j;

	while (s[length] != '\0')
	{
		length++;
	}

	j = length - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
