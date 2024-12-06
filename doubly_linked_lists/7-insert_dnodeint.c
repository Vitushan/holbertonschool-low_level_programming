#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - insere un nouveau noeud a une 
* position donnée.
* @h:double pointeur vers la tete de la liste
* @idx: indice ou le nouveau noeud doit etre ajouté
* @n:valeur a inserer dans le nouveau boeud
* Return: adresse du nouveau noeud, ou NULL en cas d'echec
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));



	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL && i + 1 != idx)
		return (NULL);

	if (current != NULL && i + 1 != idx)
		return (NULL);

	if (current != NULL && current->next == NULL)
	return (add_dnodeint_end(h, n));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
