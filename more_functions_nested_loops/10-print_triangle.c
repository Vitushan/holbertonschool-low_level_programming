#include "main.h"

/**
*print_triangle - prints a triangle with the character #
*#size: the size of the triangle
* Return: void
*/
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{

			for (j = 0; j < size - i - 1; j++)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
