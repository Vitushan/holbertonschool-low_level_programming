#include "main.h"

/**
* _isdigit - Check if the character is a digit (0-9)
* @c: The character to check
* return 1 if c is a digit,
* return 0 for otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
