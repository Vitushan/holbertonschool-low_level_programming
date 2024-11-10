#include <stdio.h>

int verifier_nombre(const char *str) {
    // Parcourir chaque caractère de la chaîne
    for (int i = 0; str[i] != '\0'; i++) {
        // Vérifier si le caractère n'est pas un chiffre
        if (!isdigit(str[i])) {
            printf("Error\n");
            return 1; // Retourner 1 en cas d'erreur
        }
    }
    return 0; // Retourner 0 si tout est correct
}


int CalculNombrePositif (int Nombre1 , int Nombre2) {
    if (Nombre1 == NULL && Nombre2 == NULL)
    {
        return 0;
    }

    if (verifier_nombre(Nombre1)==0 && verifier_nombre(Nombre2)==0)
    {
        return Nombre1 + Nombre2;
    }else{

    }
     
    
}


int main (void)
{

   int Resultat = CalculNombrePositif(9,4);
     
}