#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur vers la structure dog à imprimer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d-> name != NULL)
		printff("Name %s\n",d-> name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n",d-> age);

	if (d-> owner != NULL)
		printf("Owner: %s\n", d-> owner);
	else
		printf("Owner: (nil)");
}
