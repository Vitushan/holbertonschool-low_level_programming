#include <stdio.h>
#include "function_pointers.h"


/**
* print_name - Appelle une fonction pour imprimer un nom d'une manière spécifique.
* @name : pointeur vers le nom à imprimer.
* @f : pointeur vers une fonction qui prend un char * et renvoie void.
*
* Return : rien.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)   /*Vérification des pointeurs*/
		f(name);  /*Appelle la fonction passée en argument*/
}
