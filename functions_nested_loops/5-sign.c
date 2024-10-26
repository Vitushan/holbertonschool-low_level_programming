#include "main.h"

/**
 * int print_sign(int n)- check the code.
 *int print_sign and number
 *
 * Return: Always 0 , 1 or -1;
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
