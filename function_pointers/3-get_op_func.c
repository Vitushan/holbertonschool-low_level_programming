#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *  get_op_function - selectionne les bonne operations de calcul
 * @s: operateur choisit par l'utilisateur.
 * return: un pointeur de fonction qui correspond
 *  a l'operateur donner en parametre s.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;
	
	while (ops[i].op != NULL)
	{
		if( ops[i].op == s)
		{	
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
