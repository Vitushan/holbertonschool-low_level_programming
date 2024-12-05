#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint_len - est une fonction qui retourne le nombre d'élement.
 * @h: est un pointeur qui pointe ver le premier noeud
 * Return: le nombre d'elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
