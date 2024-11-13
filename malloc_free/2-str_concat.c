#include <stdio.h>

/**
 * str_concat - Concatene deux chaines de caracteres
 * @s1: premiere chaine de caractere.
 * @s2: deuxieme chaine de caractere.
 * Return pointeur vers une nouvelle chaine alloué
 * contenant s1 puis s2 ou NULL en cas d'echec.  
 */
char *str_concat(char *s1, char *s2)
{
   int i, j, len = 0, len2 = 0;
   char *concat_str;


    if (s1 == NULL) /*traiter NULL comme une chaine vide*/
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    /*calculer longeur de s1 et de s2*/
    while (s1[len] != '\0')
        len++;

    while (s2[len2] != '\0')
        len2++;

    /*allouer de la memoire pour la nouvelle chaine*/
    concat_str = (char *)malloc((len + len2 +1) * sizeof(char));
    if ( concat_str == NULL)
        return (NULL);

    /*copier s1 dans concat_str*/

    for (i = 0; i < len; i++)
        concat_str[i] = s1[i];

    for (j = 0; j < len2; j++)
    concat_str[i + j] = s2[j];
    
    concat_str[i + j] = '\0';

    return (concat_str);
    }