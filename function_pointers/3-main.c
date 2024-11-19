#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int result = 0, num1 = 0, num2 = 0;
	

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func (argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (*get_op_func(argv[2]))(num1, num2);
	
	printf("%d\n", result);
	return (0);
}
