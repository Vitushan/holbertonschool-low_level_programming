#include "main.h"

/**
 * is_prime_helper - Vérifie si un nombre est divisible par un diviseur donné.
 * @n: Le nombre à vérifier.
 * @divisor: Le diviseur en cours de vérification.
 *
 * Return: 1 si n est premier, sinon 0.
 */
int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0)
		return (0); /* n est divisible par divisor, donc n n'est pas premier */
	if (divisor * divisor > n)
		return (1); /* Aucun diviseur trouvé, donc n est premier */
	return (is_prime_helper(n, divisor + 1)); /* Vérification récursive */
}

/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si n est premier, sinon 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Les nombres <= 1 ne sont pas premiers */
	return (is_prime_helper(n, 2)); /* Commence la vérification avec divisor = 2 */
}