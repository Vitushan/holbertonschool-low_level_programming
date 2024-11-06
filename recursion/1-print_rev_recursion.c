#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractères à l'envers,
 * suivie d'une nouvelle ligne.
 * @s: Pointeur vers la chaîne de caractères à afficher en sens inverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0') /* Condition de fin : Si on atteint la fin de la chaîne */
    {
        return; /* On sort de la récursion */
    }
    _print_rev_recursion(s + 1); /* Appel récursif avec le caractère suivant */
    _putchar(*s); /* Imprime le caractère actuel après l'appel récursif */
}
