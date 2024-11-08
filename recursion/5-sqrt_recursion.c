#include "main.h"

/**
_sqrt_recursion - calcule la racine carrée naturelle d'un nombre
*@n: le nombre dont on cherche la racine carrée
*return: La racine carée naturelle de n, ou -1 si elle n'existe pas.
*/
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1); /* Un nombre négatif n'a pas de racine carrée naturelle */
    return (_sqrt_helper(n, 0)); /* On commence à tester avec i = 0 */
}

int _sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);

        if (i * i == n)
            return (i);

        return (_sqrt_helper(n, i + 1));
}