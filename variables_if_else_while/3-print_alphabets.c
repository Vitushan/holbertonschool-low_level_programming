#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char min = 'a', maj = 'A';

for (min = 'a'; min <= 'z'; min++)
	{
	putchar(min);
	}
for (maj = 'A'; maj <= 'Z'; maj++)
	{
	putchar(maj);
	}
	putchar('\n');
	return (0);
}
