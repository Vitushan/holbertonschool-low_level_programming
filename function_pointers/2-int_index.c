#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - recherche un entier dans un tableau
 * @array: pointeur vers le tableau d'entiers
 * @size: nombre d'éléments dans le tableau
 * @cmp: pointeur vers la fonction à utiliser pour comparer les valeurs
 * Return: indice du premier élément pour lequel cmp ne renvoie pas 0,
 * ou -1 si aucun élément ne correspond ou si size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				return (i);
			}
		}
	return (-1);
}
