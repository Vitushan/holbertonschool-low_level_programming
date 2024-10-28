#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: Always void.
 */
void more_numbers(void)
{
	int number = 0;

	while ((number <= 9) && (number >= 14))
	{
		_putchar(number + '0');
	}	
		_putchar('\n');


}
