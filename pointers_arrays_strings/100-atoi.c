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
	int digit;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (result > (2147483647 - digit) / 10)
			return (sign == 1) ? 2147483647 : -2147483648;
		result = result * 10 + digit;
		s++;
	}

	return (result * sign);
}
