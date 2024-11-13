#include <stdlib.h>
/**
 * free_grid - Libère une grille bidimensionnelle allouée par alloc_grid.
 * @grid: double pointeur de type int représentant la grille à libérer
 * @height: nombre de lignes de la grille (hauteur)
 */
void free_grid(int **grid, int height)
{
    int i;

    for(i= 0; i < height; i++) /*libere chaque sous tableau alloué*/
    {
        free(grid[i]);
    }

    free(grid); /* libere le tableau principal*/

}
