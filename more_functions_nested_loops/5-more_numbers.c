#include "main.h"

/**
* print_more_numbers -
* void more_numbersPrints the numbers from 0 to 14 by 10.
* followed by a new line.
*
* Return: Always void.
*/
void more_numbers(void)
{
	int line, number;

	for (line = 0; line < 10; line++)
	{
	for (number = 0; number <= 14; number++)
	{
		if (number > 9)
		{
			_putchar((number / 10) + '0');
		}
			_putchar((number % 10) + '0');
		}
			_putchar('\n');
	}
}
