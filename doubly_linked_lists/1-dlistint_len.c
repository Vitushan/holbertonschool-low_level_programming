#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		len++;
	
	}
	return (len);
}
/**
Écrivez une fonction qui renvoie le nombre d’éléments dans une liste dlistint_t chaînée.
 */
