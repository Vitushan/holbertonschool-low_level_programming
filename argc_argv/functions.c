#include <stdio.h>
#include <stdlib.h>

/**
 * affiche_caracter - Affiche une chaîne de caractères avec une tabulation
 * @tab: Tableau de caractères (chaîne) à afficher
 *
 * Description: Cette fonction prend une chaîne de caractères et l'affiche
 * avec une tabulation au début et un saut de ligne à la fin.
 */
void affiche_caracter(char tab[])
{
    printf("\t %s\n", tab);
}

/**
 * number - Affiche une chaîne, une séquence de nombres et un résultat
 * @n: Nombre de chiffres à afficher dans la séquence
 * @tab: Tableau de caractères (chaîne) à afficher
 * @add: Valeur à ajouter à n pour le calcul final
 *
 * Description: Cette fonction effectue plusieurs opérations :
 * 1. Affiche la chaîne de caractères passée en paramètre
 * 2. Affiche une séquence de nombres de 1 à n
 * 3. Calcule et affiche la somme de 'add' et 'n'
 */
void number(int n, char tab[], int add)
{
    int i;
    int affiche_addition;

    /* Affiche la chaîne de caractères */
    affiche_caracter(tab);

    /* Affiche les nombres de 1 à n */
    for (i = 0; i < n; i++)
    {
        printf("%d", i + 1);
    }

    /* Calcule et affiche la somme de add et n */
    affiche_addition = add + n;
    printf(" resultat = %d\n", affiche_addition);
}

/**
 * main - Fonction principale du programme
 *
 * Description: Cette fonction initialise des variables et appelle la fonction
 * 'number' avec des paramètres spécifiques.
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
    /* Déclaration et initialisation des variables */
    char beta[] = "alpha bethaha";  /* Non utilisé dans le programme */
    char alpha[] = "jjjjjj ";
    int nunu = 6;

    /* Appel de la fonction number avec les paramètres définis */
    number(nunu, alpha, 98);

    return (0);
}