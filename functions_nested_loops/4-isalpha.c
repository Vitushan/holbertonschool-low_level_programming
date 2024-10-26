#include "main.h"

/**
 * _islower - code return 0 or 1
 * @c: the character to check
 * Return: Always 0.
 */
int _isalpha(int c)
{


	if (('a' <= c && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
