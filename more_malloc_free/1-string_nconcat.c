#include <stdlib.h>

/**
 * str_concat - Concatenates 2 strings et
 * 1 entier non signé
 * @s1: le premier string
 * @s2: le deuxieme string
 * @n: l'entier (int)
 * retourne une nouvelle espace de memoire avec s1, s2, n 
 * et NULL terminator ou NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i;
    char *concat;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;
    
    if (n >=len2)
        n = len2;

    concat = malloc(sizeof(char) * (len1 + n + 1));
        if (concat == NULL)
            return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];
    for (i = 0; i < n; i++)
        concat[len1 + i] = s2[i];
        concat[len 1 + n] = '\0';

        return (concat);

}
