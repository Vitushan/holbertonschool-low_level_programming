#include "main.h"

/**
*_strlen_recursion - Renvoir la longeur d'une chaine de caracteres.
*@s: pointeur vers la chaine de caracteres.
*Return: La longeur de la chaine de caractere.
*/
int _strlen_recursion(char *s)
{
    if (*s == '\0') /* Condition de fin : si on est a la fin de la chaine.*/
        return (0); /*la longeur est 0 pr le cas de base*/

return (1 + _strlen_recursion(s + 1)); /* appel recursif pr le caractere suivant*/
}
