#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - Imprime tous les éléments d'une liste de type list_t.
 * @h: Pointeur vers le premier nœud de la liste.
 * 
 * Retourne: Le nombre total de caractères dans toutes les chaînes.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");

		}
			else
			{
				printf("[%u] %s\n", current->len, current->str);

			}
			current = current->next;
			count++;
	}
		return (count);
		}
