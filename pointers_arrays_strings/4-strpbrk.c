#include "main.h"

/**
* _strprbrk une fonction qui recherche dans une chaîne l'un des octets d'un ensemble. 
* prend en parametre @*s, @accept
* return: 0.
**/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;
		while (*a)
	{
		if (*s == *a)
		return s;
		a++;
	}
	s++;
	}
	return (0);
}
