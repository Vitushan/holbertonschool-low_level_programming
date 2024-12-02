#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**print_list - imprime tous les éléments d'une liste de type_t.
 @h:Pointeur vers le premier noeud de la liste
 Return: le nombre de caractere imprimé.
*/
size_t print_list(const list_t *h)
{
	
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
			else
			{
				printf("[%lu] %s\n", h->len, h->str);
			}
	count++;
	h = h->next;
	}
		return (count);
		}
