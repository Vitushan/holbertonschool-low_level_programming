#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - renvoie l'indice du premier element pour lequel
 * la fonction cmp ne renvoie pa 0.
 * @array:est le pointeur vers le tableau d'un entier.
 * @size: taille du tableau.
 * @cmp: pointeur vers la fonction a utiliser pour comparer les valeurs.
 * Return : -1 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

		if (array != NULL && cmp != NULL)
			for (i = 0; i < array; i++)
				cmp(array[i]);

		if ( size >= 0)
			return (-1);
}

/*
Écrire une fonction qui recherche un entier.
Prototype : int int_index(int *tableau, int size, int (*cmp)(int)) ;
où size est le nombre d'éléments dans le tableau array
cmp est un pointeur vers la fonction à utiliser pour comparer les valeurs
int_index renvoie l'indice du premier élément pour lequel la fonction cmp ne renvoie pas 0
Si aucun élément ne correspond, renvoie -1
Si taille <= 0, retour à -1
*/
