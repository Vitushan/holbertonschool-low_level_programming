#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	n=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("is positive\n");
	else if (0==0)
		printf("is zero\n");
	else
		printf("is negative\n");
	 
	return (0);
}
