#include <stdlib.h>

/**
 * alloc_grid - Alloue un tableau 2D d'entiers initialisés à zéro.
 * @width: nombre de colonnes
 * @height: nombre de lignes
 * Return: Pointeur vers le tableau 2D ou NULL si l'allocation échoue.
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
