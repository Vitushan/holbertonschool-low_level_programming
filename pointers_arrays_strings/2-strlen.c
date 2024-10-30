#include "main.h"

/**
* _strlen - Returns the length of a string.
* @s: The string whose length is to be measured.
* Return: The length of the string.
*/
int _strlen(char *s)
{
	int longeurChaine = 0;

	while (s[longeurChaine] != '\0')
	{
		longeurChaine++;
	}
	return (longeurChaine);
}
