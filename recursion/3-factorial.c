#include "main.h"

/** 
* factorial - renvoie la factorielle d'un nombre donné.
*@n sur le parametre n
*Return: -1 indique une erreur si n est inferieur a zero.
La factorielle de 0 est 1 .
*/
int factorial(int n)
{
    /* Déclaration de ma fonction factorialTehZebi*/ 
int factorial = 0, nTehZebi = 0;
    
    if (nTehZebi < 0) {
    return -1; //Erreur pour les nombres négatifs on renvoie -1
  }

  if (nTehZebi == 0) {
    return 1; // La factorielle de 0 est 1 donc on renvoie 1
  }

  int resultatTehZebi = 1;
  for (int i = 1; i <= nTehZebi; i++)//Tant que i <= nTehZebi on execute l'instruction
  {
    resultatTehZebi *= i; // ici on multiplie resultatTehZebi avec i
  }

  return resultatTehZebi;
} 
