#include <stdlib.h>

/**
 *alloc_grid - Allour un tableau 2d d'entiers initialisés a zero
 *un tableau d'entier a deux dimensions.
 *@:width largeur du tableau (nombre de colonne)
 *@:height  hauteur du tableau (nombre de ligne)
 Return: pointeur vers le tableau 2D (int**), ou NULL en cas d'echec
 */
int **alloc_grid(int width, int height)
{
    int i, j;
    int **grid;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }  
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }
    return (grid);
}
