#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (h == NULL)
	return (NULL);
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (current && i < idx -1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL & i + 1 != idx)
	{
		free(new_node);
		return (NULL);
	}

	if (current->next == NULL)
	return (add_dnodeint_end(h, n));
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next)
	{
		current->next->prev = new_node;
		current->next = new_node;
	}

	return (new_node);
}


/*Écrire une fonction qui insère un nouveau nœud à une position donnée.

où idx est l'indice de la liste où le nouveau nœud doit être ajouté. L'index commence à 0

Retourne : l'adresse du nouveau nœud,
ou NULL en cas d'échec

s'il n'est pas possible d'ajouter le nouveau noeud à l'index idx, ne pas ajouter le nouveau noeud et renvoyer NULL
Vos fichiers 2-add_dnodeint.c et 3-add_dnodeint_end.c seront compilés pendant la correction.*/
