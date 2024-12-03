#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - Imprime tous les éléments d'une liste de type list_t.
 * @h: Pointeur vers le premier nœud de la liste.
 * @size_t: imprime le nombre total de caractere.
 * Return: Le nombre total de caractères dans toutes les chaînes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

		}
			else
			{
				printf("[%u] %s\n", h->len, h->str);

			}
			h = h->next;
			count++;
	}
		return (count);
		}
