#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Affiche un message d'erreur et quitte le programme
 * @message: Le message d'erreur à afficher
 * @filename: Le nom du fichier concerné
 * @exit_code: Le code de sortie du programme
 */
void error_exit(const char *message, const char *filename, int exit_code)
{
    dprintf(STDERR_FILENO, message, filename);
    exit(exit_code);
}

/**
* main - Copie le contenu d'un fichier dans un autre
*@argc: Nombre d'arguments
* @argv: Tableau des arguments
* Return: 0 en cas de succès, sinon un code d'erreur
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to = -1, rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	error_exit("Usage: cp file_from file_to\n", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file %s\n", argv[1], 98);

    	if (fd_to == -1)
		error_exit("Error: Can't write to %s\n", argv[2], 99);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
		error_exit("Error: Can't write to %s\n", argv[2], 99);
	}

	if (rd == -1)
	error_exit("Error: Can't read from file %s\n", argv[1], 98);

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd %d\n", argv[1], 100);

	if (close(fd_to) == -1)
	error_exit("Error: Can't close fd %d\n", argv[2], 100);

	return (0);
}
