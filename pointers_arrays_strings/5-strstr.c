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
    while (*haystack)
    {
        char *hay = haystack;
        
        while (*hay)
        {
            if (needle == haystack)
            return (needle);
            hay++;
        }
        needle++;
    }
        return (0);
}