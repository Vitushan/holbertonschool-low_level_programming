#include "main.h"

/**
 * _pow_recursion - Renvoie la valeur de x élevée à la puissance y.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: x élevé à la puissance y. Si y est inférieur à 0, retourne -1.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1); /* Retourne -1 si y est négatif */
    if (y == 0)
        return (1); /* x^0 est toujours 1 */
    return (x * _pow_recursion(x, y - 1)); /* Appel récursif pour x * x^(y-1) */
}