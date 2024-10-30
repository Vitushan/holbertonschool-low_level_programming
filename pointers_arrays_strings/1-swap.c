#include <stdio.h>

/**
*swap_int - Swaps the value of two integers.
*@a: pointer to the first integer.
*@*b pointer to the second integer.
*return: always void.
**/
void swap_int(int *a, int *b)
{
	int temporaire = *a;
	*a = *b;
	*b = temporaire;
}
