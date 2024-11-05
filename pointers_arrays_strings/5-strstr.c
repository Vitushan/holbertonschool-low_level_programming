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
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *need = needle;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}

		if (*need == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}