#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - additionne a et b.
 * @a: premiere nombre a additionner.
 * @b: deuxieme nombre a additioner.
 * Return: retourne le resulat d'addition.
 */
int op_add(int a, int b);
{
	return(a + b);
}

/**
 * op_sub - soustrait a et b.
 * @a: premiere nombre a soustraire.
 * @b: deuxieme nombre a soustraire
 * Return: retourne le resulat de la soustraction
 */
int op_sub(int a, int b);
{
	return(a - b);
}

/**
 * op_mul - multiplie a par b.
 * @a: premiere nombre a multiplier.
 * @b: deuxieme nombre a multiplier.
 * Return: retourne le resulat de la multiplication.
 */
int op_mul(int a, int b);
{
	return(a * b);
}

/**
 * op_div - divise a par b.
 * @a: premiere nombre a diviser.
 * @b: deuxieme nombre qui divise.
 * Return: retourne  le resultat de la division.
 */
int op_div(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a / b);
}

/**
 * op_mod - recupere le reste  de la division de a par b.
 * @a: premiere nombre a diviser.
 * @b: deuxieme nombre a diviser.
 * Return: retourne le reste de la division.
 */
int op_mod(int a, int b);
{
	if(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a % b);
}
