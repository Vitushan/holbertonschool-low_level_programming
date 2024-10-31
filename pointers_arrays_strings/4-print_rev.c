#include "main.h"

/**
 * void print_rev
 * @ caractere pointé sur *s 
 * affiche la chaine de caractere a l'envers,
 * suivis d'une nouvelle ligne.
 * return: void.
 * **/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
