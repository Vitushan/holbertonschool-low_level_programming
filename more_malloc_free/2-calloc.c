#include <stdlib.h>

/**
 * _calloc - alloue de la mémoire pour un tableau d'éléments nmemb de taille octets chacun 
 * et renvoie un pointeur sur la mémoire allouée.
 * @nmemb: nombre d'éléments
 * @size: taille de chaque élément en octets
 * Return: pointeur vers la mémoire allouée, ou NULL si échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int total_size;
    char *ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;

    ptr = malloc(total_size);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total_size; i++)
        ptr[i] = 0;

    return (ptr);
}
