#include "main.h"

/**
 *void print_triangle
 print triangle with charactere #
 *
 * Return: blank or #.
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
