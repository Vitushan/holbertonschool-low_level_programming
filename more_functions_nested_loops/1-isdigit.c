#include "main.h"

/**
* _isdigit - Check if c is number
* followed by a new line.
* @n: The checking number
* return 1 if number and 0 if not number
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
