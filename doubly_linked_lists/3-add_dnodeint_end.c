#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - Ajoute un nouveau noeud a la fin d'une liste
* dlistint_t.
* @head: Double pointeur vers la tete de la liste.
* @n: Valeur a ajouter dans le nouveau noeud
@last:dernier pointeur sur noeud
* Return: Adresse du nouvel élement, ou NULL si echec.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

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

	last = *head;
	while (last->next != NULL)
	last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
