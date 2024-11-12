#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
        char *array;

        if (size == 0)
        return (NULL);

        array =(char *)malloc(size * sizeof(char)); /*Allocation de memoire dynamique pr le tableau*/
        if (array == NULL)   
            return (NULL);/*Retourne NULL en cas d'echec d'allocation dynamique*/

            for (unsigned int i = 0; i < size; i++)
            {
                array[i] = c;
            }
            return (array);
}
