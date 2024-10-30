#include <stdio.h>

void swap_int(int *a, int *b)
{
 int temporaire = *a;
	*a = *b;
	*b = temporaire;

	printf("a = %d et b = %d.\n", *a, *b);
}

