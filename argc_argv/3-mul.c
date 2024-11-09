#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int num1 = atoi(argv[1]), num2 = atoi(argv[2]), resultat;

    if (argc != 3)
    {
    printf("Error\n");
    return (1);
    }


resultat = num1 * num2;

printf("%d\n", resultat);

return (0);
}