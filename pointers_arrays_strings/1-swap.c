#include <stdio.h>

/**
* swap_int - Swaps the values of two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Description:
* This function swaps the values of two integers by using their pointers.
* A temporary variable is used to hold the value during the swap.
*
* Return: Always void.
*/
void swap_int(int *a, int *b)
{
	int temporaire = *a;
	*a = *b;
	*b = temporaire;
}
