#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
