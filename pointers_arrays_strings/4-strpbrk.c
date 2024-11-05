#include "main.h"

/**
 * _strpbrk - recherche le premier caractère dans `s` qui correspond à l'un des caractères dans `accept`.
 * @s: La chaîne de caractères source à parcourir.
 * @accept: La chaîne contenant les caractères à rechercher dans `s`.
 *
 * Return: Un pointeur vers le premier caractère correspondant dans `s`, ou `NULL` si aucun caractère ne correspond.
 */
char *_strpbrk(char *s, char *accept)
{
	/** Boucle principale : Parcourt chaque caractère de `s` jusqu'à la fin.*/
    while (*s)
    {
        /** Initialise `a` pour commencer au début de `accept`. */
        char *a = accept;

        /**Boucle interne : Parcourt chaque caractère de `accept` pour le comparer avec `*s`.*/
        while (*a)
        {
            /** Vérifie si le caractère courant de `s` est présent dans `accept`.*/
            if (*s == *a)
                return s;  /** Si oui, retourne un pointeur vers ce caractère dans `s`.*/

            a++;  /** Passe au caractère suivant dans `accept`.*/
        }

        s++;  /** Passe au caractère suivant dans `s`.*/
    }
    								/** Si aucun caractère dans `s` ne correspond aux caractères de `accept`, retourne 0.*/
		return (0);
}
