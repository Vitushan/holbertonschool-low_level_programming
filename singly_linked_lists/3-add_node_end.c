#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - permet d'ajouter le dernier noeud dans une liste deja existant
 * au début.
 * @str: chaine de caractere.
 * @head: un pointeur qui pointe sur un pointeur qui va pointer sur head
 * Return: un pointeur sur le nouveau noeud ou NULL en cas d'echec.
 */
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
	list_t *last_node = *head;

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
		}
		else
		{
			while (last_node->next != NULL)
			{
			last_node = last_node->next;
			}

		last_node->next = new_node;
	}
	return (new_node);
}
