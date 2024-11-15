#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialise une structure chien
 * @d: Pointeur vers la structure à initialiser
 * @name: Pointeur vers le nom du chien
 * @age: Âge du chien
 * @owner: Pointeur vers le propriétaire du chien
 *
 * Description :
 * Cette fonction initialise les champs de la structure chien 
 * avec les valeurs fournies : nom, âge et propriétaire. Si le
 * pointeur vers la structure est NULL, la fonction ne fait rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
