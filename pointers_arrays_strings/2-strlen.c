#include "main.h"
/**
 * _strlen function  returns the lenght of a string.
 * return : lenght of a string
 * **/
int _strlen(char *s)
{
	int longeurChaine = 0;	
	
	while (s[longeurChaine] != '\0')
	{
		longeurChaine++;
	}
	return longeurChaine;
}

