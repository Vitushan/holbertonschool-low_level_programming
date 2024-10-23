#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int hexa = 0;
	
	for(hexa = 48; hexa <= 57; hexa++) 
		{
			putchar(hexa + 0);
		}
	for (hexa = 97; hexa <= 102; hexa++)
		{
			putchar(hexa+ 0);
		}
	
	putchar('\n');
	return (0);
}
