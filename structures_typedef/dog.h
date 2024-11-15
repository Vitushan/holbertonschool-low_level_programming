#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Représente un chien avec ses informations de base
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Description: Structure contenant les informations essentielles d'un chien
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
