#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -renvoie le nième nœudd'une liste double.
 *@head: Pointeur vers le premier nœud de la liste.
 *@index: Index du nœud, à partir de 0.
* Return: Pointeur vers le nième nœud, ou NULL si le nœud n'existe pas.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
