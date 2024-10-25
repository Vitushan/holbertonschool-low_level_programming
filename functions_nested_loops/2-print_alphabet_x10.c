#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{

	char alpha = 'a';
	int alph = 0;
	
	for (alph = 0 ; alph < 10 ; alph++)
	{
		for (alpha = 'a' ; alpha <= 'z';alpha++)
		{
			_putchar(alpha);
		}
		_putchar ('\n');
	}


}
