#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Imprime les informations d'une structure dog
 * @d: Pointeur vers la structure dog à imprimer
 *
 * Description :
 * Cette fonction affiche les informations contenues dans la
 * structure dog. Si un champ est NULL, elle imprime "(nil)" à
 * la place de la valeur. Si le pointeur vers la structure est NULL,
 * la fonction ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Nom : %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Âge : %.6f\n", d->age);
		printf("Propriétaire : %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
