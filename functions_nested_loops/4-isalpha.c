#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic (uppercase or lowercase).
 * @c: Character to check, given as an ASCII code.
 *
 * Return: 1 if `c` is a letter, 0 otherwise.
 */
int _isalpha(int c)
{


	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
