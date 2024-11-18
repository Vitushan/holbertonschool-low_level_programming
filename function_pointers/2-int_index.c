#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - renvoie l'indice du premier element pour lequel
 * la fonction cmp ne renvoie pa 0.
 * @array:est le pointeur vers le tableau d'un entier.
 * @size: taille du tableau.
 * @cmp: pointeur vers la fonction a utiliser pour comparer les valeurs.
 * Return : -1 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

		if (array == NULL || cmp == NULL || size <= 0)
			return (-1);
			
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)	
					return (i);
			}
		return (-1);
}
