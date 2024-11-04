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
	unsigned int count = 0; /* on commence a compter a 0*/
	
	int i, j;

	for (i = 0; s[i]; i++) /* on regarde chaque caractere de s*/
	{
	for (j = 0; accept[j]; j++) /* on compare avec chaque caractere de accept*/

	{
	if (s[i] == accept[j]) /* si on trouve une correspondance*/
	{
		count++; /* on augmente le compteur*/
		break; /* on arrete de chercher dans accept et on passe au caractere suivant de s*/
 		}
	}
	if (!accept[j]) /*Si on a parcouru tout accept sans trouver de correspondance*/
	break; /* on arrete tout */
	}
	return (count); /* On renvoie le nombre de caractères correspondants trouvés */
}
