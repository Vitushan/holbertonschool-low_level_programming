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

/*Ecrivez une fonction qui alloue de la mémoire en utilisant malloc.
Prototype : void *malloc_checked(unsigned int b) ;
Renvoie un pointeur sur la mémoire allouée
si malloc échoue, la fonction malloc_checked doit provoquer la fin normale du processus avec un statut de 98*/

