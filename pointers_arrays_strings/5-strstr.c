#include "main.h"

/**
 * _strstr - Localise une sous-chaîne
 * @haystack: La chaîne principale dans laquelle chercher
 * @needle: La sous-chaîne à trouver
 *
 * Return: Pointeur vers le début de la sous-chaîne trouvée, ou NULL si non trouvée
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    if (*needle == '\0')
        return (haystack);

    while (*haystack != '\0')
    {
        h = haystack;
        n = needle;

        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (haystack);

        haystack++;
    }

    return (0);
}