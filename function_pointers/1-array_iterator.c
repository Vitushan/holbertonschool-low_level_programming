#include <stdio.h>
#include <stdlib.h>

/** array_iterator - execute une fonction donnée
 * sur chaque element d'un tableau.
 * @array: pointeur vers le tableau d'entiers.
 * @size: Taille du tableau
 * @action: pointeur ver la fonction a executer pour chaque elements.

*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
}
