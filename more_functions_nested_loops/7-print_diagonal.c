#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times to print the character '_'.
 *
 * Return: Always void.
 */
void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
