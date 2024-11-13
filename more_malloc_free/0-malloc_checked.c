#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
    {
        exit (98);
    }
return (ptr);
}

/*Ecrivez une fonction qui alloue de la mémoire en utilisant malloc.
Prototype : void *malloc_checked(unsigned int b) ;
Renvoie un pointeur sur la mémoire allouée
si malloc échoue, la fonction malloc_checked doit provoquer la fin normale du processus avec un statut de 98*/

