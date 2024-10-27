#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int table_id, column, result;

		for (table_id = 0; table_id <= 9; table_id++)
		{
		for (column = 0; column <= 9; column++)
		{
		result = table_id * column;

		if (column > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (result < 10 && column > 0)
		{
			_putchar(' ');
		}

		if (result >= 10)
		{
			_putchar((result / 10) + '0');
		}
			_putchar((result % 10) + '0');

		if (column == 9)
		{
			_putchar('\n');
		}
	}
	}
}
