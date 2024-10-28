#include "main.h"

/**
 * _isdigit - Checks if the character is a digit (0-9).
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 *         Returns 1 when c is between '0' and '9', inclusive.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
