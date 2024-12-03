#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>



size_t list_len(const list_t *h)
{
	size_t count = 0;

	while ( h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
