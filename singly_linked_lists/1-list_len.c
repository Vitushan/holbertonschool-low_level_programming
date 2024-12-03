#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * list_len - calcul les caracteres imprimer.
 * @h:Pointeur vers le premier noeud de la liste.
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
