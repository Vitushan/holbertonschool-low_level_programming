#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint - renvoie la sommede toute les donnée
* (n) d'une liste chainé dlistint_
* @head:Pointeur vers le premier nœud de la liste.
* Return: somme ou 0 si liste est vide
*/
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}

	return (somme);
}
