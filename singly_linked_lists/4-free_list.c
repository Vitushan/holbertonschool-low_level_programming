#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

void free_list(list_t *head)
{
	(if head == NULL)
		return (NULL);

	free(head);
	return (0);
}
