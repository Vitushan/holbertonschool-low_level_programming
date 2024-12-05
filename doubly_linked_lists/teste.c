#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - ajoute un nouveau noeud au debut de la liste
 * dlistint_t
 * @head:double pointeur vers la tete de la liste
 * @n:valeur a ajouter dans le nouvel noeud
 * Return: Adresse du nouvele éléments ou null en cas d'echec.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	return (NULL);

	new_node = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

