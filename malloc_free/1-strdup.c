#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
    char *p_str; /*pointeur vers la chaine dupliquée*/
    int i, len = 0; /*Déclaration de l'index et de la longeur de la chaine*/

    if (str == NULL) /*Verifie si l'argument str est NULL*/
    return (NULL);

    p_str = (char *)malloc(*str * sizeof(char));
    if (p_str == NULL)
    return (NULL);

    while (str[len] != '\0') /*calcule de la longeur de str pr l'allocation de mémoire*/
        len++;

        p_str = (char *)malloc((len+1) * sizeof(char));/*Allocation de memoire pr la copie de la chaine*/
       
        if (p_str == (NULL))      
        return (NULL); /*retourne NULL si l'allcocation echoue*/
        
        for (i = 0; i < len; i++) /*copie de chaque caractere nul a la fin de la chaine*/
        p_str[i] = str[i];
        
        p_str[len] = '\0'; /*ajout de caractere nul a la fin de la chaine*/

    return (p_str); /*retourne le pointeur vers la chaines dupliquée*/
}
