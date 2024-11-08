#include "main.h"

/**
 * _sqrt_helper - Fonction auxiliaire pour trouver la racine carrée naturelle de n.
 * @n: Le nombre dont on veut trouver la racine carrée.
 * @i: Le nombre en cours de test pour voir s'il est la racine carrée de n.
 *
 * Return: La racine carrée naturelle de n ou -1 si elle n'existe pas.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n) /* Si i^2 est supérieur à n, il n'y a pas de racine carrée naturelle */
		return (-1);
	if (i * i == n) /* Si i^2 est égal à n, on a trouvé la racine carrée naturelle */
		return (i);
	return (_sqrt_helper(n, i + 1)); /* Appel récursif avec i incrémenté */
}

/**
 * _sqrt_recursion - Renvoie la racine carrée naturelle d'un nombre.
 * @n: Le nombre dont on veut calculer la racine carrée.
 *
 * Return: La racine carrée naturelle de n ou -1 si elle n'existe pas.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Un nombre négatif n'a pas de racine carrée naturelle */
	return (_sqrt_helper(n, 1)); /* On commence à tester avec i = 1 */
}