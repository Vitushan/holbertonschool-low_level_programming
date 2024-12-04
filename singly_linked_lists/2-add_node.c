#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - Returns the length of a string.
* @str: The string whose length is to be measured.
* Return: The length of the string.
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

/**
 * add_node - permet d'ajouter un nouveau noeud dans une liste deja existant
 * au début.
 * @str: chaine de caractere.
 * @head: un pointeur qui pointe sur un pointeur qui va pointer sur head
 * Return: un pointeur sur le nouveau noeud ou NULL en cas d'echec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
