#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{

	char alpha = 'a';
	int alph = 0;
	while (alpha <= 'z') && (alph <= 10)
	{
		_putchar(alpha);
		alpha++;
	}
	return (0);
}
