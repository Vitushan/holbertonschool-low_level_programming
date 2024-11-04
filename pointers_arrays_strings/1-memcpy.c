#include "main.h"

/**
* simple_print_buffer - prints buffer in decimal
* @buffer: the address of memory to print
* @size: the size of the memory to print
* Return: Nothing.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i  = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
