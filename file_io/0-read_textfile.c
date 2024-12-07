#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Lit un fichier texte et l'imprime sur la sortie standart POSIX
 * @filename: le nom du fichier a lire
 * @letters:le nombre de lettre a lire et imprimer
 * Return: le nombre de caractere lues et imprimée
 * ou 0 en cas d'echec.
 */
