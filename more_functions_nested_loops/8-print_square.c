#include "main.h"

/**
 * print_square - Prints a square using '#' characters
 * @size: The size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int line, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
//col = column (colonne)