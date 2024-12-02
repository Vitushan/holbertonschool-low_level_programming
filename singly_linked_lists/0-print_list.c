#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**print_list - imprime tous les éléments d'une liste de type_t.
 @h:Pointeur vers le premier noeud de la liste
 Return: le nombre de caractere imprimé.
*/
size_t print_list(const list_t *h) //structure head (h)
{
	const list_t *current = h; //actuel
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
