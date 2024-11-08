#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments passés en ligne de commande.
 * @argc: Nombre d'arguments (y compris le nom du programme).
 * @argv: Tableau des arguments (non utilisé ici).
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])
{
	(void)argv; /* On ignore argv */
	printf("%d\n", argc - 1); /* argc - 1 pour ignorer le nom du programme */
	return (0);
}