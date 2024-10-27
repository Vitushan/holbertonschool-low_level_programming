#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int table_id, line, product;

		for (table_id = 0; table_id <= 9; table_id++)
		{
		for (line = 0; line <= 9; line++)
		{
		product = table_id * line;

		if (line > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (product < 10 && line > 0)
		{
			_putchar(' ');
		}

		if (product >= 10)
		{
			_putchar((product / 10) + '0');
		}
			_putchar((product % 10) + '0');

		if (line == 9)
		{
			_putchar('\n');
		}
	}
	}
}
