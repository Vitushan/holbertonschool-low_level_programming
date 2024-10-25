#include "main.h"
/**
 * _islower - code return 0 or 1
 * @c: the character to check
 * Return: Always 0.
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	return (0);
}
