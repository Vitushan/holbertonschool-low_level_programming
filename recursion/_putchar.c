#include <unistd.h>

/**
 * _putchar - écrit le caractere c sur stdout
 * @c: Le caractere a imprimer
 * Return: en cas de succes 1.
 * En cas d'erreur, -1 sinon 0.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
