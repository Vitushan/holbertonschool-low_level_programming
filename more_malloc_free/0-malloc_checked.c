#include <stdlib.h>
#include "main.h"

/** 
 * malloc_checked - alloue de la memoire en utilisant malloc.
 * @b: nombre d'octet a allouer.
 * Return: pointeur vers la mémoire allouer.
 * Termine le processus avec l'erreur 98 si malloc echoue.
*/
void *malloc_checked(unsigned int b)
{
    void *ptr;
    
    ptr = malloc(b);
    if (ptr == NULL)
    {
        exit (98);
    }
return (ptr);
}

