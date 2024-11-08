#include "main.h"

/*
_sqrt_recursion -
*/
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1); /* Un nombre négatif n'a pas de racine carrée naturelle */
    return (_sqrt_helper(n, 0)); /* On commence à tester avec i = 0 */
}