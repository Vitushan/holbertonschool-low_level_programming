#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - libere la memoire d'alloc dynamique pour chaque noeud
 * @head: pointeur de tete head
 * Return: rien
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
