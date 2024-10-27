#include "main.h"

/**
 * main print_last_digit.c
 * - functions prints the last digit number
 *@n int print_last_digit(int)
 * Return: last_digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
		_putchar(last_digit + '0');
	return (last_digit);
}

