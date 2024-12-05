#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - est une fonction qui retourne le nombre de noeud
 * @h: est un pointeur qui pointe ver le premier noeud
 * Return: le nombre de noeud.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
