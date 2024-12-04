#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* free_list - Libère une liste chaînée de type list_t.
* @head: Pointeur vers la tête de la liste.
*/
void free_list(list_t *head)
{
	list_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo->str);
		free(tempo);
	}
	return (0);
}
