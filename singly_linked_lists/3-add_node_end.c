#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	if (str == NULL)
	return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
		last_node = last_node->next;

		last_node->next = new_node;

	return (new_node);	
}

/**
 * Écrivez une fonction qui ajoute un nouveau nœud à la fin d'une liste list_t.
Prototype : list_t *add_node_end(list_t **head, const char *str) ;
Return : l'adresse du nouvel élément, ou NULL en cas d'échec
str doit être dupliqué
Vous êtes autorisé à utiliser strdup

 */
