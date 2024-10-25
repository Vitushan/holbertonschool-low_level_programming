#include "main.h"

/**
 * 
 *_islower(int c) - code return 0 or 1
 *
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
