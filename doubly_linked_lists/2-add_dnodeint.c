#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;

		if (*head == NULL)
			{
				*head = new_node;
				return (new_node);
			}

		last_node = *head;

		while (last_node->next != NULL)
		last_node = last_node->next;

		last_node->next = new_node;
		new_node->prev = last_node;

	return (new_node);
}
