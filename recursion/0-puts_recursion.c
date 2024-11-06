#include "main.h"

/**
* _puts_recursion - Imprime une chaîne de caractères 
* suivie d'une nouvelle ligne.
* @s: Pointeur vers la chaîne de caractères à imprimer
* Return: Aucun (void)
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')         /*Si on est à la fin de la chaîne*/
	{
	_putchar('\n');     /*Imprime un retour à la ligne
	return;              Fin de la récursion */
	}
	_putchar(*s);           /*Imprime le caractère actuel
	_puts_recursion(s + 1); Appel récursif avec le caractère suivant*/
}


