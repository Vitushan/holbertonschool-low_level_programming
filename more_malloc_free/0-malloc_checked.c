#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - alloue de la memoire en utilisant malloc
 * @b: nombre d'octets a allouer
 *
 * Return: pointeur vers la memoire allouee
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
    return (ptr);
}
