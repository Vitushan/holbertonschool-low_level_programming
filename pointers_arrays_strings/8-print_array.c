#include <stdio.h>
#include "main.h"

/**
 * print_array - Imprime n éléments d'un tableau d'entiers
 * @a: Le tableau d'entiers
 * @n: Le nombre d'éléments à imprimer
 *
 * Description: Cette fonction imprime les n premiers éléments d'un tableau,
 * séparés par une virgule et un espace, suivis d'une nouvelle ligne.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);

	if (i < n - 1)
	{
	printf(", ");
	}
}

	printf("\n");
}
