#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
		return (0);
}