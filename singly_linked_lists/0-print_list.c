#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>


size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");

		}
			else
			{
				printf("[%u] %s\n", current->len, current->str);

			}
			current = current->next;
			count++;
	}
		return (count);
		}
