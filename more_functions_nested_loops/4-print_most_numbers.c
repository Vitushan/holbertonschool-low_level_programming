#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: Always void.
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
	if (number != 2 && number != 4)
	
		_putchar(number + '0');
	}
		_putchar('\n');
}
