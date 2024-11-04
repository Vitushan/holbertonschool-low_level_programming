#include "main.h"

/**
* _strspn - récupère la longueur d'une sous-chaîne de préfixes.
* @s: la chaîne à examiner
* @accept: la chaîne contenant les caractères à compter*
* Return: Renvoie le nombre d'octets dans le segment initial de s
* qui consiste uniquement en octets provenant de accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
	for (j = 0; accept[j]; j++)
	{
	if (s[i] == accept[j])
	{
		count++;
		break;
 		}
	}
	if (!accept[j])
	break;
	}
	return (count);
}
