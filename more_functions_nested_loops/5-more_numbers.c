#include "main.h"

/**
* more_numbers - Prints the number from 0 to 14, ten times.
*
* description: This function prints numbers from 0 to 14 in a single line,
* repeating this sequence ten times. Each sequence of numbers is followed by a new line.
*
* Return: this function does not return any value (void)
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
/**
 * more_numbers - Prints the numbers from 0 to 14, ten times.
 *
 * Description: This function prints numbers from 0 to 14 on a single line,
 * repeating this sequence ten times. Each sequence of numbers is followed by
 * a new line.
 *
 * Return: This function does not return any value (void).
 */
