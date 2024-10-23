#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int nb1 = 0;
	
	for (nb1 = 48; nb1 <= 57; nb1++) 
       {
		putchar(nb1);
       
		if (nb1 != 57)
		{
			putchar(',');
			putchar(' ');
		}	
       }
	putchar('\n');
	return (0);
}
