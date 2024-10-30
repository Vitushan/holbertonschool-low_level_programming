#include "main.h"

 /**
 * _puts - Affiche une chaîne de caractères sur la sortie standard.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 * Description: Cette fonction prend un pointeur vers une chaîne de 
 * caractères et affiche chaque caractère sur la sortie standard 
 * dans une boucle.
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
