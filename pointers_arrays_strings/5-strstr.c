#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The main string to search within
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    if (*needle == '\0') return haystack;

    while (*haystack)
    {
        char *h = haystack, *n = needle;
        while (*n && *h == *n) { h++; n++; }
        if (*n == '\0') return haystack;
        haystack++;
    }
    return (0);
}	