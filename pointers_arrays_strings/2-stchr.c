#include "main.h"

/**
* fonction _strchr
* Renvoie un pointeur sur la première occurrence du caractère @c dans la chaîne @s,
* ou NULL si le caractère n'est pas trouvé.
* char *_strchr(char *s, char c).
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

		if (*s == c)
		return (s);
		s++;
	}
	if (c == '\0')
	return (s);
	return (NULL);

}
