#include "main.h"

/**
 * -sign - Compare if a number is great less or equal of 0
 *@n: Integer to check, given an ascii code.
 *Return 1 and prints + if n is superior a zero
 *Return 0 and prints 0 if n is zero
 *Return -1 and prints less a  zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
