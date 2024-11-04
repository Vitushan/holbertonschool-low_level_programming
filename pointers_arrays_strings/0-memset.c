#include "main.h"

/**
* char *_memset
* La fonction _memset() remplit les n premiers octets de la zone mémoire 
* pointée par s avec l'octet constant b
*Renvoie un pointeur vers la zone mémoire s
* @ *s, @b, @n.
*return: retourne un  unsigned int.
**/
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
