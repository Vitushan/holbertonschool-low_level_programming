#include "main.h"

/**
 * main - check the code.
 *
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
