#include "main.h"

/**
 * print_diagsums - Imprime la somme des deux diagonales d'une matrice carrée
 * @a: Pointeur vers le premier élément de la matrice
 * @size: Taille de la matrice (nombre de lignes ou colonnes)
 */
void print_diagsums(int *a, int size)
{
    int sum_main_diag = 0;
    int sum_secondary_diag = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum_main_diag += a[i * (size + 1)];        /*Diagonale principale */
        sum_secondary_diag += a[(i + 1) * (size - 1)];  /*Diagonale secondaire */
    }

    printf("%d, %d\n", sum_main_diag, sum_secondary_diag);
}