#include "main.h"

/**
 * factorial - Renvoie la factorielle d'un nombre donné.
 * @n: Nombre dont on veut calculer la factorielle.
 *
 * Return: La factorielle de n. Si n est négatif, retourne -1 pour indiquer une erreur.
 */
int factorial(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (1);
    return (n * factorial(n - 1));
}