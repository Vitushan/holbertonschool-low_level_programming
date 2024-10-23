#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
 
	char min , e = 'e' , q = 'q';

	for (min = 'a'; min <= 'z'; min++)
	{
		if(min != e && min != q)
	
		putchar(min);
	}
		putchar('\n');
	
	return (0);
}
