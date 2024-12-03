#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - permet d'ajouter un nouveau noeud dans une liste deja existant
 * au début.
 * @str: chaine de caractere.
 * @head: un pointeur qui pointe sur un pointeur qui va pointer sur head
 * Return: un pointeur sur le nouveau noeud.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
