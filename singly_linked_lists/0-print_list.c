#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

size_t print_list(const list_t *h)
{
	
	size_t count = 0;
	
	while (h != NULL)
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%lu] %s\n", h->len, h->str);
	}
	count++;
	h = h ->next;

		return (count);

}

/*Écrire une fonction qui imprime tous les éléments d'une liste list_t.

Prototype : size_t print_list(const list_t *h) ;
Retour : le nombre de noeuds
Format : voir l'exemple
Si str est NULL, print [0] (nil)
Vous pouvez utiliser printf*/
