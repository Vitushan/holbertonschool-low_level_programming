#include "main.h"

/**
 * int _abs(int n) - code return -n
 * prototype: int _abs(int)
 *calculate absolute functions
 *@n: The integer type
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}

}
