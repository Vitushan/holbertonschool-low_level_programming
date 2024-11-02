#include "main.h"

/**
* _strcpy - Copie une chaîne source dans une chaîne de destination
* @dest: Pointeur vers la chaîne de destination
* @src: Pointeur vers la chaîne source
* Return: Pointeur vers la chaîne de destination
*/
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';

	return original_dest;
}
