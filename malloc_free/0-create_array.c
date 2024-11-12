#include <stdlib.h>
#include "main.h"

/**
 * create_array - Crée un tableau de caractères et l'initialise
 * @size: Taille du tableau à créer
 * @c: Caractère pour initialiser chaque élément du tableau
 * 
 * Return: Pointeur vers le tableau initialisé, ou NULL en cas d'échec
 */
char *create_array(unsigned int size, char c)
{
	char *array; /* Déclaration du pointeur pour le tableau */
	unsigned int i; /* Déclaration de l'index pour la boucle */

	/* Vérifie si la taille est 0, retourne NULL dans ce cas */
	if (size == 0)
		return (NULL);

	/* Allocation dynamique de mémoire pour le tableau */
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL); /* Retourne NULL en cas d'échec d'allocation */

	/* Remplit le tableau avec le caractère spécifié */
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array); /* Retourne le pointeur vers le tableau créé */
}
