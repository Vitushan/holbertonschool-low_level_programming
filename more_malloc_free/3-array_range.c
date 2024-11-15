#include <stdlib.h>


/**
 * array_range - Crée un tableau d'entiers.
 * @min: La valeur minimale (incluse).
 * @max: La valeur maximale (incluse).
 *
 * Return: Pointeur vers le nouveau tableau, ou NULL si échec.
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, size;

    /* Vérifier si min > max */
    if (min > max)
        return (NULL);

    /* Calculer la taille du tableau */
    size = max - min + 1;

    /* Allouer la mémoire pour le tableau */
    arr = malloc(sizeof(int) * size);

    /* Vérifier si l'allocation a échoué */
    if (arr == NULL)
        return (NULL);

    /* Remplir le tableau avec les valeurs de min à max */
    for (i = 0; i < size; i++)
        arr[i] = min + i;

    return (arr);
}
