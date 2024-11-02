#include "main.h"

/**
 * void rev_string
 *  Calculer la longueur de la chaîne
 *  Initialiser j pour qu'il pointe vers le dernier caractère
 *  Inversion de la chaîne
 *  @s caractere s
 *  return: void
 *  **/
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
