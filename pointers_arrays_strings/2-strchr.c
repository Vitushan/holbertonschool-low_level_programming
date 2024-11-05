#include "main.h"

/**
* _strchr - Renvoie un pointeur sur la première occurrence du caractère c dans la chaîne s
* @s: La chaîne à parcourir
* @c: Le caractère à trouver
* Return: Un pointeur vers la première occurrence de c dans s, ou 0 si non trouvé
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
	return (0);
}