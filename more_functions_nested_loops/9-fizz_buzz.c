#include <stdio.h>

/**
 * main - Implements the Fizz-Buzz test
 *
 * Description: Prints numbers from 1 to 100, but for multiples of three,
 * it prints "Fizz" instead of the number, and for multiples of five,
 * it prints "Buzz". For numbers which are multiples of both three and five,
 * it prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
	if (number % 3 == 0 && number % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (number % 3 == 0)
	{
		printf("Fizz");
	}
	else if (number % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", number);
	}

	if (number < 100)
	{
		printf(" ");
	}

	}
	printf("\n");

	return (0);
}

