#include "main.h"

/**
 * _abs - Calculate the absolute value of an integer.
 * @n: The integer to check.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}

}
