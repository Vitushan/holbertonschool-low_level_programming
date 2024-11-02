#include <limits.h>

/**
 * _atoi - Convertit une chaîne en entier
 * @s: Chaîne à convertir
 *
 * Return: L'entier converti ou 0 si aucun nombre n'est trouvé
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;
	while (*s)
	{
		if (*s == '-' && !started)
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
	{
		started = 1;
	if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
	return (sign == 1) ? INT_MAX : INT_MIN;
	result = result * 10 + (*s - '0');
	}
	else if (started)
	break;
	s++;
	}
return (result * sign);
}
