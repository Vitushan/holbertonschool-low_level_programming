#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - Supprime le nœud à un index donné dans une liste doubly linked list.
* @head: Double pointeur vers le début de la liste.
* @index: Index du nœud à supprimer (commence à 0).
* Return: 1 en cas de succès, -1 en cas d'échec.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;
	if (current->prev)
	current->prev->next = current->next;

	free(current);
	return (1);
}

/**
 * Écrire une fonction qui supprime le nœud à l'index d'une liste chaînée de dlistint_t.

où index est l'index du nœud à supprimer. L'index commence à 0

Renvoie : 1 en cas de succès, -1 en cas d'échec
 */
