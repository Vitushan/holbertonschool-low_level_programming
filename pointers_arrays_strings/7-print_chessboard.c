#include "main.h"

/**
 * print_chessboard - Imprime un échiquier de 8x8
 * @a: Tableau 2D de caractères représentant l'échiquier
 */
void print_chessboard(char (*a)[8])
{
    int i, j;
    
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
}