#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *last;

    // Allocation de mémoire pour le nouveau nœud
    new_node = malloc(sizeof(dlistint_t));

    // Si l'allocation échoue, retourne NULL
    if (new_node == NULL)
        return (NULL);

    // Initialiser le nouveau nœud
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;

    return (new_node);
}
