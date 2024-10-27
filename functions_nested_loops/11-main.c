#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, separated by a comma and a space.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        _putchar(n + '0'); // Print the current number
        if (n != 98)
        {
            _putchar(',');
            _putchar(' ');
        }
        n += (n < 98) ? 1 : -1; // Increment or decrement n
    }
    _putchar('9'); // Print the tens digit of 98
    _putchar('8'); // Print the units digit of 98
    _putchar('\n'); // New line
}
